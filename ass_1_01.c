/*
Create a random array of n integers. Accept a value x from user and use linear search
algorithm to check whether the number is present in the array or not and output the position if 
the number is present.
steps:
create random array of n integers 
accept one integer
search linearly for the integer
output the index if present. 
*/

#include<stdio.h>
#include<stdlib.h>

int * generate(int *a,int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%100;
    }

    return a;
}

int linearsearch(int *array,int n,int find){
    char choise;
    int yes=0;
    for(int i=0;i<n;i++){
        if(array[i] == find){
            return i;
        }
    }
    printf("\nwant to try another number!(y/n) :");
    scanf("%c",&choise);

    if(choise == 'y'){
        printf("\nEnter the new number to search:");
        scanf("%d",&yes);
        linearsearch(array,n,yes);
    }
    else{
        return -1;
    }
}



int main(){
    int *array;
    int n=0;
    printf("\nEnter the length of the array:");
    scanf("%d",&n);
    generate(array,n);

    printf("\nprinting the random array:\n");
    for (int  i = 0; i <n; i++){
        printf(" %d",array[i]);
    }
    int find=0;
    printf("\nEnter the integer to be searched:");
    scanf("%d",&find);

    // calling the linear search function,
    int ans=-1;
    ans=linearsearch(array,n,find);

    if(ans == -1){
        printf("\nThe number is NOT PRESENT in the array");
    }
    else{
        printf("\n%d is at %d th index in the array",find,ans);
    }
    return 0;
}
