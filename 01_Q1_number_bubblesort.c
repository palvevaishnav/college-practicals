#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;

  return;
}


void bubblesort(int * a,int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      if(a[j]>a[j+1]){
        swap(&a[j],&a[j+1]);
      }
    }
  }
}


int main(void) {
  int n;
  printf("How many numbers do you want to enter:");
  scanf("%d",&n);
  printf("Enter the numbers:");
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  bubblesort(arr,n);
  printf("The sorted array is :");
  for(int i=0;i<n;i++){
    printf(" %d",arr[i]);
  }
}
