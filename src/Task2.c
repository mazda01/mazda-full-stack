#include<stdio.h>

int main()
{
   
    int num[]={50,33,40,90,20,100,55,109};
    int temp=0;

    printf("\nlist of elements :- ");
    for(int i=0;i<8;i++)
    {
        printf("%d ",num[i]);
    }
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }  
    }

    printf("\nAscending Order :- ");
    for(int v=0;v<8;v++)
    {
        printf("%d ",num[v]);
    }
    
   return 0; 
}