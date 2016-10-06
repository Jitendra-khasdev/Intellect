#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>


#define AUFS_MAGIC_NUMBER 1234

static void aufs_put_super(struct super_block *sb)
{
      pr_debug("aufs super block destroyed\n");
}

static struct super_operations const aufs_super_ops = {
      .put_super = aufs_put_super,
};

static int aufs_fill_sb(struct super_block *sb, void *data, int silent)
{
      struct inode *root = NULL;

      sb->s_magic = AUFS_MAGIC_NUMBER;
      sb->s_op = &aufs_super_ops;

      root = new_inode(sb);
      if (!root)
      {
           pr_err("inode allocation failed\n");
           return -ENOMEM;
      }

      root->i_ino = 0;
      root->i_sb = sb;
      root->i_atime = root->i_mtime = root->i_ctime = CURRENT_TIME;
      inode_init_owner(root, NULL, S_IFDIR);

      sb->s_root = d_make_root(root);
      if (!sb->s_root)
      {
          pr_err("root creation failed\n");
          return -ENOMEM;
      }

     return 0;
 }

static struct dentry *aufs_mount(struct file_system_type *type, int flags,
                                      char const *dev, void *data)
{
      struct dentry *const entry = mount_bdev(type, flags, dev, data, aufs_fill_sb);
      if (IS_ERR(entry))
          pr_err("aufs mounting failed\n");
      else {
          pr_debug("aufs mounted\n");
	  pr_debug("Dname %s ##########\n", entry->d_iname);
      }
       

      return entry;
}


static struct file_system_type aufs_type = {
      .owner = THIS_MODULE,
      .name = "aufs",
      .mount = aufs_mount,
      .kill_sb = kill_block_super,
};

static int __init aufs_init(void)
{
	pr_debug("aufs module loaded\n");
	if (register_filesystem(&aufs_type) != 0) {
		pr_debug("fs register successful\n");
		return -1;
	}
	return 0;
}

static void __exit aufs_fini(void)
{
	pr_debug("aufs module unloaded\n");
	if (unregister_filesystem(&aufs_type) != 0) {
		pr_debug("fs register unsuccessful\n");
	}
}

module_init(aufs_init);
module_exit(aufs_fini);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("kmu");
