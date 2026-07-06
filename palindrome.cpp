// BRUTE FORCE APPROACH

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string k)
{
    string s = "";


    for (char ch : k)
    {
        if (isalnum(ch))
        {
            s += tolower(ch);
        }
    }

    string m = "";


    for (int i = s.length() - 1; i >= 0; i--)
    {
        m += s[i];
    }


    if (s == m)
        return true;
    else
        return false;
}

int main()
{
    string str = "A man, a plan, a canal: Panama";

    if (isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}