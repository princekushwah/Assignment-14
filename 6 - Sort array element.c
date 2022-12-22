#include<stdio.h>
int main()
{
    int a[10],i,j,temp=0;
    printf("Enter a number ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<=10;j++)

         if (a[i]>a[j]){
            temp=a[i];
           a[i]=a[j];
           a[j]=temp;}
        printf("%d ",a[i]);
    }
}
