#include<stdio.h>
#include"delay.h"
int main()
{
    for(int i=0; i<10; i++)
    {
    printf("hello\n");
    timegap(2);
    }
}