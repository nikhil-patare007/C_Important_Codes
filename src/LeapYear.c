#include<stdio.h>
int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    
        if(year%4==0){
       if(year%100==0){
             if(year%400==0)
             printf("Year is leap year");
             else
             printf("Year is not leap year");

            }
            else
            printf("year is leap year ");
            
        }
        else
        {
            printf("year is  not leap year");
        }
        return 0;


      }
    
