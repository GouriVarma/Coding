//REPEATING CHAR WITHOUT CONSIDERING CASES

#include<stdio.h>
int main(){
  char a[10],b[10];
  int count[26]={0};
  scanf("%[^\n]s",a);
  for(int i=0;a[i];i++){
    if(a[i]>='a' && a[i]<='z')
    count[a[i]-97]++;           //b[i]=a[i]
    if(a[i]>='A' && a[i]<='Z')     
    count[a[i]-65]++;         //b[i]=a[i]+32    //upper: 65-90,lower:97-122
  }
  for(int i=0;i<26;i++){
    if(count[i]>1)
    printf("%c - %d\n",i+97,count[i]);
  }
}