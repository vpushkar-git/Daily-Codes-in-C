//Day 9
//Input:
//n = 7
//Array = [1, 2, 3, 4, 5, 6, 7]
//k = 3

//Output:
//[5, 6, 7, 1, 2, 3, 4]

#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    k = k % n;

    for (int j = 0; j < k; j++)
    {
        int last = a[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = last;
    }

    printf("Rotated Array:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}