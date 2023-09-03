#include<stdio.h>
void rev(char a[],int start,int end){
  for(int i=end;i>=start;i--)
      printf("%c",a[i]);
  printf(" ");
}
int main(){
  char a[100];
  scanf("%[^\n]s",a);
  int start=0,end=0;
  for(int i=0;a[i];i++){
    if(a[i]==' ')
    {
       for(int k=start;k<=end-1;k++)
      //   printf("%c",a[k]);
           rev(a,start,end-1);
      printf("\n");
      start = i+1;
      end++;
    }
    else{
      if(a[i+1]=='\0')
          a[i+1]=' ';
      end++;
    }
  }
  
}
