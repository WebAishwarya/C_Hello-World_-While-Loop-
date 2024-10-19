/*
    ~ LOOPS :
            1) While loop
            2) Do While loop
            3) For loop
            
        1) While Loop :
            Syntax :
                    initialization;
                    while(condition)
                    {
                        statements;
                        increment/decrement;
                    }
*/

//  Program to Print 'Hello World' 5 times

#include<stdio.h>

int main()
{
    /*
        Common Way :
        printf("Hello World\n");
        printf("Hello World\n");
        printf("Hello World\n");
        printf("Hello World\n");
        printf("Hello World\n");
    */
    
    // By Using While Loop
    
    int i = 1;
    while(i<=5)
    {
        printf("Hello World\n");
        i++;
    }
    
    return 0;
}
