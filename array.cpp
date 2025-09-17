#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> arr;

    for (int i = 0; i < 10; i++)
    {
        arr.push_back(i*2);
    }

    for (auto x:arr)
    {
        cout << x;
    }

    return 0;
}