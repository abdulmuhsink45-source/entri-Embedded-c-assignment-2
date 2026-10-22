#include <stdio.h>

int main()
{
    char str[200];
    int i,j=0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i=0 ;str[i] !='0';i++)
    {
        if(str[i] == ' ' && str[i+1] == ' ') 
        {
            continue;
        }

        str[j]=str[i];
        j++;
    }

    str[j] = '\0';
    printf("Cleaned sentence: %s", str);
    
    return 0;
}