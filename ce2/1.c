#include<stdio.h>
#include<stdlib.h>
int around(int *a,int i,int tgt){
    int c2=0;
    int i1=i,i2=i;
    while(a[i1-1]==tgt){
        i1--;
        c2++;
    }
    while(a[i2+1]==tgt){
        i2++;
        c2++;
    }
    return c2;

}
int binary(int *a,int tgt,int len){
    int st=0;
    int end=len-1;
    int c=0,x2;
    while(end>=st){
        int mid=(st+end)/2;
        if(a[mid] == tgt){
            c++;
            c=c+around(a,mid,tgt);
            return c;
        }
        else if(tgt<a[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }

    }
    return c;
}

int main(){
    int x=0;
            //  0 1 2 3 4 5 6 7 8 9 10 11
    int a[]={0,1,1,2,2,3,3,3,3,3,4,4,4,4,5,5,5,6,7,9};
    int l=sizeof(a)/sizeof(a[0]);
    printf("%d is the length\n",l);
    x=binary(a,5,l);
    printf("Occurances = %d\n",x);
}
