#include <iostream>
using namespace std;
void swap(int * ,int *);
void shift(int *,int);
int main()
{
    int nums[5];
    for(int i=0 ; i<5; i++)
    {
        cin >> nums[i];
    }
    int *a = &nums[0];
    shift(a,5);
    for(int i = 0 ; i<5 ; i++)
    {
        cout<< nums[i] << " ";
    }
}
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void shift(int *arr,int size)
{
    for(int j = 0 ; j<(size-1) ; j++)
    {
        if(*(arr+j)>*(arr+j+1))
        {
            swap(*(arr+j),*(arr + j+1));
        }
    }
    for(int j = 0 ; j<(size-1) ; j++)
    {
        if(*(arr+j)>*(arr+j+1))
        {
            shift(arr,size);
        }
    }
}