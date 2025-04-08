#include<stdio.h>
int main()
{
    const int *p;
    int a = 5;
    p = &a;
    printf("%d",*p);
    // *p = 10;
    // printf("%d",*p);
    return(0);
}