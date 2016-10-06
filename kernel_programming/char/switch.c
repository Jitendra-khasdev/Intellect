#include <linux/module.h>
#include <linux/fs.h>
#include <linux/uaccess.h>

ssize_t switch_read (struct file *file, char __user *usr_buffer, size_t size, loff_t *offset)
{
	
	printk("You are in the read of swtich\n");
	return 0;
}

ssize_t switch_write (struct file *file, const char __user *usr_buffer, size_t size, loff_t *offset)
{
	char data[15];	

	if (copy_from_user(&data, usr_buffer, size)) {
	}
	printk("Copy from the user buffer ###%s###", data);
	printk("You are in the write of swicth\n");
	return 0;
}

struct file_operations switch_fops = {
	.read = switch_read,
	.write = switch_write
};


static int switch_init(void)
{
	int Major = 0;

	Major = register_chrdev(0, "Switch Driver", &switch_fops);
	printk("Device is initialized\n");
	printk("Major number is %d \n", Major);
	return 0;
}

static void switch_cleanup(void)
{
	unregister_chrdev(0, "Switch Driver");
	printk("Clean up device init\n");
}

module_init(switch_init);
module_exit(switch_cleanup);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Basic Char Switch Driver");
MODULE_AUTHOR("Jitendra Khasdev");
