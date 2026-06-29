#include <stdio.h>

int a=878;

void demo()
{
    extern int a;
    a=30;
    register int count = 0; // initialized only once
    count++;
    // printf("Count = %d\n", count);
    printf("The value of a: %d\n",a);
}

int main()
{

    // for (int i = 0; i < 15; i++)
    // {
    //     demo();
    // }
    demo();
    printf("The value of a: %d",a);
    
    return 0;
}
