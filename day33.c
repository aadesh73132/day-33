#include<stdio.h>
int main()
{
    int num;
    int i=1;
    int factorial=1;
    printf("enter the number you want factorial of:\n");
    scanf("%d",&num);
    
    while (i<=num)
    {
        factorial=factorial*i;
       
        i++;
    }
    printf("factorial=%d\n",factorial);
    
    return 0;
}
