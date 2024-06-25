#include <iostream>
#include <vector>
using namespace std;
void swap(int *a, int *b) //swap function
{
    int temp = *a;
    *b = *a;
    *a = temp;
}
void printarr(vector<int>& arr,int size) //printarray function
{
    for( int  i= 0; i<size ; i++)
    {
        cout <<arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int x;
    cout << "enter no of elements"<<endl; //asking user how many elements they want to enter
    cin >> x;
    vector<int> arr;
    int a;
    cout << "enter elements"<<endl;
    for(int i = 0 ; i<x ; i++) //user input
    {
        cin >> a;
        arr.push_back(a);
    }
    for(int i = 1 ; i<arr.size()-1; i++)
    {
        int s=1;
        for(int j  = 0 ; j<arr.size()-i ; j++)
        {
            //swapping if the element is smaller than the next element in array
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                s=0;
            }
        }
        if(s==1) //if no swap is done then array is sorted , so break the loop
        {
            break;
        }
    }
    printarr(arr,arr.size()); //printing the array
}