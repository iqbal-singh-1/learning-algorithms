#include <bits/stdc++.h>
using namespace std;

int calPivotIndex(int *arr, int start, int end){

    int pivot = arr[start];
    int count = 0;
    for(int i = start+1; i<=end ; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = count + start ; 
    swap(arr[start],arr[pivotIndex]);

    return pivotIndex;
}

void partition(int *arr, int start, int end , int pivotIndex){
    
    int i = start , j = end ; 
    int pivot = arr[pivotIndex];
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]>pivot && arr[j]<=pivot && j!=pivotIndex ){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[j]>pivot){
            j--;
        }
        else{
            i++;
        }
    }
}
void quickSort(int *arr, int start, int end){
    
    if(start>=end){
        return;
    }

    //placing the pivot at its correct index and storing pivotindex

    int pivotIndex = calPivotIndex(arr,start,end);

    //partitioning the array based on its pivot index

    partition(arr,start,end,pivotIndex);

    //sorting left part

    quickSort(arr,start,pivotIndex-1);

    //sorting right part

    quickSort(arr,pivotIndex+1,end);
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
    quickSort(arr,0,x-1);
    cout<<"Sorted array is"<<endl;
    for(int i = 0; i<x ; i++){
        cout<<(arr[i])<<" ";
    }
}