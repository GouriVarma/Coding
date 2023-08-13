/*Program to check if a given year is leap year
  
  Conditions for leap year:
    1.The year should be a multiple of 400
    2.The year should be a multiple of 4 and the year should not be a multiple of 100

    eg: 2016 = exactly divisible by 4 
               not exactly divisibe by 400
               not exactly divisible by 100

        2400 = exactly divisible by 400
               not exactly divisibe by 4
               not exactly divisible by 100

        2200 = exactly divisible by 4         (not leap)
               not exactly divisibe by 400
               exactly divisible by 100..
        
    logic to be a leap year: exactly divisible by 4 or 400 , and not exactly dividible by 100

*/

#include<stdio.h>
int main(){
  int n;
  printf("Enter year : ");
  scanf("%d",&n);
  if(n%400 || n%4==0 && n%100!=0)
    printf("%d is a leap year",n);
  else
    printf("%d is not a leap year",n);
}
