// Basically we will input some points and will explore the location of that points

#include<stdio.h>
#include<stdlib.h>

int main(){
    int xcor[4],ycor[4];
    for(int i=0;i<4;i++){
        printf("Enter the x and y cordinate of the rectangle: ");
        scanf("%d %d",&xcor[i],&ycor[i]);
    }
    
    // we will be needing the maximum and minimum from this set of x and y coordinates.
    //finding max and min 
    
    int xmin=xcor[0],xmax=xcor[0],ymin=ycor[0],ymax=ycor[0];
    for(int i=0;i<4;i++){
        
        if(xcor[i]<xmin){
            xmin=xcor[i];
        }
        
        if(xcor[i]>xmax){
            xmax=xcor[i];
        }
        
        if(ycor[i]<ymin){
            ymin=ycor[i];
        }
        
        if(ycor[i]>ymax){
            ymax=ycor[i];
        }
        
    }
    
    //we got the minimum and maximum form the x and y cordinates given
    // now we will take the points whose position has to be checked.
    
    int n=0;
    printf("\nEnter the number of points :");
    scanf("%d",&n);
    int xpoint[n],ypoint[n];

    for(int i=0;i<n;i++){
        printf("Enter the x and y coordinates of %d th point:",i+1);
        scanf("%d %d",&xpoint[i], &ypoint[i]);
    }

    // Now we have the cordinates of points too
    // we will check for the positions of the points now.

    for(int i=0;i<n;i++){
        printf(" The point (%d,%d) is ",xpoint[i],ypoint[i]);
         
        if(xpoint[i] >= xmin && xpoint[i] <= xmax && ypoint[i] >= ymin && ypoint[i] <= ymax){
            // IF THE POINT IS ON OR IN THE RECTANGLE.
            if(xpoint[i] == xmin || xpoint[i] == xmax || ypoint[i] == ymin || ypoint[i] == ymax){
                printf("ON the rectangle \n");
            }
            else{
                printf(" INSIDE the rectange \n");
            }
        }
        //IF NOT ON OR INSIDE THE RECTANGLE ,THEN IT MUST BE OUTSIDE THE RECTANGLE
        else{
            printf("OUTSIDE the rectangle\n");
        }

    }
} 
