#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    char a[100], b[100];
    int i = 0;

    char ch1, ch2;

    while (cin >> ch1)
    {
        a[i] = ch1;

        if (cin.get() == '\n')
        {
            a[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;

    while (cin >> ch2)
    {
        b[i] = ch2;
        if (cin.get() == '\n')
        {
            b[i] = '\0';
            break;
        }
        i++;
    }

    str1 = a;
    str2 = b;

    for (int i = 0; i < str1.length(); i++)
    {
        for (int j = 0; j < str2.length(); j++)
        {
            if (str1[i] == str2[j])
            {
                str1.erase(i, 1);
            }
        }
    }

    cout << str1 << endl;
    system("pause");
    return 0;
}