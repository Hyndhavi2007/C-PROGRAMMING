#include<stdio.h>
int main() {
    int a,b;
    int multiplication;
    printf("Enter the first number a: ");
    scanf("%d", &a);
    printf("Enter the second number b: ");
    scanf("%d", &b);
    multiplication = a * b;
    printf("The Multiplication of Two Numbers is %d\n", multiplication);
    return 0;
}