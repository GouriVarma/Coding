#include<stdio.h>
int main(){
  char a[100]="12345";
  int num=0;
  
  for(int i=0;a[i];i++)
     num = num*10 + a[i]-'0';         //instead of '0' also 48 cN BE USED
  printf("%d",num);
}