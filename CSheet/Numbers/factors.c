/*Find all factors of a Natural Number in sorted order*/
// #include<stdio.h>
// int main(){
//   int n,i;
//   printf("enter number : ");
//   scanf("%d",&n);
//   for(i=1;i<=n;i++){
//     if(n%i==0)
//       printf("%d ",i);
//   }
// }

/*but above is a naive method and it has a complexity of O(n)
  here we can use a alternative method
   factors of 100(n) = 1,2,4,5,10,20,25,50,100
   which can be split as follows:
  (1,100) (2,50) (4,25) (5,20) (10,10)

  therefore print a factor(2) and 100/factor->(50) 
  i and n/i
  if i and n/i are same print only 1 i

*/
// A O(sqrt(n)) program that prints all divisors
// in sorted order
#include <stdio.h>
#include <math.h>
 
// function to print the divisors
void printDivisors(int n)
{ int i;
    for ( i = 1; i*i < n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }                                 //after 1st for loop i=10
    for (; i >= 1; i--) {             //here i starts frm 10 and goes decrementing
        if (n % i == 0)
            printf("%d ", n / i);
    }
}
 
/* Driver program to test above function */
int main()
{
    printf("The divisors of 100 are: \n");
    printDivisors(100);
}
