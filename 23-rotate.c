#include <stdio.h>

int main()
{
   int size, n, i;
   char dir;
   

   printf("Enter size of array: ");
   scanf("%d",&size);

   int arr[size], rotated[size];

   printf("Enter %d elements:\n",size);

   for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
   }
   
   printf("Enter number of position to rotate: ");
   scanf("%d",&n);
   printf("Enter direction( L for Left / R for Right ): ");
   scanf(" %c", &dir);

   n = n % size;
   if(dir == 'L' || dir == 'l')
   {
    for(i=0;i<size;i++){
        rotated[i]=arr[(i+n)% size];
      }
   }
      else if(dir== 'R' || dir == 'r'){

     for(i=0;i<size;i++){
        rotated[(i+n)%size] = arr[i];
   }
}
else{
    printf("Invalid direction \n");
    return 1;
}

printf("Rotated array: ");
for(i=0;i<size;i++){
    printf(" %d",rotated[i]);
}
printf("\n");
return 0;
}