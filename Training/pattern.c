/* conditions
    1. if rows = columns both the for loops will have the same conditions
    2. Check the character to be printed ,that char should be in the first condition stmt
    3. conditions should be written on 3 variables i,j,num
*/





//row-col
// #include<stdio.h>
// int main(){
//   int num;
//   scanf("%d",&num);

//   for(int i=1;i<=num;i++){
//     for(int j=1;j<=num;j++)
//         printf(" * ");
//     printf("\n");
//   }
// }

//print square
// #include<stdio.h>
// int main(){
//   int num;
//   scanf("%d",&num);

//   for(int i=1;i<=num;i++){
//     for(int j=1;j<=num;j++)
//       {  
//         if(i==1 || j==1 || j==num || i==num)
//           printf("* ");
//         else
//           printf("  ");
//       }
//     printf("\n");
//   }
// }

//print cross star                           //  i   j   num
// #include<stdio.h>                         //  1   7   7
// int main(){                              //   2   6   7
//   int num;
//   scanf("%d",&num);

//   for(int i=1;i<=num;i++){
//     for(int j=1;j<=num;j++)
//       {  
//         if(i==j || i+j==num+1)
//           printf("* ");
//         else
//           printf("  ");
//       }
//     printf("\n");
//   }
// }

//cross with characters
// #include<stdio.h>
// int main(){
//   int num;
//   char a[100];
//   scanf("%s%n",a,&num);//gives stinglength
//   for(int i=1;i<=num;i++){
//     for(int j=1;j<=num;j++)
//       {  
//         if(i==j || i+j==num+1)
//           printf("%c",a[j-1]);
//         else
//           printf("  ");
//       }
//     printf("\n");
//   }
// }

//print right angles triangle (left)
// #include<stdio.h>
// int main(){
//   int num;
//   scanf("%d",&num);
//   for(int i=1;i<=num;i++){
//     for(int j=1;j<=i;j++)
//         printf("* ");
//     printf("\n");
//   }
// }


// #include<stdio.h>
// int main(){
//   int num;
//   scanf("%d",&num);

//   for(int i=1;i<=num;i++){
//     for(int j=1;j<=num;j++)
//         printf(" * ");
//     printf("\n");
//   }
// }

//right angle triangle (right)
// #include<stdio.h>
// int main(){
//   int num;
//   scanf("%d",&num);
//   for(int i=1;i<=num;i++){
//     for(int j=1;j<=num;j++)
//       if(j<=num-i)
//         printf(" ");
//       else
//         printf("*");
//     printf("\n");
//   }
// }


// #include<stdio.h>
// int main(){
//   int num;
//   scanf("%d",&num);
//   for(int i=1;i<=num;i++){
//     for(int j=1;j<=num;j++)
//       if(j<=num-i)
//         printf(" ");
//       else
//         printf("* ");    //put space to get pyramid
//     printf("\n");
//   }
// }


//alt pyramid with char
// #include<stdio.h>
// int main(){
//   int num,mid;
//   char a[100];
//   scanf("%s%n",a,&num);
//   for(int i=1;i<=num;i++){
//     mid=num/2;
//     for(int j=1;j<=num;j++){
//       if(j<=num-i)
//         printf(" ");
//       else
//         printf("%c ",a[mid++%num]);
//     }   
//     printf("\n");
//   }
// }



//diamond

// #include<stdio.h>
// int main(){
//   int num;
//   scanf("%d",&num);
//   for(int i=1;i<=num;i++){
//     for(int j=1;j<num+i;j++){
//       if(j<=num-i){
//         printf(" ");
//       }
//       else{
//         printf("*");
//       }
//     }
//     printf("\n");
//   }
//   for(int i=num-1;i>=1;i--){
//     for(int j=1;j<num+i;j++){
//       if(j<=num-i){
//         printf(" ");
//       }
//       else{
//         printf("*");
//       }
//     }
//     printf("\n");
//   }
// }


//diamond number
// #include<stdio.h>
// int main()
// {
//   int num,val;
//   scanf("%d",&num);
//   for(int i=1;i<num;i++)
//   {
//     val=i;
//     for(int j=1;j<num+i;j++)
//     {
//       if(j<=num-i)
//       {
//         printf(" ");
//       }
//       else
//       {
//         if(j<num)
//         {
//           printf("%d",val--);
//         }
//         else
//         {
//           printf("%d",val++);
//         }
//       }
//     }
//     printf("\n");
//   }
//   for(int i=num;i>=1;i--)
//   {
//     val=i;
//     for(int j=1;j<num+i;j++)
//     {
//       if(j<=num-i)
//       {
//         printf(" ");
//       }
//       else
//       {
//         if(j<num)
//         {
//           printf("%d",val--);
//         }
//         else
//         {
//           printf("%d",val++);
//         }
//       }
//     }
//     printf("\n");
//   }
// }



