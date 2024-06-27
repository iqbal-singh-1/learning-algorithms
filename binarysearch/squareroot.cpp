#include <iostream>
#include <math.h>
using namespace std;
int squareroot(int x )
{
    int s = 0,e=x;

    // intializing variables mid and a

    long long int mid=(s+e)/2,a=0;
    
    //minimizing search space using binary search
    
    while(s<=e)
    {
        if((mid*mid)==x) //if mid*mid == number , return mid as answer
        {
            return mid;
        }
        else if((mid*mid)<x) //if mid*mid <number , it store the mid in "a" and move start position to mid +1
        {
            a=mid;
            s=mid+1;
        }
        else if((mid*mid)>x) //else move end to mid - 1
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return a;
}
int main()
{
    int n = 6;
    int a=squareroot(n);
    cout <<"squareroot is " <<a;
}
