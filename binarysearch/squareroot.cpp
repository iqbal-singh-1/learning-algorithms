#include <iostream>
#include <math.h>
using namespace std;
double squareroot(int x , int y)
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
    // precision (upto 5 digits cause that's the capacity of double)
    double a1 = a;
    for(int i = 0 ; i<y ; i++)
    {
        for(int j = 1 ; j<10 ; j++)
        {
            a1+=pow(10,-(i+1));
            if(a1*a1>x)
            {
                break;
            }
        }
    }
    return a1;
}
int main()
{
    int n = 6;
    double a=squareroot(n,6);
    cout <<"squareroot is " <<a;
}
