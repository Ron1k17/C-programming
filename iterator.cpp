#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};

    // iterator declare karna
    vector<int>::iterator it;

    // traversing the vector using iterator
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        *it *= 2;
    }
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // reverse traversal
    for (auto it = v.rbegin(); it != v.rend(); ++it)
    {
        cout << *it << " ";
    }
    return 0;
}