#include <linux/module.h>
#include <linux/version.h>

static int my_driver_init(void)
{
	printk("Driver init\n");
	return 0;
}

static void my_driver_exit(void)
{
	printk("Hello world");
}

module_init(my_driver_init);
module_exit(my_driver_exit);
