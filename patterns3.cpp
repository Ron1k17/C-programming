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

for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) 
            cout<<"1";
            else cout<<"0";

        }
        cout<<endl;
    }
// int space= n;
   for(int i=1;i<=n;i++){
    // int space=i;
    // if(i<n) space = 2*n-i;
        for(int j=1;j<=n-i;j++){
            // if((i+j)%2==0) 
            cout<<" ";
            // else cout<<"0";

        }
        for(int j=1;j<=2*i-1;j++){
            // if(i<n) cout<<2*n-i;
            cout<<"*";
        }

        cout<<endl;
    }
    for(int i=1;i<n;i++){
    // int space=i;
    // if(i<n) space = 2*n-i;
        for(int j=0;j<2*i-i;j++){
            // if((i+j)%2==0) 
            cout<<" ";
            // else cout<<"0";

        }
        for(int j=0;j<2*n-2*i-1;j++){
            // if(i<n) cout<<2*n-i;
            cout<<"*";
        }

        cout<<endl;
    }
}