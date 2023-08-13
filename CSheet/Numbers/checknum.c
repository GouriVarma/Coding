/*Write a program to check if a number is positive,negative,zero,even or odd
  
  if n>0 ----> positive
  if n=0 ----> 0
  if n<0 ----> negative
  if n%2=0 --> even
  if n%2!=0 -> odd

*/

#include<stdio.h>
int main(){
  int n;
  printf("enter number to be checked: ");
  scanf("%d",&n);
  if(n==0)
    printf("no is zero ");
  if(n>0 && n%2==0)
    printf("no is positive and even");
  if(n<0 && n%2==0)
    printf("no is negative and even");
  if(n>0 && n%2!=0)
    printf("no is positive and odd");
  if(n<0 && n%2!=0)
    printf("no is negative and odd");
}
