#include <bits/stdc++.h>
using namespace std;

void strongPassword(int n)
{
    // Return the minimum number of characters to make the password strong
    int len;
    cin >> len;
    string password;
    for (int i = 0; i < len; i++)
    {
        char c;
        cin >> c;
        password.push_back(c);
    }
    // int count = 0;
    // bool digit = false;
    // bool lower = false;
    // bool upper = false;
    bool special = false;
    // string special_character = "!@#$%^&*()-+";
    for (int i = 0; i < len; i++)
    {

        if (isupper(password[i]))
        {
            cout << "NO";
            return;
        }

        if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '+')
        {
            special = true;
        }
        if (special)
        {
            cout << "NO";
            return;
        }

        if (islower(password[i]))
        {

            if (isdigit(password[i + 1]))
            {
                cout << "NO";
                return;
            }
        }
        sort(password.begin(), password.end());

        // Check if all digits are sorted in non-decreasing order
        for (int i = 0; i < len - 1; i++)
        {
            if (isdigit(password[i]) && isdigit(password[i + 1]) && password[i] > password[i + 1])
            {
                cout << "NO";
                return;
            }
        }

        // Check if all letters are sorted in non-decreasing order
        for (int i = 0; i < len - 1; i++)
        {
            if (isalpha(password[i]) && isalpha(password[i + 1]) && password[i] > password[i + 1])
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        strongPassword(n);
    }

    return 0;
}