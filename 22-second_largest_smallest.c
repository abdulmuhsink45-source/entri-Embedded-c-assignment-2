#include <stdio.h>

int main(){
   int n,i;
   printf("Enter size: ");
   scanf("%d",&n);
   
   int a[n];
   printf("Enter %d elements: ",n);
   for(i=0; i<n;i++){
    scanf("%d",&a[i]);
   }
   
   int largest = a[0];
   int smallest =a[0];

   //find lagest and smallest first

   for(i=1;i<n;i++){
    if(a[i]>largest){
        largest=a[i];
    }
    if(a[i]<smallest){
        smallest=a[i];
    }
   }
    int secondLargest = 0; 
    int secondSmallest = 0;
    int foundLargest = 0;
    int foundSmallest = 0;
     
   //secondLargest and smallest
   for(i=0;i<n;i++)
   {
    //second largest 
    if(a[i] != largest){
    if(foundLargest == 0 || a[i]>secondLargest){
        secondLargest = a[i];
        foundLargest = 1;
    }
    }
    //second smallest
    if(a[i] != smallest){
        if(foundSmallest == 0 || a[i]<secondSmallest){
            secondSmallest = a[i];
            foundSmallest = 1;
        }
    }
   }
   if(foundLargest == 0){
    printf("Second largest does not exist.\n");
   }
   else{
    printf("Second largest = %d\n", secondLargest);
   }
   if (foundSmallest == 0){
        printf("Second smallest does not exist.\n");
    
       }    else{
        printf("Second smallest = %d\n", secondSmallest);
       }

    return 0;

}