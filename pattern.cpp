#include <bits/stdc++.h>
using namespace std;
void printPattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern6(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void printPattern7(int n)
{
    int start = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= start; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        start -= 2;
    }
}
void printPattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char c = 'A'; c <= 'A' + i; c++)
        {
            cout << c;
        }
        cout << endl;
    }
}
void printPattern9(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        if (space != (2 * (n - 1)))
        {
            cout << endl;
        }
        space += 2;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space -= 2;
    }
}
void printPattern10(int n)
{
    int stars;
    int spaces = 2 * (n - 1);
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i > n)
        {
            stars = 2 * n - i;
        }
        else
            stars = i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i >= n)
            spaces += 2;
        else
            spaces -= 2;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        printPattern10(n);
    }
    return 0;
}