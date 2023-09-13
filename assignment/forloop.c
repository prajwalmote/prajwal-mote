//#include<stdio.h>
//print no  from 1 to 20
/*int main()
{
    int i;
    for(i=1; i<=20; i++)
    {
        printf("\n%d",i);
    }



    return  0;
}*/
/*
decreasing order from 1 to 20 
# include<stdio.h>
int main()
{
    int i;
    for(i=20; i>=1; i--)
    {
        printf("\n%d",i);
    }

        return 0;
    
}*/
// even no from 1 to 10
/*# include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=20;i++)
    if(i%2==0)
    {
        printf("\n%d",i);

    }
     return 0;
}*/




// sum of first 10 numbers
/*# include<stdio.h>
int main()
{
    int i=1,sum=0;
    for ( i = 0; i <=10; i++)
    
    {
     sum=sum+i;
    }121
     printf("%d",sum);
     return 0;
}*/


// sum of indivisual digit numbers
/*# include<stdio.h>
int main()
{
    int n,sum=0,r;
    printf("enter the number\n");
    scanf("%d",&n);
    for (; n != 0; n=n/10 )
    {

        r=n%10;
        sum=sum+r;
        
         
    }
     printf("sum of digit of a number=%d\n",sum);
     return 0;
    
}*/

// prime number using  for loop 

#include<stdio.h>
int main()
{
  int i, j, count=0;
 for (int i = 1; i <= 50; i++)
 {
     for ( int j=2; j <i; j++)
    { 
         if (i%j==0)
         {
            count ++;
            break;

         }
    }
         if (count==0 && i!=1)
         
            printf("\n%d",i);
            count=0;
         
         
    }
    
}




