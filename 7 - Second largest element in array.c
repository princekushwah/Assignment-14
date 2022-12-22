#include<stdio.h>
int main()
{
    int a[10],i,max1=0,max2=0;
    printf("Enter number ");
    for(i=0;i<10;i++)
      scanf("%d",&a[i]);

    for(i=0;i<10;i++)
     {
      if(max1<a[i])
        {
          max2=max1;
          max1=a[i];

        }
      else if(max2<a[i])
       {
          max2=a[i];
       }
     }
     printf("Second largest = %d",max2);
}
