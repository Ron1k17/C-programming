#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;
    // v.capacity elements add karta hai...
    cout << "capacity of vector: " << v.capacity() << endl;
    
    // v.push_back element add karta hai..
    v.push_back(1); 
    cout << "capacity of vector: " << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity of vector: " << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity of vector: " << v.capacity() << endl;

    cout << "size of vector: " << v.size() << endl;

    // vector ka elements print karna hai...
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
} 