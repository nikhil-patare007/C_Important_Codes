#include<stdio.h>

int main(){
int i=0,j=0;
char str1[]="Nikhil";
char str2[]="Patare";

  while(str1[i]!='\0'){
      i++;
  }
while(str2[j]!='\0'){
    str1[i]=str2[j];
    i++;
    j++;
}
str1[i]='\0';

 printf("String obtained on concatenation: \"%s\"\n", str1);

return 0;
}