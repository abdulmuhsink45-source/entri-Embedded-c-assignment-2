#include <stdio.h>

int main(){
    char str[1000];
    int len = 0;
    int i;
    int letter[26]={0};
    int ispangram = 1;


    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);

    while(str[len]!='\0'){
        len++;
    }
    if(len>0 && str[len-1] == '\n'){
        str[len-1]='\0';
        len--;
    }

    while(str[i]!='\0'){
        if(str[i]>= 'A' &&  str[i]<= 'B'){
            letter[str[i] - 'A'] = 1;
        }
        else if( str[i] >= 'a' && str[i] <= 'z'){
            letter[ str[i]-'a' ]=1;
        }
        i++;
    }

    for(i=0;i<26;i++){
        if(letter[i] == 0){
            ispangram = 0;
            break;
        }
    }
    if(ispangram == 1){
        printf("it is a pangram\n");
    }else{
        printf("It is Not a pangram\n");
    }
    return 0;
}
