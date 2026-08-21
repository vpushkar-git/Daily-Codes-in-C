//Day 2
//Write a program using a while loop that repeatedly asks the user to enter the password 
//and stops only when the correct password is entered. Finally, 
//display "Login successful!".
#include <stdio.h>
#include <time.h>
int main()
{
    clock_t start, end;
    start = clock();
    int password;
    int correct_password = 1234;
    while (1)
    {
        printf("Enter the password: ");
        scanf("%d", &password);
        if (password == correct_password)
        {
            printf("Login successful!\n");
            break;
        }
        else
        {
            printf("Incorrect password. Please try again.\n");
        }
    }
    end = clock();
    printf("Execution time: %.2f seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);
}