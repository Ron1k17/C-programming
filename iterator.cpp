#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v ={10, 20, 30, 40};
    vector<int>::iterator it;

    for(vector<int>::iterator it =v.begin(); it != v.end(); ++it){
        *it *= 2;
    }

    for(int x : v){
        cout<<x<<" ";
    }
    return 0;
}