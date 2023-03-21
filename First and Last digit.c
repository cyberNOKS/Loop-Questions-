#include <stdio.h>

int main()
{
    int num,fr,ls;
    printf("Enter a number:");
    scanf("%d",&num);
    ls=num%10;
    while(num>10){
    num=num/10;

    }
    fr=num;
    printf("first number is :%d\nLast number is:%d",fr,ls);

    return 0;
}
