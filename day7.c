//Day 7:
 //You are given a sorted array consisting of only integers where every 
 //element appears exactly twice, except for one element which appears 
 //exactly once.

//Return the single element that appears only once.

//Your solution must run in O(log n) time and O(1) space.

//Example 1:

//Input: nums = [1,1,2,3,3,4,4,8,8]
//Output: 2
//Example 2:

//Input: nums = [3,3,7,7,10,11,11]
//Output: 10

//These are the sample input. Make generalized program

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int low = 0;
    int high = n - 1;

    while(low < high)
    {
        int mid = (low + high) / 2;

        // Make mid even
        if(mid % 2 == 1)
            mid--;

        if(arr[mid] == arr[mid + 1])
            low = mid + 2;
        else
            high = mid;
    }

    printf("Single element is: %d", arr[low]);

    return 0;
}