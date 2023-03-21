#include <stdio.h>

int main()
{
    int num,a=1;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Table for %d\n",num);
    while (a<=10){
         printf("%d x %d = %d\n",num,a,num*a);
         a++;
    }

    return 0;
}
