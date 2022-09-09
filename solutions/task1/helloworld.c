/**
 * @Author: Prasad Sunil Udawant <hi_prasad>
 * @Date:   2021-06-21T19:46:14+05:30
 * @Email:  prasad.udawant.linux@gmail.com
 * @Project: my_eudyptula_solution
 * @Filename: helloworld.c
 * @Last modified by:   prasad_s_udawant
 * @Last modified time: 2021-06-21T21:57:39+05:30
 * @License: GPLV3
 */

#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

static int helloworld_init(void);
static void helloworld_exit(void);

static int helloworld_init(void)
{
    printk(KERN_ALERT "helloworld.I am Prasad\n");
    return 0;
}

static void helloworld_exit(void)
{
    printk(KERN_ALERT "by world\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);

MODULE_AUTHOR("prasad sunil udawant");
MODULE_DESCRIPTION("my first linux kernel module");
