#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Range (Please Enter Number less than 100) : ";
    cin >> n;

    int prime[100] = {0};

    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j < n; j = j + i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}