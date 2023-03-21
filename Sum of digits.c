#include <stdio.h>

int main()
{
    int num,sum=0,a,num1;
    printf("Enter a number:");
    scanf("%d",&num);
    num1=num;
    while(num>=10){
         a=num%10;
         num=num/10;
         sum=a+sum;
   
    }
    sum=num+sum;
    printf("Sum of digits of Number %d =%d",num1,sum);

    return 0;
}
