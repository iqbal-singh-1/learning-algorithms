#include <bits/stdc++.h>
using namespace std;

//merge
void merge(int *arr, int start, int end){

    int mid = start+(end-start)/2;

    //Create 2 subarrays from start to mid and 2nd from mid+1 to end

    int len1 = mid-start+1;
    int len2 = end-mid;

    int* first = new int[len1];
    int* second = new int[len2];

    int k = start;

    for(int i = 0; i<(len1+len2); i++){
        if(i<len1){
            first[i]=arr[k++];
        }
        else{
            second[i-len1]=arr[k++];
        }
    }
    k=start;

    //merging the subArrays 

    int index1 = 0, index2 = 0;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[k++]=first[index1++];
        }
        else{
            arr[k++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[k++]=first[index1++];
    }
    while(index2<len2){
        arr[k++]=second[index2++];
    }
    delete[] first;
    delete[] second;
}

//sort

void mergeSort(int*arr , int start, int end){

    if(start>=end){
        return;
    }

    int mid=start+((end-start)/2);

    //first half
    mergeSort(arr,start,mid);

    //second half
    mergeSort(arr,mid+1,end);

    merge(arr,start,end);
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
    mergeSort(arr,0,x-1);
    cout<<"Sorted array is"<<endl;
    for(int i = 0; i<x ; i++){
        cout<<(arr[i])<<" ";
    }
}