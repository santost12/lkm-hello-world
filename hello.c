#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your name");
MODULE_DESCRIPTION("Hello World Linux kernel module");
MODULE_VERSION("0.1");

static int __init hello(void) {
    printk(KERN_INFO "Hello!\n");
    return 0;
}

static void __exit hello_exit(void) {
    printk(KERN_INFO "Goodbye!\n");
}

module_init(hello);
module_exit(hello_exit);

