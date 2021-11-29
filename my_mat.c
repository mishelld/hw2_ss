#include <stdio.h>
#define dimension 10
#define infinte 999

int matrix[dimension][dimension];


//function 1, when the user press 'A'
//in this function we receice the matrix from the user 
void receivematrix(){
    //using 2 for loops for the column and row
    for(int k = 0;k<dimension;k++){
        for(int p=0;p<dimension;p++){
         //using a scan to get the value in index [k][p] for the matrix
            scanf("%d", &matrix[k][p]);
            //if the matrix is 0 we define it as "infinte"
            //to help with the function of finding the shortest path
            if(matrix[k][p]==0){
                matrix[k][p]=infinte;
            }
        }

    }
    //with the help of Floyd-Warshall Algorithm
    //we will use 3 for loops that start from 0 to 10
    for(int a = 0; a<dimension ; a++){
       for(int b=0; b<dimension ; b++){
           for(int c=0;c<dimension; c++){
               //if in the matrix the point not going to itself
               if(b != c){
                   //and if the sum below is smaller then [b][c]
               if(matrix[b][a]+ matrix[a][c] < matrix[b][c])
               //then we will define the matrix[b][c] as the smaller option 
                   matrix[b][c]=matrix[b][a]+matrix[a][c];
               }
               //and so it goes until we reach the minimal path for matrix
               
           }
       }
   }   
}



//function 2,when the user press 'b'
void istherepath(int a,int b){
    //if the matrix in index[a][b] equals "infinte"
    //then we print  false 
    //else we print true
    if(matrix[a][b]==infinte){
        printf("False\n");
    }
    else {
        printf("True\n");
    }


}

//function 3, when the user press 'c'

int printshortestpath(int a, int b){
    //if the matrix in index [a][b] is inifinte we return -1
    //else we return the value in that index
     if (matrix[a][b] == infinte)
    {
        return -1;
    }
    else {
       return matrix[a][b];
    }

}






