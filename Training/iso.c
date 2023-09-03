#include<stdio.h>
int main(){
  char a[10],b[10];
  int use[26]={0};
  int flag=0;
  char encrypt[26]={'\0'};
  scanf("%s",a);
  scanf("%s",b);
  for(int i = 0;a[i];i++){
     if(encrypt[a[i]-97]=='\0'&& use[b[i]-97]==0)       ///eggo ---> a
     {                                                  ///odd  ---> b
        encrypt[a[i]-97]=b[i];
        use[b[i]-97]=-1;
     }
    //  else if(encrypt[a[i]-97]!=b[i])          ///egg
    //  {                                        ///oda
    //       flag=1;
    //       printf("non isomorphic");
    //       break;
    //  }
     else if(use[b[i]]==-1 || encrypt[a[i]-97]!=b[i]) {
      flag=1;
      printf("non isomorphic");
      break;
     }      
      
  }
  if(flag==0)
     {
      printf("isomorphic");
     } 
}



/*0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26*/
/*        o   d                                                         */
/*0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26*/
/*       -1                       -1                                   */