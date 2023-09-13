#include<stdio.h>
int main()
{
    int num,rev=0,rem,temp;// remainder,reverse
    printf("enter any number");
    scanf("%d",&num);
     
    temp=num;
    do
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;


    } while (num>0);
     if (rev==temp)
     {
        printf("the number is palindrome");
     }
     else{
        printf("the number is not palindrome");

     }

     return 0;
}