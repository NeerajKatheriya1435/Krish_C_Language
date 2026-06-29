#include <stdio.h>

// int fibb(int num){
//     if(num==0){
//         return 0;
//     }
//     if(num==1){
//         return 1;
//     }
//     return fibb(num-1)+fibb(num-2);
// }

int main()
{
    // int a=0;
    // int b=1;
    // int temp;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n",a);
    //     temp=a;
    //     a=a+b;
    //     b=temp;
    // }
    
    // printf("The th term is: %d\n",fibb(8));

    // int num1=32;
    // int num2=24;
    // int lcm=0;

    // for (int i = num2; i <=num1*num2; i++)
    // {
    //     if(i%num1==0 && i%num2==0){
    //         lcm=i;
    //         printf("The LCM is: %d\n",i);
    //         break;
    //     }
    // }

    // printf("The GCD is: %d",(num1*num2)/lcm);

    // Write a program to check whether a number is a palindrome (e.g., 121, 1331)
    
    int num=1635;
    int temp=num;
    int temp1=num;
    int count=0;
    int rev=0;

    while (num>0)
    {
        num=num/10;
        count++;
    }
    
    while (temp>0)
    {
        int ld=temp%10;

        int fact=1;
        for (int i = 1; i <= count; i++)
        {
            fact=fact*ld;
        }
        rev=rev+fact;
        temp=temp/10;  
    }

    if(temp1==rev){
        printf("The number is ArmStrong");
    }else{
        printf("The number is not ArmStrong");
    }
    


    return 0;
}
