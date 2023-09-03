#include<stdio.h>
int pal(char a[],int start,int end)
{
  
  for(int i=start,j=end;i<=j;i++,j--){
    if(a[i]!=a[j]){
        return 0;
        break;
    }
  }
  return 1;

}
int main(){
  char a[100], b[100];
  scanf("%[^\n]s",a);
  int start=0,end=0;
  for(int i=0;a[i];i++){
    if(a[i]==' ')
    {
      if(pal(a,start,end)){
         for(int k = start;k<=end-1;k++){
          printf("%c",a[k]);
         }
      }

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
