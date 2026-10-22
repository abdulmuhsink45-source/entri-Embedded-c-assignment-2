#include <stdio.h>
int main()
{
    int num1, num2;
    int position, n;
    int mask;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    printf("Enter starting position: ");
    scanf("%d",&position);

    printf("Enter number of bits to replace: ");
    scanf("%d", &n);

    if(position<0 || n<1 || n>31 || position>31 || position+n>32){
        printf("invalid position or number of bits.\n");
        return 1;
    }

    mask = (1 << n )-1;

    num1 = (num1 & ~(mask<<position)) | ((num2 & mask) << position);
    
    printf("Result = %d\n", num1);
    return 0;

}