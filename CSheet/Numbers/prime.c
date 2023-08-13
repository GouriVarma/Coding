/* Write a program to check whether a anumber is prime or not*/ 

// #include<stdio.h>
// int main(){
//   int n,i,flag=0;
//   scanf("%d",&n);
//   for(i=2;i<n/2;i++){
//     if(n%i==0)
//      flag=1;
//   }
//   if(flag==1)
//    printf("%d not a prime number",n);
//   else
//     printf("%d is a prime number",n);
// }


/* print prime numbers from 1 to n*/

// #include<stdio.h>
// void main(){
//  int i, num, n, count;
//  printf("Enter the range: \n");
//  scanf("%d", &n);
//  printf("The prime numbers in between the range 1 to %d:",n);
//  for(num = 1;num<=n;num++){
//          count = 0;
//          for(i=2;i<=num/2;i++){
//              if(num%i==0){
//                  count++;
//                  break;
//              }
//         }
//          if(count==0 && num!= 1)
//              printf("%d ",num);
//     }
// }

/*PRINT PRIME NUMBERS IN A PARTICULAR RANGE*/

#include<stdio.h>
int main(){
  int a,b,i,j,flag;
  printf("enter lower bound: ");
  scanf("%d",&a);
  printf("enter upper bound: ");
  scanf("%d",&b); 
  for(i=a;i<=b;i++){
    if(i==0 || i==1)
      continue;
    flag=0;
    for(j=2;j<=i/2;j++){
      if(i%j==0){
        flag=1;
        break;
      }
    }
    if(flag==0){
      printf("%d ",i);
    }
  }
}
