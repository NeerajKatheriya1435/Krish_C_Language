#include <stdio.h>


int fact(int num){

    if(num==1 || num==0){
        return 1;
    }
    return num*fact(num-1);
}

int main(int argc, char const *argv[])
{
    // Fibbonacci Series
    // int first=0;
    // int second=1;

    // int count=20;
    // for (int i = 0; i < count; i++)
    // {
    //     int temp=first+second;
    //     printf("%d ",first);
    //     first=second;
    //     second=temp;
    // }

    // int num=1331;
    // int num2=num;
    // int rev=0;
    // while (num>0)
    // {
    //     int ld=num%10;
    //     rev=rev*10+ld;
    //     num=num/10;
    // }
    // // printf("Reverse is: %d",rev);
    
    // if(num2==rev){
    //     printf("Number is Palindrome");
    // }else{
    //     printf("Not Palindrome");
    // }

    // int a=6;
    // int* ptr=&a;

    // printf("%d\n",a);
    // printf("%d\n",&a);
    // printf("%d\n",ptr);
    // printf("%d\n",&ptr);

    // printf("%d\n",*ptr);

    // int arr[]={4,5,67,87};
    // int *ptr=arr;

    // printf("%d\n",ptr);
    // printf("%d\n",*ptr);
    // printf("%d\n",*ptr+1);
    // printf("%d\n",*ptr+2);

    // for(int i = 0; i < 4; i++) {
    //     printf("%d ", *(ptr + i));
    // }

    

    printf("The fact is %d",fact(8));

    return 0;
}
