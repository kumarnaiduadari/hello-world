#include<stdio.h>
void main()
{
    int a[5]={5,4,3,2,1},i,j,k,n,max,swap;
    for(i=1;i<4;i++)
         {
            for(j=4;j>=0;j--)
              {
                   max=a[0];
                   for(k=0;k<=j;k++)  //for loop
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

//code for swapping of strings//
#include<stdio.h>
#include<string.h>
void main()
        {

             char a[5][20]={"Kumar Naidu","Ram Gopal","Vamsi Marri","Ramu","Sheshu"};
             int i,j,k;
             char temp[20];
             printf("The list before sorting>>>\n");
             for(k=0;k<5;k++)
             printf("%s\n",a[k]);
             //getch();
              for(i=0;i<4;i++)
                  for(j=i+1;i<5;i++)
                         {
                             if(strcmpi(a[i],a[j])>0)
                             {
                                 strcpy(temp,a[i]);
                                 strcpy(a[i],a[j]);
                                 strcpy(a[j],temp);

                             }


                         }
                         printf("\n\n");
                         for(k=0;k<5;k++)
             printf("%s\n",a[k]);

        }

//to add the sum of numbers in a number
#include<stdio.h>
void main()
{
    int num,i,j;
    printf("Enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        i=num%10;
        j=j+i;
        num=num/10;
    }
    printf("%d",j);
}
// code to check whether the given numbetr is a palindrome or not
#include<stdio.h>
void main()
{
    int num,i,j=0,temp;
    printf("Enter a number");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        i=num%10;
        j=(j*10)+i;
        num/=10;
    }
    if(temp==j)
        printf("The given number %d is a palindrome",j);
    else
        printf("%d It's not a palindrome",j);

}

 
