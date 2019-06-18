#include <stdio.h>
#include <math.h>
#include <string.h>

int hexToDec(char hex[]){
 int len=strlen(hex);
 int i;
 int base=1;
 int  decimal=0;

 for( i=len-1;i>=0;i--){
        if(hex[i]>='0'&& hex[i]<='9'){
         decimal=decimal+(hex[i]-48)*base;
         base=base*16;
     }
     else if(hex[i]>='A' && hex[i]<='F'){
          decimal=decimal+(hex[i]-55)*base;
          base=base*16;
     }
     
 }
return decimal;

}

int main()
{
    char hexnum[]="1A";
    printf("hexadecimal to decimal is %d ",hexToDec(hexnum));
    return 0;
}