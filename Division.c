#include<stdio.h>
int main(){
    int a,b;
    int division;
    float result;
    printf("Enter the first number a : ");
    scanf("%d" , &a);
    printf("Enter the second name b: ");
    scanf("%d" , &b);
    division = a/b;
    result = (float)a/(float)b; 
    printf("The Division of Two Number is %d\n" , division); // Here result will be in integer and gives only quotient value of division.
                                                             // Here the remainder value is ignored.(like if we give 5/2 then the output will be 2 only.)
                                                             // the remainder value will be 1 for 5/2 but it gives only quotient value.
    printf("The Division of Two Number in float is %.2f\n" , result);// Here result will be in float and gives decimal value of division 
                                                 //i.e quotient but here the remainder value is zero. 
    return 0;
}