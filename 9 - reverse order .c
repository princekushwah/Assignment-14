#include<stdio.h>
int main()
{
    int a[10],i,j,temp;;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0;i<10;i++)
       printf("%d ",a[i]);
       printf("\n\n");

    for(i=0,j=9;i<j;i++,j--)
    {
          temp = a[i];
          a[i]=a[j];
          a[j]=temp;
    }
  for(i=0;i<10;i++)
    printf("%d ",a[i]);
}

