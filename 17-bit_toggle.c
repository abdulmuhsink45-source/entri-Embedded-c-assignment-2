#include <stdio.h>

int main(){
    int num, n,pos,i;

    printf("Enter the integer: ");
    scanf("%d", &num);

    printf("Enter starting position: ");
    scanf("%d",&pos);
    
    printf("Enter number of bit to toggle: ");
    scanf("%d",&n);
    

    for(i=0;i<n;i++){

        num ^= ( 1 << (pos+i));
    }

    printf("Result=%d\n", num);
    return 0;

}