#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout<<"Enter String Length";
    cin>>n;
    char arr[n];
    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    int l = 0,r = n-1;
    bool flag = true;
    while(flag and l<=r)
    {
        if (arr[l] == arr[r] and l <= r) {
            l++;
            r--;
            flag = true;
        }
        else
        {
            flag = false;
            cout << "String Is Not Palindrome";
        }
    }

    if(flag)
    {
        cout << "String Is Palindrome";
    }
    return 0;
}