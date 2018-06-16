#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Input The Number";
    cin>>num;
    int reverse = 0;

    while (num != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + num%10;
            num = num/10;
    }
    cout<<endl<<"Number after reversing is "<<reverse;
    return 0;
}