//Day 16
//check whether a password is secure according to 5 conditions.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int lower = 0, upper = 0, digit = 0, special = 0;
    int i, n;

    scanf("%s", s);

    n = strlen(s);

    for (i = 0; i < n; i++) {

        if (s[i] >= 'a' && s[i] <= 'z')
            lower = 1;

        if (i > 0 && i < n - 1) {

            if (s[i] >= 'A' && s[i] <= 'Z')
                upper = 1;

            if (s[i] >= '0' && s[i] <= '9')
                digit = 1;

            if (s[i] == '@' || s[i] == '#' || s[i] == '%' ||
                s[i] == '&' || s[i] == '?')
                special = 1;
        }
    }

    if (n >= 10 && lower && upper && digit && special)
        printf("YES");
    else
        printf("NO");

    return 0;
}