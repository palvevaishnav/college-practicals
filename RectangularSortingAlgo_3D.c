/*
SAME PROGRAM AS OF THE 2D . JUST LITTLE MODIFICATION
INCREASE THE SIZE OF ARRAYS STORING THE CORDINATES OF THE VERTICES OF 3D RECTANGLE. (FROM 4 TO 8)
FOR 3D WE WILL NEED ONE MORE ARRAY FOR THE 3RD DIMENSION SO ZCOR. (same with the points to be checked.)
RUN MAX MIN LOOP 8 TIMES
*/
// Basically we will input some points and will explore the location of that points

#include<stdio.h>
#include<stdlib.h>

int main(){
    int xcor[8],ycor[8],zcor[8];
    for(int i=0;i<8;i++){
        printf("Enter the x and y cordinate of the rectangle: ");
        scanf("%d %d %d",&xcor[i],&ycor[i],&zcor[i]);
    }
    
    // we will be needing the maximum and minimum from this set of x and y coordinates.
    //finding max and min 
    
    int xmin=xcor[0],xmax=xcor[0],ymin=ycor[0],ymax=ycor[0],zmin=zcor[0],zmax=zcor[0];
    for(int i=0;i<8;i++){
        
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
        if(zcor[i]<zmin){
            zmin=zcor[i];
        }
        
        if(zcor[i]>zmax){
            zmax=zcor[i];
        }
        
    }
    
    //we got the minimum and maximum form the x and y cordinates given
    // now we will take the points whose position has to be checked.
    
    int n=0;
    printf("\nEnter the number of points :");
    scanf("%d",&n);
    int xpoint[n],ypoint[n],zpoint[n];

    for(int i=0;i<n;i++){
        printf("Enter the x and y coordinates of %d th point:",i+1);
        scanf("%d %d %d",&xpoint[i], &ypoint[i]),&zpoint[i];
    }

    // Now we have the cordinates of points too
    // we will check for the positions of the points now.

    for(int i=0;i<n;i++){
        printf(" The point (%d,%d,%d) is ",xpoint[i],ypoint[i],zpoint[i]);
         
        if(xpoint[i] >= xmin && xpoint[i] <= xmax && ypoint[i] >= ymin && ypoint[i] <= ymax && zpoint[i] >= zmin && zpoint[i] <= zmax){
            // IF THE POINT IS ON OR IN THE RECTANGLE.
            if(xpoint[i] == xmin || xpoint[i] == xmax || ypoint[i] == ymin || ypoint[i] == ymax || zpoint[i] == zmin || zpoint[i] == zmax){
                printf("ON the 3d rectangle \n");
            }
            else{
                printf(" INSIDE the 3d rectange \n");
            }
        }
        //IF NOT ON OR INSIDE THE RECTANGLE ,THEN IT MUST BE OUTSIDE THE RECTANGLE
        else{
            printf("OUTSIDE the 3d rectangle\n");
        }

    }
} 
