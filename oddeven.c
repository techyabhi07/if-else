/*any imnteger is input through the keyboard.write a program to find out whether it is an odd number or even numbere*/

#include <stdio.h>
int main()
{

    int a;
    
    printf("enter any number\n");
    scanf("%d",&a);
    if(a%2==0)
    printf("then number is even\n");
    else
    printf("then number is odd\n");


    return 0;

    }
