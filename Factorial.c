#include <stdio.h>

int main()
{
    int num,a=1;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Factorial of %d = ",num);
    while (num!=0){
           a=a*num;
           num--;
    }
    printf("%d",a);

    return 0;
}
