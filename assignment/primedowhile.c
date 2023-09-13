#include<stdio.h>
int main()
{
int i=2,num,count=0;
printf("\n enter the number");
scanf("%d",&num);
do
{
    if(num%i==0)
    {
        i=1;
        break;
    }
    i++;
} while (i<num/2);
   if(i==1)
   {
    printf("\n %d is not prime number");
   }
   else
   {
    printf("\n %d the number is prime number");
   }


   return 0;




}