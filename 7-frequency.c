#include <stdio.h>

void countFrequency(long long num,int freq[] ){
    
    if(num<0){
        num=-num;//negative to positive 
    }
    if(num == 0){
        freq[0]++;// special case for 0
        return ;
    }
    while(num>0){
       int digit = num%10;
       freq[digit]++;
       num=num/10;
    }
} 
int main(){
    long long num;
    int freq[10]={0};

    printf("Enter an integer: ");
    scanf("%lld",&num);
     
    countFrequency(num,freq);
    printf("\nDigit Frequency: \n");
        for(int i=0;i<10;i++){
            if(freq[i]>0){
                printf("Digit %d -> %d time \n",i,freq[i]);
            }
    }
    return 0;
}