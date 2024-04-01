// int main()
// {
//     int a=10;
//     int A=20;
//     printf("\nValue of a is %d",a);
//     printf("\nValue of A is :%d",A);
//     return 0;
// }
// int main(){
//     int N,i,a;
//     printf("enter a non-negative integer N:");
//     scanf("%d",&N);
//     int x = (N+2);
//     for (i=0;i<=N; ++i)
//     {
//         int yes=x*i;
//         a=(x + i*N);
//         printf("%d", a);
        
//     }
//     return 0;
// }
// Write a Program to show the use to input (Scanf)/output (Printf) statements and block structure of C-program by highlighting the features of "stdio.h".
#include <stdio.h>
int main(){
    char name[50];
    printf("Enter your name:");
    scanf("%s", name);
    printf("Hello, %s!\n",name);
    int age = 18;
    printf("You are %d years old. \n",age);
    return 0;
}