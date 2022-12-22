#include<stdio.h>
int main()
{
    int a[10],i,min1,min2;
    printf("Enter 10 numbers ");
  for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    {
        if(min1>a[i])
          {
            min2=min1;
            min1=a[i];
          }
        else if(min2>a[i])
            min2=a[i];

    }
    printf("Second Smallest number = %d",min2);
}
