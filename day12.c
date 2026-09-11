//Day 12
//Input:
//[1, 1, 2, 2, 3, 4, 4, 5]

//Output:
//[1, 2, 3, 4, 5]

#include <stdio.h>

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter sorted array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int j = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[j])
        {
            j++;
            a[j] = a[i];
        }
    }

    printf("Array after removing duplicates:\n");

    for (int i = 0; i <= j; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}