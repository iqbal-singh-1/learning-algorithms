# Reference Variable
- Reference variable is defined as a variable which has same memory address as the other variable or in clear words , one memory address has more than one names.
- For ex:- Let there be a int variable "i" with some value say , 7 . It's declaration will be "int i = 7;".
- Now suppose we want to call it by another name ,say "j" . Is there a way to do so? Yes, there is , by declaring a reference variable.
## Declaration 
- It is declared by using following syntax:-
```C++
int i = 7;
int &j = i; //Reference variable j
```
- Syntax:- datatype & varName = origVarName;
- Now, if we make any changes in j , i will also change accordingly and vice-versa.
## Reference variable as function input
- Till now , we have only learnt about how to pass by reference using pointers. Now , with this concept , we can pass by using reference variable.
- If our function uses reference variable , it can access orignal variable and hence any changes made to it will change the orignal variable's value also. For more info about passing reference variable in function , check out functions.md.
Note:- Never return reference variable from a function because it is very risky approach/practice as it is possible that th scope of reference variable is only available in function and returning that variable will cause segmentation errors.

# Types of memory 
- Whenever a program is run , it runs with a particular memory assigned to it. However , if our program has limited memory and during runtime it somehow demands more meomry , our program will crash and may not be able to run .
- For example , if we are forming an array arr[n] where n is user input , the chances are that our program may crash because it have no idea of memory occupied by the array at compile time.
- To handle this problem in a better way , let's learn about static and dynamic memory.
## Stack memory
- Known as stack memory , this memory is used for declaring variables whose memory is known to the at compile time.
- All the variables and pointers that we create are mostly created in static memory.
- Example of stack memory :-
```C++
int n = 5;
int *a = &n;
char b = "c";
float d = 0;
```
- This type of allocation is known as *STATIC ALLOCATION*.
- Creating an array with constant space is also static memory(i.e,int arr[5]; ).
- Static memory is usually small in size and suitable for creation of constant data-structure. 
- Every program comes with certain stack memory based on what type of structures are defined in our file 
- However , if we create structures like arrays , vectors , queues etc. ,without knowing their exact size , we cannot use stack memory because our program will bring certain memory but will never know how much is actually needed.
- Due to limited size of stack memory , it will produce an error if our program exceeds memory limit.
- To solve this issue , we will use heap memory.
## Heap memory
- Heap memory is the memory which is very large in size and is used for creating dynamic structures like array , queues , deques ,etc.
- To access heap memory , we use a keyword "new".
- Now , it is not possible to directly name the variable of heap memory directly. "new dataype" returns the address of the memory that has been allocated to our program from heap. So , the big question arises how can we name it??
- The simple solution is declaring a pointer that stores the address of returned by heap. Then we use the concepts of pointer to do the dereferencing , increment and so on.
- Syntax :- "dataype * vName = new datatype;
- Ex:- 
```C++
int * a = new int;
```
- Note that the memory allocation in above example is 8 + 4 bytes, 8 bytes in stack memory and 4 bytes in heap memory.
- Allocating memory using heap is known as *DYNAMIC ALLOCATION*.
- To declare arrays of dynamic size , use "new datatype[size]".
- Ex:- 
```C++
int n;
cin >> n;
int * arr = new int[n];
```
- Note:- If the variable declared in static memory goes outside a block , it is automatically deleted. However , if memory is allocated in heap , it has to be deleted manually.
- To delete a variable in heap , use "delete vName; ".
- To delete a 1-d array , use "delete []vName; ".