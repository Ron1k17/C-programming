#include<bits/stdc++.h>
using namespace std;

int main(){
// pair concept--------------------------------------------------------
    pair<int,string> p;
    p = {27, "nik"};
    cout<< p.first << " " << p.second <<endl;

    pair<int, pair<int ,int>> p1 = {1,{3,4}};
    cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl ;

    pair<int, int> arr[] = {{1,2},{2,5},{5,1}};
    cout << arr[2].first ;



}