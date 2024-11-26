#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"0";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"0";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    

// ++++++++++++++++++++++++++++++++++

    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n - i;
        for(int j= 1; j<= stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }

cout<<endl;


// inverted symmetric triangle-----------
    for(int i=1;i<2*n; i++){
        int star = i;
        if(i > n) star =2*n-i;
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        cout << endl;
    }


}