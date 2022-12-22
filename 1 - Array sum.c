#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter  10 numbers ");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++)
     {
      sum=a[i]+sum;
     }

    printf("%d ",sum);
}
