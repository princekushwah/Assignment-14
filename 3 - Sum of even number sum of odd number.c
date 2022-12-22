#include<stdio.h>
int main()
{
    int a[10],i,sum1=0,sum2=0;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
     scanf("%d",&a[i]);

     for(i=0;i<10;i++)
     {
         if(a[i]%2==0)
           sum1=a[i]+sum1;
         else
           sum2=a[i]+sum2;
      }
      printf("even sum = %d\n odd sum = %d",sum1,sum2);
}
