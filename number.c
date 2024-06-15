#include<stdio.h>
int main()
{
    int num[2];
    printf("enter any number");
    for(int a=0;a<2;a++)
    {
        scanf("%d",&num[a]);
    }
    for(int b=0;b<2;b++)
    {
        printf("%d",num[b]);
    }
}