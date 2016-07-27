#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/proc_fs.h>

struct proc_dir_entry *bfs_entry;

int procfile_read(char *page, char **start, off_t off,int count,
        int *eof, void *data);
{
    return 0;

}

int init_module()
{
    bfs_entry = create_proc_entry("bfs", 0644, NULL);

    if (bfs_entry == NULL) {
        remove_proc_entry ("bfs", NULL);
        printk (KERN_ALERT "Error: could not initialization /proc/%s\n", "bfs");
        return -ENOMEM;
    }

    bfs_entry->read_proc = procfile_read;
    bfs_entry->owner     = THIS_MODULE;
    bfs_entry->uid       = 0;
    bfs_entry->gid       = 0;
    bfs_entry->size      = 37;
    bfs_entry->mode      = S_IFREG | S_IRUGO;

    printk(KERN_INFO "/proc/%s created\n", "bfs");
    return 0;
}

void cleanup_module()
{
    remove_proc_entry("bfs", NULL);
    printk(KERN_INFO "/proc/%s removed\n", "bfs");
}


