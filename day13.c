//Day 13
//nums1 = [1, 3]
//nums2 = [2]

//Combined sorted array:
//[1, 2, 3]

//Median = 2

#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int a[m];

    printf("Enter first sorted array:\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int b[n];

    printf("Enter second sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[m + n];

    int i = 0;
    int j = 0;
    int k = 0;

    // Merge both sorted arrays
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }

    // Remaining elements of first array
    while (i < m)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    // Remaining elements of second array
    while (j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    int total = m + n;
    double median;

    if (total % 2 == 0)
    {
        median = (c[total / 2 - 1] + c[total / 2]) / 2.0;
    }
    else
    {
        median = c[total / 2];
    }

    printf("Median = %.2f", median);

    return 0;
}