#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector declaration
    vector<int> v;

    // Elements add karna
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);

    cout << "Initial Vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // last element remove karna
    v.pop_back();
    cout << "\nafter pop_back: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // vector size and capacity
    cout << "\nsize: " << v.size();
    cout << "\ncapacity: " << v.capacity();

    return 0;
}