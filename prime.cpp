#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for(int i = 1;;i++)
    {
        int b=(i*i)-((i-1)*(i-1));
        if (b<=a)
        {
            if(b==a)
            {
                cout << "Yes, it is a prime number.";
                break;
            }
        }
        else
        {
            cout << "not a prime number.";
            break;
        }
    }
}