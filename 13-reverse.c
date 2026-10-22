#include <stdio.h>

int main(){
    char str[1000];
    char temp;
    int i,j,len=0;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

   // length manually and remove \n 
   while(str[len]!='\0'){
    len++;
   }
   if(len>0 && str[len-1] == '\n'){
    str[len-1] = '\0';
    len--;
   }
    i=0;
    j=len-1;

    while(i<j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
  printf("Reversed string: %s\n",str);

  return 0;
}