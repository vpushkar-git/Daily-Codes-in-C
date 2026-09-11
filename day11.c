//Day 11
//Input:
//[-4, -1, 0, 3, 10]

//Output:
//[0, 1, 9, 16, 100]

#include <stdio.h>

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    int ans[n];

    printf("Enter unsorted array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int left = 0;
    int right = n - 1;
    int pos = n - 1;

    while (left <= right)
    {
        int leftSquare = a[left] * a[left];
        int rightSquare = a[right] * a[right];

        if (leftSquare > rightSquare)
        {
            ans[pos] = leftSquare;
            left++;
        }
        else
        {
            ans[pos] = rightSquare;
            right--;
        }

        pos--;
    }

    printf("Sorted squares: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}