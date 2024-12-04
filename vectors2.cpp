#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Intial capacity: " << v.capacity() << endl;

    // Memory allocation process
    for (int i = 1; i <= 10; i++){
        v.push_back(i);

        cout << "Added " << i << ", size: " << v.size() << ", Capacity: " << v.capacity() << endl;
    }

    return 0;
}