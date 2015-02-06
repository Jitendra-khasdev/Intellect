#include <stdio.h>

int main()
{

 int arr[]={5,1,6,2,4,3};

 int i,j,temp;

   for(i=0;i<6;i++){

      for(j=0;j<6-i-1;j++){
          if(arr[j] > arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
      }
    }

   for(i=0;i<6;i++)
      printf("%d ",arr[i]);

return 0;
}
