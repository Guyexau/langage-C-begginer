#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//simple calculator made by MBENGUE Guy
int main() {
    //celaration
    float choice,a,b,s; 
    //choising number 

    printf("Plesae choice number a\n a= ");
    scanf("%f", &a);

    //verifying that a is a digit 
    if (!isdigit(a))  {
        printf("INVALID NUMBER CHOICE");
        exit(1);

    }
    printf("Plesae choice number b\n b= ");
    scanf("%f", &b);
    //verifying that b is a digit 
    if (!isdigit(b))  {
        printf("INVALID NUMBER CHOICE");
        exit(1);

    }

    
    //MENU

    printf("CALCULATOR\n 1-addition\n 2-susbtraction\n 3-multiplication\n 4-Division\n");
    //choice option 
    printf("make your choice using number (eg : 1): ");
    scanf("%f", &choice);

    //addition
    if (choice==1) {
        s=a+b;
        printf(" %f + %f = %f",a, b,s);
    //substraction
    }else if (choice==2) {
        s=a-b;
        printf(" %f - %f = %f",a, b,s);
    //multiplication
    }else if (choice==3){
        s=a*b;
        printf(" %f x %f = %f",a, b,s);
    //division
        
    }else if (choice==4) {
        s=a/b;
        printf(" %f / %f = %f",a, b,s);
        //error 
    }else {
        printf("an error occurs, you may not choose a number or tried to divide by 0");
    }


    return 1;
}
