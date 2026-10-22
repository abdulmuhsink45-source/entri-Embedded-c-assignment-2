#include <stdio.h>

int isperfect(int num){
    int sum =0;

    for(int i=1;i<num;i++){
        if(num%i==0)
        {
            sum=sum+i;
        }
    }

    if(sum==num){
        return 1;
    }else{
        return 0;
    }

}
int main(){
    int num;
     
    printf("Enter a positive integer: ");
    scanf("%d",&num);

    if(num<=0){
            printf("please enter a positive integer.\n");
              }
        else{
            if(isperfect(num)){
                printf("%d is a perfect Number.\n",num);
            }else{
                printf("%d is not a perfect Number.\n",num);
            }
        }
        return 0;
    }
