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
    for(int x=0;x<8;x++)
    {
        printf("%d ",num[x]);
    }
    
   return 0; 
}