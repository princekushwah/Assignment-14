#include<stdio.h>
int main()
{
    int a[10],i,b[20];
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    {
        b[i]=a[i];
    }

    for(i=0;i<10;i++)
        printf("%d ",b[i]);
}
