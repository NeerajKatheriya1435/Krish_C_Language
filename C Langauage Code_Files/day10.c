#include <stdio.h>
#include <string.h>


// void greet(int* num){
//      *num=78;
// }

void greet(int* num){
    *(num+1)=67;
}

int main(int argc, char const *argv[])
{
    
    // int a=9;
    // // greet(a);
    // greet(&a);
    // int arr[]={4,6,7,8};

    // printf("%d\n",arr);

    // int a=8;
    // int* ptr=&a;

    // printf("The value of a: %d\n",a);
    // printf("The address of a: %d\n",&a);

    // printf("The address of a: %d\n",ptr);
    // printf("The adress of ptr: %d\n",&ptr);
    // printf("The value at adress in pointer: %d\n",*ptr);

    // int arr[]={3,6,8,4,0};
    // int*ptr=arr;

    // printf("The address of a is: %d\n",*arr);
    // printf("The address of a is: %d\n",*(arr+1));
    // printf("The address of a is: %d\n",*(arr+2));

    // printf("The address of a is: %d\n",*ptr);
    // printf("The address of a is: %d\n",*(ptr+1));
    // printf("The address of a is: %d\n",*(ptr+2));


    // printf("%x\n",&a);

    // int num=5;

    // greet(num);
    // printf("%d\n",num);

    // greet(&num);
    // printf("%d\n",num);

    // int arr[]={3,6,2,8};

    // greet(arr);
    // printf("%d\n",arr[1]);

    // char str[6] = {'H','e','l','l','o','\0'};

    // char str[10]="Rohan Kum";
    // printf("%s",str);
    // char str[20];
    // printf("Enter the name: ");
    // // scanf("%s",&str);
    // gets(str);
    // // printf("%s",str);
    // puts(str);

    // char sentence[50];
    // fgets(sentence, sizeof(sentence), stdin);
    // printf("%s", sentence);
    // puts(sentence);

    // char name1[20];
    // char name2[30];

    // gets(name1);
    // // name2=name1;

    // // printf("The length of name is: %d\n",strlen(name));

    // strcpy(name2,name1);
    // printf("The new value of name 2: ");
    // puts(name2);

    char firstName[20]="Rohan";
    char lastName[30]="Kumar";

    // printf("The concat is: %s",strcat(firstName,lastName));

    // printf("The concat is: %d",strcmp("ghhelol","he"));
    // printf("The concat is: %s",strupr(firstName));
    printf("The concat is: %s",strrev(firstName));

    return 0;

}
