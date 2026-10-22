#include <stdio.h>

int main(){
    char str[1000];
    int i,j,len = 0;
    int isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    //length
    while(str[len]!='\0'){
        len++;
    }

    if(len > 0 && str[len-1]=='\n'){
        str[len-1]='\0';  
        len--;    //fgets=>without \n making
    }
    i=0;
    j=len -1;
    while(i<j){
        if (str[i]!=str[j]){
            isPalindrome=0;
            break;
        }
        i++;
        j--;
    }
    
if (isPalindrome == 1){
    printf("palindrome\n");
}else{
    printf("Not a palindrome \n");
}

return 0;
}