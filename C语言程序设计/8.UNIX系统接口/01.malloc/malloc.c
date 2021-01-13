#include "malloc.h"

typedef long Align;

union header
{
    struct
    {
        union header *ptr;
        unsigned size;

    } s;
    Align x;
};

typedef union header Header;

static Header base;   // 空闲链表的头
static Header *freep; // 空闲链表的初始化指针

Header *morecore(unsigned nu);

int isExactly()
{
}

int isEnough()
{
}

void init()
{
    if (freep != NULL)
    {
        return;
    }

    base.s.ptr = &base;
    freep = &base;
}

void *malloc(unsigned nbytes)
{
    unsigned nunits = 0;

    // 计算需要申请的块的大小
    nunits = (nbytes + sizeof(Header) - 1) / sizeof(Header) + 1;

    init();

    // 在空闲链表中查找
    Header *prevp = freep;
    Header *p = prevp->s.ptr;
    for (;;)
    {
    }
}

void free(void *ap)
{
}

static Header *morecore(unsigned nu)
{
}
