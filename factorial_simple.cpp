#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter Number";
    int num;
    cin>>num;
    int temp = 1;
    if(num == 0)
    {
        cout<<"1";
    }
    else
    {

        for (int i = 0; i <= num-1; i++)
            {
                temp = (i * temp) + temp;

            }
        cout<<temp<<endl;
    }
    return 0;
}