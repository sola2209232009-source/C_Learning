#include <stdio.h>
int main(void)
{
    int a = 10;
    printf("a = %d\n",a);
    printf("&a = %p\n",(void *)&a);
    int *p = &a;
    printf("P = %p\n",(void *)p);
    printf("*p = %d\n",*p);
    printf("&p = %p\n",(void *)&p);
    *p = 20;
    printf("a = %d\n",a);
    printf("*p = %d",*p);
    return 0;
}