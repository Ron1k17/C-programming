#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

  for(int i=n;i>0;i--){
        cout <<i;
        
    }
cout<<endl;
cout<<endl;


    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
             cout <<j;
        }
        for(int j=1;j<=2*n-2*i;j++){ 
             cout <<"*";
        }
        for(int j=i;j>=1;j--){
             cout <<j;
        }
       cout<<endl;
    }

cout<<endl;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
             cout <<j;
        }
       cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
             cout <<j;
        }
       cout<<endl;
    }

    // return 0;
}
