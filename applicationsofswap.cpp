#include <iostream>
using namespace std;
void swap(int *a, int *b);
void printarr(int arr[],int size);
void inputarr(int arr[],int size);
void reversearr(int arr[],int size);
void altswaparr(int arr[],int size);
int main()
{
    int x;
    cout << "no of elements to be entered in array" << a;
    cin  >> x;
    int array[100];
    inputarr(array,x);
    reversearr(array,x);
    printarr(array,x);
    altswaparr(array,x);
    printarr(array,x);
}
void swap(int *a, int *b)
{
    int temp = *a;
    *b = *a;
    *a = temp;
}
void printarr(int arr[],int size)
{
    for( int  i= 0; i<size ; i++)
    {
        cout <<arr[i] << " ";
    }
    cout<<endl;
}
void inputarr(int arr[],int size)
{
    int a;
    for( int i = 0 ; i<size ; i++)
    {
        cin >>a ;
        arr[i]=a;
    }
}

// reverse an array
void reversearr(int arr[],int size)
{
    int start=0,end=size-1;
    while(start<end)
    {
        swap(*(arr+start),*(arr+end));
        start++;
        end--;
    }
}


//swap alternate elements

void altswaparr(int arr[],int size)
{
    int p2=1;
    while(p2<size)
    {
        swap(arr[p2-1],arr[p2]);
        p2+=2;
    }
}