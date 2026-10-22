#include <stdio.h>

int main()
{
    int num ,prime=1;
    
    printf("Enter an integer: ");
    scanf("%d",&num);

    if(num<2){
        printf("%d is not prime.",num);
    return 0;
    }
    for(int i;i>=num/2;i++)
        {
            if(num%i==0)
            prime=0;
        }
    if(prime){
        printf("%d is prime.\n",num);
    }
    else{
        printf("%d is not prime.\n",num);
    }
    return 0;
}