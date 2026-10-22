#include <stdio.h>

void convertToBase(int decimal,int base){
    char result[64];
    int index = 0;

    if(decimal == 0){
        printf("Result =0\n");
        return;
    }
    
    while(decimal>0){
        int rem = decimal % base;
         if(rem<10){
            result[index] = rem + '0';//0-9(ascii '0'=48)
         }else{
            result[index]=rem - 10 + 'A';//(ascii 'A'=65)
            //10=A,11=B,12=C,13=D,14=E,15=F
         }
         index++;
         decimal = decimal/base;
         
    }
    //print in reverse(Bottom to Top)
    printf("Result = ");
    for(int i=index-1;i>=0;i--){
        printf("%c",result[i]);
    }

printf("/n");

}

int main(){
    int decimal,base;

    printf("Enter decimal number:");
    scanf("%d",&decimal);

    printf("Enter target base(2-16): ");
    scanf("%d",&base);

    if(base<2 || base>16){
        printf("Base must be between 2 and 16 ");

        return 0;
    }
    
    convertToBase(decimal, base);

    return 0;

}