#include <stdio.h>

int main(){
    int n, i, k = 0;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int a[n], temp[n];
    
    printf("Enter %d element:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i] < 0){
            temp[k] = a[i];
            k++;
        }
    }
    for(i=0;i<n;i++){
       if(a[i] >= 0){
        temp[k] = a[i];
        k++;
       }
    }
    for(i=0;i<n;i++){
        a[i] = temp[i];
    }
    printf("Rearrange array: \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    return 0;
}
