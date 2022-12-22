#include<stdio.h>
int main()
{
    int a[10],i,max=0;
    printf("Enter 10 number ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    {
            if(max<a[i])
            {
                max=a[i];
            }
    }
    printf("Greatest number = %d",max);
}
