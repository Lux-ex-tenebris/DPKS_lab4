#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

int print_hello(uint n);
static int __init hello_init(void);
static void __exit hello_exit(void);
