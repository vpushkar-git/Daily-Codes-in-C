//Day1:  
//Write a C program that accepts a positive integer containing digits from 0 to 9. Exactly one digit is missing, while the remaining nine digits appear exactly once. 
//Input : 854102967
//Output:  3
#include <stdio.h>
#include <time.h>
int main()
{
    int n,sum=0;
    clock_t start, end;
    start = clock();
    printf("Enter a positive integer containing digits from 0 to 9 with one missing digit:");
    scanf("%d",&n);
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    int missing_digit=45-sum;
    printf("The missing digit is: %d\n", missing_digit);
    end = clock();
    printf("Execution time: %.2f seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);
    return 0;
}