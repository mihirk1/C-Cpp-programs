#include<stdio.h>

void add(int a[3][3],int b[3][3])
{
    int c[3][3],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}

void multiply(int a[3][3],int b[3][3])
{
    int c[3][3],i,j,k;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
           
        }
    }

    printf("Muliplication of matrices is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}
int main()
{

    int a[3][3]={{1,3,5},{2,4,6},{7,9,0}};
    int b[3][3]={{0,1,0},{2,8,2},{3,1,6}};
    add(a,b);
    multiply(a,b);
    return 0;
}


