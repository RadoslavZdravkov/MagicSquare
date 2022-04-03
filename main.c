#include <stdio.h>
#include <stdlib.h>

#define BOOL int
int main()
{
    const int true=1;
    const int false=0;

    int counter=0;
    int matrixSize=0;
    printf("Enter matrix size: ");
    scanf("%d",&matrixSize);
    int matrix[matrixSize][matrixSize];
    printf("Enter matrix elements: \n");
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixSize;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    int sumsSize=matrixSize*2+2;
    int sums[sumsSize];
    for(int i=0;i<sumsSize;i++)
    {
        sums[i]=0;
    }

    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixSize;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixSize;j++)
        {
            sums[counter]+=matrix[i][j];
        }
        counter++;
    }
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixSize;j++)
        {
            sums[counter]+=matrix[j][i];
        }
        counter++;
    }
    for(int i=0;i<matrixSize;i++)
    {
        sums[counter]+=matrix[i][i];
    }
    counter++;
    for(int i=0;i<matrixSize;i++)
    {
        sums[counter]+=matrix[i][matrixSize-1-i];
    }
    BOOL isMagic=true;
    for(int i =0;i<sumsSize;i++)
    {
        if(sums[0]!=sums[i])
        {
            isMagic=false;
        }
    }
    for(int i =0;i<sumsSize;i++)
    {
        printf("%d ",sums[i]);
    }
    printf("\n");

    if(isMagic){printf("It's a magic square!");}
    else printf("Not a magic square!");
    return 0;
}
