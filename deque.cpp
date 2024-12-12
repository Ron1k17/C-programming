#include<bits/stdc++.h>
using namespace std;

int main(){
    // Deque initialisation
    deque<int> dq;

    // Elements ko insert karte hain
    dq.push_back(10);         // back me insert
    dq.push_front(20);       // front me insert
    dq.push_back(30);

    cout<<"Deque ke elements: ";
    for(int x : dq){
        cout << x << " ";
    }
    cout<<endl;

    // Access elememts
    cout<<"Front elements: " << dq.front() << endl;
    cout<<"Back elements: " << dq.back() << endl;

    // Remove elements
    dq.pop_back();             // Back se remove karta hai
    cout << "Back remove ke baad: ";
    for(int x : dq){
        cout << x << " ";
    }
    cout<<endl;

    // Size aur empty check karte hain 
    cout<<"Deque ka size: " << dq.size() << endl;
    cout<<"Deque empty hai?: " << (dq.empty() ? "Yes" : "No" )<< endl;

    return 0;

}