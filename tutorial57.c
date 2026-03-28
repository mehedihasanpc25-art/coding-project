// matrix question
//solved by code with harry(edited)
// k will be n(which will be enimilate after result)

#include <stdio.h>
int main()
{
    int matrix1[3][5], matrix2[5][3], result[3][3],sum=0;
    printf("1.matrix format 3*5\n2.matrix format 5*3\n result format 3*3\n");
    printf("Enter the value of matrix no.1\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the value of matrix no.2");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k=0; k < 5; k++)
            {
                sum += matrix1[i][k]*matrix2[k][j];
            }
            result[i][j]= sum;
            sum=0;
        }
    }
    printf("\nvalue's of matrix1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n\nvalue's of matrix2:\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n\nnew matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}