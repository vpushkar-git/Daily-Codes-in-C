//Day 10
//*****
//*   *
//*   *
//*   *
//*****

#include <stdio.h>

int main()
{
    int rows = 5;
    int cols = 5;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}