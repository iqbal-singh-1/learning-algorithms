//Allocate n pages of books to m no of students such that maximum no of pages assigned to a student is minimum
#include <iostream>
#include <vector>
using namespace std;
bool ispossiblesol(vector<int> arr,int size,int mid,int n) 
{
    //declaring ispossiblesol function to check if this much pages can be allocated or not
    
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

    //declaring start , endpoint and answer variables

    int s=0,e=sum,mid=(s+e)/2,ans=-1;
    
    //minimizing searchspace using logic of binary search
    
    while(s<=e)
    {
        if(ispossiblesol(arr,size,mid,m))
        {
            //if solution is possible , store mid value in ans and update end = mid - 1

            ans=mid;
            e=mid-1;
        }
        else
        {
            //if not possible , move start to mid + 1
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main()
{
    //sample example
    vector<int> arr={10,20,30,40};
    int ans=bookallocate(arr,4,2);
    cout<<ans;
}
