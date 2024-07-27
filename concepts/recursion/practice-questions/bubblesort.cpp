#include <bits/stdc++.h>
using namespace std;

//Bubble sort usong recursion

void bubbleSort(int *arr, int size){
    
    //base case 1

    if(size==0||size==1){
        return;
    }

    //processing the array to deposit the largest element at the end of the array

    int swapped = 0;
    for(int i = 0; i<size-1 ; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            swapped = 1;
        }
    }

    //base case 2

    if(!swapped){
        return ;
    }

    //recursive calls

    bubbleSort(arr,size-1);
    
}

int main(){
    int x;
    cout<<"Enter number of elements"<<endl;
    cin>>x;
    cout<<"Enter elements"<<endl;
    int * arr = new int[x];
    for(int i = 0; i<x ; i++){
        cin>>(arr[i]);
    }
    bubbleSort(arr,x);
    cout<<"Sorted array is"<<endl;
    for(int i = 0; i<x ; i++){
        cout<<(arr[i])<<" ";
    }
}