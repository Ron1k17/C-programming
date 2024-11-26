#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
// for(int i=0;i<n;i++){
//     int star = 1;
//     if(i % 2 ==0) star=1;
//     else star =0;
    
//         for(int j=0;j<i+1;j++){
//             cout<<star;
//             star = 1-star;
//         }
//         cout<<endl;
//     }


for(int i=1;i<=n;i++){
    // int star = 1;
    // if(i % 2 ==0) star=1;
    // else star =0;
    
        for(int j=1;j<=i;j++){
            cout<<j;
            // star = 1-star;
        }
        for(int j=1;j<=2*n-2*i;j++){
            cout<<"0";
            // star = 1-star;
        }
        for(int j=i;j>=1;j--){
            cout<<j;
            // star = 1-star;
        }
        cout<<endl;
    }
int num=1;
    for (int i =1;i<=n;i++){
        
        for(int j=1; j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}