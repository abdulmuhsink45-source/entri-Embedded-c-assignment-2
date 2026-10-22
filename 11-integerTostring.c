#include <stdio.h>

int main(){
    int num;
    char str[20];
    int i =0,j=0;
    int isNegative=0;

    printf("Enter an integer: ");
    scanf("%d",&num);

    if (num == 0){
        str[0]='0';
        str[1]='\0';
        printf("string: %s\n", str);
        return 0;
    }

    if(num<0){
        isNegative=1;
        num = -num;//make positive for conversion
    }
    
    while(num>0){
        int digit = num % 10;
        str[i] = digit + '0';
        num = num/10;
        i++;
    }
    if(isNegative)
    {
        str[i] = '-';
        i++;
    }
    str[i]= '\0';//end string
    
    int len =i;
    for(j=0;j<len-1-j;j++){
        char temp = str[j];
        str[j]=str[len-1-j];
        str[len-1-j] = temp;
    }

    printf("string: %s\n",str);
    return 0;

}