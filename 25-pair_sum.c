#include <stdio.h>

int main()
{
    int size, target,i,j;
    int found =0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
     printf("Enter target sum: ");
     scanf("%d", &target);

     printf("\nPairs with sum %d:\n",target);
     for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i] + arr[j] == target ){
                printf("(%d,%d) -> arr[%d]=%d + arr[%d]=%d\n",arr[i],arr[j], i,arr[i], j,arr[j]);
                found = 1;
            }
        }
     }
     if(!found){
        printf("No pair found with sum %d\n",target);
     }
     return 0;
    }