#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main(){
    //Store the coordinates of the points.
    int *a,*b, n;
    printf("Enter the number of points:");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    b=malloc(n*sizeof(int));
    printf("Enter the x and y coordinates of: \n");
    for(int i=0;i<n;i++){
        printf("\n%dth point:",i+1);
        scanf("%d %d",&a[i],&b[i]);
    }
    // finding the distance and storing it in a 2-D array, so that we can locate it.
    int dist[n][n];
    // dist= sqrt( ((x[j]-x[i])^(2) ) + (y[j]-y[i])^(2));
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            dist[i][j] = sqrt( ((a[j]-a[i])^(2) ) + (b[j]-b[i])^(2));
        }
    }
    
    // finding the minimum and maximumm distance
    int min=dist[0][1],max=dist[0][1];
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(min > dist[i][j]){
                min=dist[i][j];
            }
            if(max < dist[i][j]){
                max=dist[i][j];
            }
        }
        
        // printing the correspondinng points of the minimum mutual distance and the maximum mutual distance.
        if(i==n-1){
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(dist[i][j] == min){
                        printf("The minimum distance is between the points (%d,%d) and (%d,%d)",a[i],b[i],a[j],b[j]);
                    }
                    if(dist[i][j] == max){
                        printf("The maximum distance is between the points (%d,%d) and (%d,%d)",a[i],b[i],a[j],b[j]);
                    }
                }
            }
            
        }
        
        
    }
    
}
    
    
            
            
    
                
                
                
                
                
 
