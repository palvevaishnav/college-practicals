// Create Random array of size n and sort it using recursive mergesort algo.

#include<stdlib.h>
#include<stdio.h>
void randomarr(int* a,int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%100;
    }
    return;
}

void printa(int *a,int n){
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    printf("\n");
    return;
}

void merge(int* a,int s,int m,int e){
    int n1=m-s+1;
    int n2=e-m;
    int L[n1],R[n2];
    // a[n1+n2];
    for (int i = 0; i < n1; i++)
		L[i] = a[s + i];
	for (int j = 0; j < n2; j++)
		R[j] = a[m + 1 + j];
    int i,j,k;
    i=0;
    j=0;
    k=s;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=R[j];
        j++;k++;
    }
    return;
}

void mergesort(int *a,int s,int e){
    int m=(s+e)/2;
    if(s<e){
        mergesort(a,s,m);
        mergesort(a,m+1,e);

        merge(a,s,m,e);
    }
    return;
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    // a=malloc(sizeof(int)*n);
    int a[n];
    randomarr(a,n);
    printf("The array generated is:\n");
    printa(a,n);
    mergesort(a,0,n-1);
    printf("The sorted array is:\n");
    printa(a,n);
    return 0;

}
