#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int num;
    cout<<"Input Number -- >";
    cin>>num;
    if(num <= 2)
    {
        cout<<a<<" ";
        cout<<b<<" ";
    }
    else
    {
        cout << a << " ";
        cout << b << " ";
        int temp;
        while(num-2 > 0)
        {
            temp = a + b;
            cout<<temp<<" ";
            a = b;
            b = temp;
            num--;


        }
    }
}
