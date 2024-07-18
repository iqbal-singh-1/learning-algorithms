# How to point an array using pointer??
- First we need to have a basic idea about how the elements are stored in an array.
- So in an array , elements are stored in contigious memeory locations , that is, the element at 0th index is stored just before 1th element or in other words , address of next element in array is just next to address of current element.
- If our array is named "arr" , arr points to address of 0th element.
- arr+1 will mean address of 1th element and arr+2 will mean address of 2th element and so on.
- So the formula for addresses of array is arr+i where i tells the position of array.
- In other words , we can declare a pointer to arr+0 or arr to access the first element in array and then increment to access the following elements.
- We know the basic way to access the array (arr[i]) and the pointer way(*(arr+i)).
- Putting all the clues together , a formula can be generated :-
arr[i]=*(arr+i)
- *Fun fact*:-i[arr] also works same as arr[i] in C++ and C.
- Here is a sample example to understand better.
```C++
#include <iostream>
using namespace std;
int main()
{
    int arr[5]= {1,2,3,4,5};
    int *p = arr;
    cout<<"Elements accessed using arr[i]"<<endl;
    for(int i = 0 ; i<5 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nElements accessed using i[arr]"<<endl;
    for(int i = 0 ; i<5 ; i++)
    {
        cout<<i[arr]<<" ";
    }
    cout<<"\nElements accessed using *(arr+i)"<<endl;
    for(int i = 0 ; i<5 ; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<"\nElements accessed using *p"<<endl;
    for(int i = 0 ; i<5 ; i++)
    {
        cout<<*p<<" ";
        p++;
    }
}
```
OUTPUT
```C++
Elements accessed using arr[i]
1 2 3 4 5
Elements accessed using i[arr]
1 2 3 4 5
Elements accessed using *(arr+i)
1 2 3 4 5
Elements accessed using *p
1 2 3 4 5
```
# Pointer to character array
- Character arrays behave differently than integers arrays.
- Suppose ch[5]="abcd" and arr[5]={1,2,3,4,5}, then printing "arr" prints the address of arr[0] and printing "ch" gives us the whole array that is , "abcd" in output. Reason is that cout is implemented differently for strings and characters .Strings or char arrays are printed until a null character is reached.
- If we do ch+1 , we will get "bcd" in output where as arr+1 will give us address arr[1].

# Pointer to a function
- We can pass a pointer in the function rather than passing a value.
- The difference it makes is that when we pass a pointer and access the variable value, we can actually makes changes to orignal value. However , if do not pass as pointer , value of the variable is updated only till it is in function and when it comes out of function , value resets to what it was before entering the function.
- We cannot update a pointer in functions. However , value can be updated that is pointed by pointer.
- In fact , when we pass our array into function , it is automatically passed as a pointer. It's benifit is that we can actually pass a sub array instead of passing our whole array to function.
- For more info on pointer , visit `w3schools.com`.