#include <stdio.h>

int main()
{
    // int marks[]={45,78,90,47,34};
    //   0, 1, 2, 3, 4
    // printf("%d",marks);
    // Accesing the value

    // printf("%d\n",marks[0]);
    // printf("%d\n",marks[1]);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n",marks[i]);
    // }

    // int array[]={5,7,8};

    // int array[5];
    // array[0]=90;
    // array[1]=78;
    // array[2]=78;
    // array[3]=78;
    // array[4]=78;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n",array[i]);
    // }

    // int size;
    // printf("Enter the size of array: ");
    // scanf("%d",&size);

    // int array[size];

    // for (int i = 0; i < size; i++)
    // {
    //     printf("Enter the value for %d position: ",i);
    //     scanf("%d",&array[i]);
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     printf("The value at Position %d is: %d\n",i,array[i]);
    // }

    int matrix[2][3] = {
        {7, 2, 3},
        {4, 9, 6}};
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}
