/* You are climbing a staircase. It takes n steps to reach the top.

  Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

#include<stdio.h>
int main(){
  int n;
  printf("Input: n = ");
  scanf("%d",&n);
  if(n<=3){
    printf("Output: %d",n);
  }
  else                                      //this actually becomes fibonacci series
  {
    int a=3,b=2,c=0;
    for(int i=0;i<n-3;i++){
      c=a+b;
      b=a;
      a=c;
    }
    printf("Output: %d",c);
  }
}


/*Explanation

   0 steps = 1 way 
   1 step  = 1 way
   2 steps = 2 ways : 1+1 || 2 
   3 steps = 3 ways : 1+1+1 || 2+1|| 1+2
   4 steps = 5 ways : 1+1+1+1 || 1+1+2 || 1+2+1 || 2+1+1 || 2+2 
   5 steps = 8 ways : 1+1+1+1+1 || 1+1+1+2 || 1+1+2+1|| 1+2+1+1 || 2+1+1+1||2+2+1||2+1+2||1+2+2
   6 steps = 13 ways

*/
