#include <stdio.h>

int main(){
    int num1, num2, mask;
    int position, n, i;
    int bit1, bit2;
    
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter starting position: ");
    scanf("%d",&position);
    printf("Enter number of bits to swap: ");
    scanf("%d", &n);

    if(position<0 || position>31 || n<1 || n>32 || position+n>32){
        printf("Invalid position or n.\n");
        return 1;
    }
    for(i=0;i<n;i++){
        mask = 1 << (position+i);

        bit1 = (num1 & mask) !=0;
        bit2 = (num2 & mask) !=0;
        
        if(bit1 != bit2){
            num1 ^= mask;
            num2 ^= mask;
        }
    }

    printf("First number after swap = %d\n", num1);
    printf("second number after swap = %d\n", num2);
   
    return 0;
}