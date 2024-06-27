# *Binary Search*
## What is binary search??
- Binary search is an algorithm used for searching an element in a sorted array. The basic concept is to minimize search-space in such a way that we traverse through minimum number of elements to check whether an element exist in the array or not.
## Why do we need it??
- Well! You all might be wondering why to use *binary search* when we can simply traverse through all elements until desired element is reached. That approach is termed as *linear search*. You are right like who is gonna know what we did in code. The thing is that linear search is more time consuming than binary search or in technical terms "Time complexity of *linear search* is higher comapred to *binary search*" as it takes more time than *binary search* to find an element.
### Time complexity
- Worst case time complexity is O(log n) where n is size of array.
## Theory
- Binary search use space-search minimizing to find the element.
- Instead of searching whole array , we check middle element of the array.
- If middle element is answer , we stop our search right there and break out of the loop.
- if not so , we compare the middle element with the one  we are searching for. If element is less than mid , it means we will not be able to find it at larger index than this mid's index(array is sorted). So , we move end to mid - 1 index.
- Similarly , if the element is greater , we shift start to mid + 1.
- This cycle continues until the element is reached or start<end.
- If start>=end , it means element is not in array.
## Approach
The approach is very simple
1. We intialize 3 variables as
``` C++
int start = 0 ,end =arr.size()-1 , mid = (start+end)/2 , b = 1;
```
<u>Note</u>:- If an error occur indicating that mid is not in range of integers , use the formula ```mid = start+((end-start)/2)```.

2. After intializing is done , open a while loop that runs till start<end 
```C++
while(start<end)
{

}
```
3. Conditioning phase comes now. Let the element we wanna search be "key"
- If middle element == key ,we break out of loop as the work is done.
```C++
 if(arr[mid]==key)                                   
{
    b=0;
    cout<<"Index is "<<mid;                         
    break;
}
```
- If element is larger , move start forward to mid + 1
```C++
else if(arr[mid]<key)
{
    start=mid+1;                                    
}
```
- If element is smaller , move end backwards to mid - 1
```C++
else if(arr[mid]>key)
{
    end=mid-1;
}
```
4. Since start or end has changed after each iteration, we upadate mid
```C++
mid = start+((end-start)/2);
```
5. If element is not found , print "Element not found".
```C++
if(b)
{
    cout<<"Element not found!!!";
}
```
# Full code is here 
`https://github.com/iqbal-singh-1/learning-algorithms/blob/main/binarysearch/binarysearch.cpp`
