#include <linux/module.h>

int __init module_entry(void)
{

	printk ("Hello world\n");
	return 0;
}

void __exit module_stop (void)
{
	printk ("Hello Exit\n");
}

module_init(module_entry);
module_exit(module_stop);
