//Day 5
//Input a number from the user and print
//a. Number of 1 and number of 0 in its binary representation.
//b. Number of consecutive 1 in the binary representation.
//Input:  [1,1,0,1,1,1]
//Output:  a   5 and 1
// b 3
#include <stdio.h>
int main()
{
    int n,arr[n],count1=0,count0=0,countconsecutive=0,maxconsecutive=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count1++;
            countconsecutive++;
            if(countconsecutive>maxconsecutive)
            {
                maxconsecutive=countconsecutive;
            }
        }
        else
        {
            count0++;
            countconsecutive=0;
        }
    }
    printf("Number of 1: %d\n", count1);
    printf("Number of 0: %d\n", count0);
    printf("Maximum consecutive 1: %d\n", maxconsecutive);
    return 0;
}