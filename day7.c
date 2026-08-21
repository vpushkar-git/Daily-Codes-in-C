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
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i==0 && arr[i]!=arr[i+1])
        {
            printf("The single element is: %d",arr[i]);
            break;
        }
        else if(i==n-1 && arr[i]!=arr[i-1])
        {
            printf("The single element is: %d",arr[i]);
            break;
        }
        else if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1])
        {
            printf("The single element is: %d",arr[i]);
            break;
        }
    }
    return 0;
}