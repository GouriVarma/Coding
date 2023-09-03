//a3b4c2  =   aaabbbbcc


#include<stdio.h>
int main(){
  char a[100];
  int num=0;
  char ch;
  scanf("%s",a);
  for(int i=0;a[i];i++)
  {
    if(a[i]>=48 && a[i]<=57){
      num = num*10+a[i]-48;
      if(a[i+1]>=97 && a[i+1]<=122 || a[i+1]=='\0')
      {
          for(int k=1;k<=num;k++)
             printf("%c",ch);
          num=0;
      }
    }
    else{
      ch=a[i];
    }
  }
    
}