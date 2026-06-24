#include <stdio.h>

// int addTwonum(int num1,int num2){
//     return num1+num2;
// }

// int mulTwonum(int num1,int num2){
//     return num1*num2;
// }

// int main()
// {

//     // printf("The sum is: %d\n",addTwonum(5,8));
//     // printf("The sum is: %d\n",mulTwonum(5,8));

//     int (*funcPtr)(int,int);
//     funcPtr=addTwonum;

//     int result1=(*funcPtr)(5,7);
//     int result2=addTwonum(5,7);
//     printf("the sum is: %d\n",result1);
//     printf("the sum is: %d\n",result2);
//     return 0;
// }

// int add(int a, int b) { return a + b; }
// int sub(int a, int b) { return a - b; }
// int mul(int a, int b) { return a * b; }

// int main()
// {
//     // int (*ops[3])(int, int) = {add, sub, mul};

//     // printf("Add: %d\n", ops[0](3, 2));
//     // printf("Sub: %d\n", ops[1](6, 2));
//     // printf("Mul: %d\n", ops[2](7, 2));

//     return 0;
// }
#include <stdlib.h>

// int main()
// {
//     int *arr = malloc(100 * sizeof(int)); // allocate memory
//     if (arr == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     arr[0] = 42;
//     printf("First element: %d\n", arr[0]);
//     free(arr);  // free memory
//     arr = NULL; // avoid dangling pointer
//     return 0;
// }
#include <stdio.h>
int main()
{
    FILE *fp;
    char str[100];

    fp = fopen("data.txt", "r"); // open file in read mode
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("The position cursor is: %d\n",ftell(fp));

    fseek(fp,6,SEEK_CUR);
    printf("The position cursor is: %d\n",ftell(fp));
    rewind(fp);
    printf("%s", fgets(str,100,fp));
    rewind(fp);
    printf("The position cursor is: %d\n",ftell(fp));

    // while (fgets(str, 100, fp) != NULL)
    // {
    //     printf("%s", str); // print file content
    // }
    fclose(fp);

    return 0;
}