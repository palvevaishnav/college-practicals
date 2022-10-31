
// Find the number of itretation  while searching a number
#include<stdio.h>
#include<stdlib.h>
int linear(int *a,int l,int tgt){
    int c=0;
    for(int j=0;j<l;j++){
        c++;
        if(a[j]==tgt){
            return c;
        }
    }

    return c;
}

int main(){
    int a[]={9,8,7,6,5,4,3,2,1};
    int len=sizeof(a)/sizeof(a[0]);
    int t=7;
    int i=0;
    i=linear(a,len,t);
    printf("\nItretation = %d",i);

}


