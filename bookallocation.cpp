//Allocate n pages of books to m no of students such that maximum no of pages assigned to a student is minimum
#include <iostream>
#include <vector>
using namespace std;
bool ispossiblesol(vector<int> arr,int size,int mid,int n)
{
    int pagesum=0;int c=1;
    for(int i=0; i<size; i++)
    {
        if(pagesum+arr[i]<=mid)
        {
            pagesum+=arr[i];
        }
        else
        {
            pagesum=arr[i];
            c++;
            if(c>n || arr[i]>mid)
            {
                return 0;
            }
        }
    }
    return 1;
}
int bookallocate(vector<int> arr,int size,int m)
{
    int sum=0;
    for(int i = 0; i<size ; i++)
    {
        sum+=arr[i];
    }
    int s=0,e=sum,mid=(s+e)/2,ans=-1;
    while(s<=e)
    {
        if(ispossiblesol(arr,size,mid,m))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main()
{
    vector<int> arr={10,20,30,40};
    int ans=bookallocate(arr,4,2);
    cout<<ans;
}
