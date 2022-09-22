#include<stdio.h>

int main()
{
    int n=2;
    int m1[n][n], m2[n][n], mm[n][n];
    int i, j, k, a, b;

    printf("MATRIX 1\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            a=i+1;
            b=j+1;
            printf("ENTER ELEMENT AT POSITION (%d, %d) --> ", a, b);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\nMATRIX 2\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            a=i+1;
            b=j+1;
            printf("ENTER ELEMENT AT POSITION (%d, %d) --> ", a, b);
            scanf("%d", &m2[i][j]);
        }
    }

    printf("\n\nDISPLAYING MATRIX 1\n");
    for (i=0; i<n; i++)
    {
        printf("\n");
        for (j=0; j<n; j++)
        {
            printf("%d  ", m1[i][j]);
        }
    }
    printf("\n\nDISPLAYING MATRIX 2\n");
    for (i=0; i<n; i++)
    {
        printf("\n");
        for (j=0; j<n; j++)
        {
            printf("%d  ", m2[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            for (k=0; k<n; k++)
            {
                mm[i][j]=m1[i][k]*m2[k][j];
            }
        }
    }
    printf("\n\nDISPLAYING MATRIX AFTER MULTIPLICATION\n");
    for (i=0; i<n; i++)
    {
        printf("\n");
        for (j=0; j<n; j++)
        {
            printf("%d  ", mm[i][j]);
        }
    }
}