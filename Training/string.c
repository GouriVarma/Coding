#include<stdio.h>
int main(){
  char a[10];
  scanf("%s",a);    //scan until space/newline
  scanf("%[^\n]s",a);      //until specified char
  scanf("%[^A-Z]s",a);        //until spwcified range of character
  scanf("%[^a-z]s",a);       
  scanf("%[^A-Z,0-9]s",a);
  scanf("%[A-Z]s",a);   //scans only uppercase
  scanf("%[a-z]s",a);
  scanf("%[A-Z,0-9]s",a);   //scans uppr and lower
  printf("%s",a);
}