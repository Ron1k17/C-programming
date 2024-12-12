#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 171267;
    int count = 0;
    int reverse = 0;

    cout << "Digits in the number: ";
    while (num > 0)
    {
        int digit = num % 10; // last digit extract karega
        cout << digit << " ";      //last dgit print hoga
        count = count + 1;
        reverse = reverse * 10 + digit;

        num = num / 10;
    }
    cout<<endl;
    cout << "Total digit: " << count<<endl;
    cout << "Reverse number: " << reverse;
    return 0;
}