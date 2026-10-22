#include <stdio.h>

int main()
{
    int num,pos,n,i;
    int result;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter of bits to extract: ");
    scanf("%d",&n);

    for(i=0; i<n;i++)
    {
        if(num & (1<<(pos + i)))
        {
            result |= (1<<i);
        }
    }
    printf("Extracted bits = %d\n", result);

    return 0;
}

