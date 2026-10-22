#include <stdio.h>

int main(){
    int i;
    char str[200];

    printf("Enter a string: ");
    fgets(str ,sizeof(str),stdin);

    for(i=0 ;str[i]!='\0';i++){
       if(str[i]>='A' && str[i]<='Z'){
           str[i] = str[i] + 32;
       }
    }
    printf("\n Lowercase string: %s", str);\

    return 0;
}