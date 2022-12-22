#include<stdio.h>
int main()
{
    int a[10],i,min;
    printf("Enter 10 number ");
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("Smallest number = %d",min);
}
