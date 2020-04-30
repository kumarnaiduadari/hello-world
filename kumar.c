#include<stdio.h>
void main()
{
    int a[5]={5,4,3,2,1},i,j,k,n,max,swap;
    for(i=1;i<4;i++)
         {
            for(j=4;j>=0;j--)
              {
                   max=a[0];
                   for(k=0;k<=j;k++)
                       if(max<=a[k])
                           {
                                max=a[k];
                                swap=a[j]; //swap
                                a[j]=a[k];
                                a[k]=swap;
                          }
            }


        }
for(n=0;n<5;n++)
    printf("%d ",a[n]);
    printf("\n");
    getch();
}
 
