#include <stdio.h>
#include <stdlib.h>

#define BOOL int
int main()
{
    const int true=1;
    const int false=0;
    int bool;
    int matrix[3][3]=
    {
        {2,7,6},
        {9,5,1},
        {4,3,8}
    };
    int sums[8];
    for(int i=0;i<8;i++)
    {
        sums[i]=0;
    }
    int counter=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sums[counter]+=matrix[i][j];
        }
        counter++;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sums[counter]+=matrix[j][i];
        }
        counter++;
    }
    for(int i=0;i<3;i++)
    {
        sums[counter]+=matrix[i][i];
    }
    counter++;
    for(int i=0;i<3;i++)
    {
        sums[counter]+=matrix[i][3-1-i];
    }
    BOOL isMagic=true;
    for(int i =0;i<8;i++)
    {
        if(sums[0]!=sums[i])
        {
            isMagic=false;
        }
    }
    for(int i =0;i<8;i++)
    {
        printf("%d ",sums[i]);
    }
    if(isMagic){printf("YES");}
    else printf("NO");
    return 0;
}
