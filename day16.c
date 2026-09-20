//Day 16
//check whether a password is secure according to 5 conditions.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        bool lower = false, upper = false, digit = false, special = false;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] >= 'a' && s[i] <= 'z')
                lower = true;

            if (i > 0 && i < s.length() - 1) {
                if (s[i] >= 'A' && s[i] <= 'Z')
                    upper = true;

                if (s[i] >= '0' && s[i] <= '9')
                    digit = true;

                if (s[i] == '@' || s[i] == '#' || s[i] == '%' ||
                    s[i] == '&' || s[i] == '?')
                    special = true;
            }
        }

        if (s.length() >= 10 && lower && upper && digit && special)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}