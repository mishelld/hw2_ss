#include <stdio.h>
#include "my_mat.h"
int main(){
    char data;
    while(data != 'D'){
        scanf("%c", &data);
        //if the user press A we define the mtrix that is recived
        if(data=='A'){
            receivematrix();
        }
        //else if the user press b, we return if there is a path or not for the index
        else if(data=='B'){
            int a, b;
            scanf("%d %d", &a, &b);
            istherepath(a,b);
        }
        //else if the user press c, we return the shortest path for the index from i to j
        else if(data=='C'){
             int z, b;
            scanf("%d %d", &z, &b);
            int a = printshortestpath(z,b);
            printf("%d\n" ,a);     
        }
    }
    return 0;

}