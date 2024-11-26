#include <iostream>
using namespace std;

int main(){

    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

// triangle star patterns
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
// cout<<endl;
// triangle number pattern
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
// 
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

// inverted triangle 
    int n;
    cin>>n;
    for(int i=0; i<n; i++){

        for(int j = 0; j<n-i-1; j++){
            cout <<"*";
        }
        for(int j = 0; j< 2*i+1; j++){
            cout <<"0";
        }
        for(int k = 0; k<n-i-1; k++){
            cout <<"*";
        }
        cout <<endl;
    }
    
        return 0;
}
    
