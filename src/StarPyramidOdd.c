#include<stdio.h>
int main(){
    int i, j, row=5, k;
    for(i=0;i<=row;i++){
       for(j=i;j<row;j++)
       printf(" ");

       for(k=1;k<=(2*i-1);k++)
       printf("*");

       printf("\n");

    }
    return 0;
}