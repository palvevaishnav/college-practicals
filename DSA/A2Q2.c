#include<stdio.h>
#include<stdlib.h>

void randoma(int *a,int n){
  for(int i=0;i<n;i++){
    a[i]=rand()%100;
  }
  return;
}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    return;
}
void printa(int *a,int n){
  for(int i=0;i<n;i++){
    printf(" %d",a[i]);
  }
  printf("\n");
  return;
}

void quicksort(int *a,int s,int end){
    int e=end-1;
    if(e<=1){
        return;
    }
    int m=(s+e)/2;
    
    while(s<e){
        while(a[m]>a[s]){
            s++;
        }
        while(a[m]<a[e]){
            e--;
        }

        if(s<e){
            swap(&a[e],&a[s]);
        }

    }
    quicksort(a,s,m-1);
    quicksort(a,m+1,e);
    return;
}

int main(){
  int n,*a;
  printf("Enter the size of random array to be ganerated:");
  scanf("%d",&n);
  a=malloc(sizeof(int)*n);
  randoma(a,n);
  quicksort(a,0,n-1);
  printf("The random array generated is:\n");
  printa(a,n);
  return;
}
  


/*
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; // pivot 
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
  
    for (int j = low; j <= high - 1; j++) 
    { 
        // If current element is smaller than the pivot 
        if (arr[j] < pivot) 
        { 
            i++; // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/*The main function that implements QuickSort 
//arr[] --> Array to be sorted, 
//low --> Starting index, 
//high --> Ending index   
//void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        //pi is partitioning index, arr[p] is now 
        //at right place 
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

*/
