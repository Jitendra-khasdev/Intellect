#include <linux/init.h>
#include <linux/module.h>
#include <linux/list.h>
#include <linux/slab.h>

struct qemu_vm_info{
	int a;
	char b;
	struct list_head node;
};

/*
 * Define the global list
 */
static LIST_HEAD(tc_list);


static int __init start_module(void)
{
	printk("Intialized......");
	struct qemu_vm_info *qvi;
	qvi = kzalloc(sizeof(struct qemu_vm_info), GFP_KERNEL);
	qvi->a = 111;
	qvi->b = 'h';
	list_add_tail(&qvi->node, &tc_list);

	return 0;
}

static void __exit end_module(void)
{
	struct qemu_vm_info *qvi;
	
	list_for_each_entry(qvi, &tc_list, node) {
		printk("Values of nodes %d %c", qvi->a, qvi->b);
	}
	printk("clean up");
}


module_init(start_module);
module_exit(end_module);
