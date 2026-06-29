#include <stdio.h>
#include <stdlib.h>
// void greet(){
//     static int count;
//     printf("%d\n",count);
//     count++;
//     // printf("Function chla gaya The count value is: %d",count);
// }

int main()
{
    // greet();
    // greet();
    // greet();
    // greet();
    // greet();

    // printf("The count value is: %d",count);
    // int size;
    // printf("Enter the memory size: ");
    // scanf("%d",size);
    // int* ptr= (int*) malloc(size);

    // *ptr=34;
    // *(ptr+1)=18;
    // *(ptr+2)=86;
    // *(ptr+3)=84;
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The value at %d is: %d\n",i,*(ptr+i));
    // }

    
    int size;
    printf("Enter the memory size: ");
    scanf("%d",size);
    int* ptr= (int*) calloc(size,sizeof(int));

    *ptr=34;
    *(ptr+1)=18;
    *(ptr+2)=86;
    *(ptr+3)=84;
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is: %d\n",i,*(ptr+i));
    }

    int*newPTR;
    newPTR=(int*) realloc(ptr, 4 * sizeof(int));
    free(ptr);
    
    return 0;
}
