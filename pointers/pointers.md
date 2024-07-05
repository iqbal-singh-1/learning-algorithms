# Pointers in C++
Pointers are the variables that points to the address of another variable/pointer in C++. Instead of storing the value , they store the memory address.
## What is address?
- Memory address is nothing but the address at which a variable is stored in memory.
- It is usually stored in hexadecimal format in memory.
- Every variable has an address in memory.
- To find address of a variable , we use address of operator , " & ".
- For example , supppose we want to find the address of a variable num with value 5. The code and output for the same will be
```C++
int num = 5;
cout << &num <<endl;
```
OUTPUT
```C++
0x5ffe9c
```
## How to declare pointers??
- Declaration of pointers is very easy.
- "DataType * pname =  value" is the method of initialization of pointers where pname is name of the pointer.
- Ex:-
```C++
int * ptr = &num ; 
```
- Similarly , char pointers , float pointers , etc. can be declared.
## Dereferencing a pointer
- Dereferencing means accessing the value of variables whose address is pointed by the pointer. 
- To dereference a pointer ,  the syntax is "* pname".
- Ex:- 
```C++
cout << *ptr <<endl;
```
Output
```C++
5
```
- *Note*:- Size of a pointer is 8 bytes no matter what datatype it is.
## Pointer arthemetics
### Incrementing  a pointer
- When we increment a pointer , it is not incremented the way variables do.
- For example , ptr++ does not mean ptr + 1 in case of pointers. It means move to next char or int etc. in series in which series we have declared our pointer.
- For ex:- Incrementing a int pointer will move the address by 4 bytes because int occupies 4 bytes.
*Note*:- Increment will change the position of a pointer and it will not longer point to same variable.
### Decrementing a pointer
- Similar to increment of a pointer , decrement of a pointer variable will decrement the address it was pointing to.
- Value will be decrement by number of bytes used by variable to store a value , i.e. , int pointer will be decrement by 4.
*Note*:- Addition and multiplication of pointers is not possible.It is useless cause why would anyone multiply two addresses.
## Type of pointers
### 1. Null pointer
- A pointer which is intialized with a zero/null value is called null pointer.
- To intialize a null pointer , "<b>datatype </b> *ptr = 0;"
- They are usually intialized to store address in later stage rather than with intialization.
- Address of null pointer is zero as it does not point to any address.(i.e. , it can't be dereferenced.)
- Dereferencing them cause segmentation errors.
```C++
int * p=0;
cout<<p<<endl;
```
OUTPUT
```C++
0
```
### 2. Wild pointers
- Pointers which have been intialized but not assigned any value are called wild pointers.
- It is not wise to declare pointers without any value as they can cause segmentation errors on dereferencing.
```C++
int * p;
cout<<p<<endl;
```
OUTPUT
```C++
Segmentation fault
```
### 3. Void pointers
- These type of pointers can store value of any datatype.
- However,they cannot be dereferenced directly must be typecasted before dereferencing.
- It is also known as generic pointer.
- It is intialized by using "void" keyword infront of pointer name.
- Ex:- void *ptr= & num;
### 4. Dangling pointers
- The pointers which points to the address which earlier existed but now is either deleted or deallocated is called Dangling pointer.
- Such type of pointers needs to be freed from the address and assigned some other value so as no segmentation errors are produced.
- Allocating memory is done using malloc, calloc or realloc and freeing of memonry is done using free() function.
### Other types
- Some more types of pointers include complex pointers, far pointers, near pointers and so on.