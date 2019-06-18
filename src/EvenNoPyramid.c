#include<stdio.h>
int main(){
    int i, j, row=4, k;
    for(i=1;i<=row;i++){
       for(j=i;j<row;j++)
       printf(" ");

       for(k=1;k<2*i;k++){
       printf("%d ",k);
        

       }

       printf("\n");

    }
    return 0;
}