#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int result=0;
    int i =0;

    printf("Enter a number as string (e.g\"1234\"): ");
    scanf("%s",str);

    for(i=0;str[i]!= '\0';i++)
    {
        if(str[i] >= '0' && str[i]<='9'){
            result = result * 10 + (str[i] - '0');
        }else{
            printf("Error: Invalid character '%c'.only digital allowed.\n",str[i]);
            return 1;
          }
        }
    printf("string: %s\n",str);
    printf("integer: %d\n",result);
    printf("You can now use it for math,e.g.%d*2=%d\n",result,result*2);
    return 0;

    }  
