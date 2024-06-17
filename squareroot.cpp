#include <iostream>
using namespace std;
int squareroot(int x)
{
    int s = 0,e=x;
    long long int mid=(s+e)/2,a=0;
    while(s<=e)
    {
        if((mid*mid)==x)
        {
            return mid;
        }
        else if((mid*mid)<x)
        {
            a=mid;
            s=mid+1;
        }
        else if((mid*mid)>x)
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return a;
}
int main()
{
    int n = 100000000;
    int a=squareroot(n);
    cout <<"squareroot is " <<a;
}
