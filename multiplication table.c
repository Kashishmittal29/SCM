

// int main() {
//     int a;
//     printf("enter the value of a:");
//     scanf("%d", &a);
//     int i = 1; 
//     int mul;   

//     do{
//         mul = a * i; 
//         printf("%d x %d = %d\n", a, i, mul); 
//         ++i;
//     }
//     while ( i <= 10 );
//     return 0;
// }
#include <stdio.h> 
#include <unistd.h> 
int main() 
{ 
    if (fork() || fork()) 
        fork(); 
    printf("1 "); 
    return 0; 
}