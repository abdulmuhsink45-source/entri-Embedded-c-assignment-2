#include <stdio.h>

int main()
{
    int num;
    long long factorial=1;
    printf("Enter positive integer: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Factorial is not defined for negative number");
    }
    else{
    for(int i=1;i<=num;i++){
    factorial = factorial*i;
    }
    printf("Factorial of %d = %lld\n",num,factorial);
    }
    return 0;
}