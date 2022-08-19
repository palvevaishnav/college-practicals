/*
2) Create a random array of n integers. Sort the array using bubble sort. Accept a value x from 
user and use binary search algorithm to check whether the number is present in array or not 
and output the position if the number is present.

steps:
..create a random array of size n,
..write bubble sort function 
..sort the random array using bubble sort
scan an integer x ;
use binary search to search that integer. in the random array
if present ! return the index .
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int binarysearch(int arr[],int size,int tgt){
    int star=0;
    int end=size-1;

    while(end>= star){
        int mid=star+(end-star)/2;
        if(arr[mid] > tgt){
            end= mid-1 ;
        }
        else if(arr[mid] < tgt){
            star= mid+1 ;
        }
        else{
            
            return mid;
        }
    }

    return -1;

}


void swap(int *small,int *big){
    int temp = *small;
    *small=*big;
    *big=temp;

    return;
}

void bubblesort(int* arr2,int n){

    // ascending order sorting
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr2[j] > arr2[j+i]){
                swap(&arr2[j],&arr2[j+1]);
            }
        }
    }
}

void generate(int *a,int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%100;
    }
}


int main(){
    int *array;
    int len=0;
    printf("\nEnter the length  for creatig a random array:");
    scanf("%d",&len);
    // generate a random array
    generate(array,len);
    //print it
    printf("\nThe random array created is:\n");
    for (int i=0;i<len;i++){
        printf(" %d",array[i]);
    }

    // sort the random arrry in ascending order
    bubblesort(array,len);
    printf("\nThe sorted array is :\n");
    for (int i=0;i<len;i++){
        printf(" %d",array[i]);
    }
    // we have a sorted array now

    int x=0;
    printf("\nEnter the number to be searched:");
    scanf("%d",&x);

    //binary search..
    int index=0;
    index=binarysearch(array,len,x);
    if( index != -1){
        printf("\n%d is at %d index in the array",x,index);
    }
    else{
        printf("not found");
    }
    return 0;
}
