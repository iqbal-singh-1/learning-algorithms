# Recursion 
- Recursion is defined as the process when a function calls itself directly or indirectly through another function is called Recursion.
## Parts of a recursive function
- It is made up of 3 main building blocks:-
1. <b>Base Case</b>
- It is the most important building block of recursion. 
- It is the condition that decides whether the recursion will continue forward or not.
- If a function does not have a base case , it will run infinitely and segmentation fault will occur.
- It is necessary for Base case to have a return statement so that function can terminate smoothly.
2. <b>Recursive Relation</b>
- It is the 2nd most important thing a recursive function must have.
- It can be assumed as a mathematical formula that decides how the function call must be made.
- Basically , arguments passed in a recursive function call are modified based on recursive formula/relation that can be derived mathematically.
3. <b>Processing</b>
- This part is optional.
- It descibes how are we going to process our data obtained from recursive calls.
- It includes printing, adding , multiplicating or any other processings to be performed on our data.
Let's take a look at following examples
- "Write a program that prints numbers from 1 to n"
```C++
#include <iostream>
using namespace std;

void count(int n){


    //Base case 
    if(n==0){   
        return ;
    }

    //Recursive call
    count(n-1); 

    //Processing
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    count(n);
}
```
OUTPUT
```C++
8

1
2
3
4
5
6
7
8
```
- So , our function basically make recursive calls "count(n-1)". With each recursive call , the function takes the value of n decremented by 1.
- After n calls ," 0 " is passed to "count()". At this point, we want function calls to stop. So , we put base case when n is 0 and we return.
- count(0) has been terminated.
- Now , our program comes back to count(1). Since n!=0 , base case was skipped and we got to count(n-1) which turns out to be count(0). Since this count(0) is terminated by base case , our count(1) moves to processing part and prints 1.
- Since count(1) has been terminated, we come back to n=2.
- Now count(n-1), i.e, count(1) or recursive call made by count(2) is completed , program heads to processing part and 2 is printed.
- Similarly, count(3),count(4)...count(n) are executed and program terminates.
- This type of recursion in which processing part comes after the recursive relation is called <i><b>Head Recursion</b></i>.
## Types of recursion
### Head Recursion
- Recursion in which processing part comes after the recursive relation is called <i><b>Head Recursion</b></i>.
- In this type, all recursive calls are made before any data could be processed. As in the example above, all the calls were made first and then one by one data was printed.
- This type of recursion is trickier than tail recursion since user might get unexpected results if the recursion wasn't observed properly.
- It is usually avoided and most people prefer tail recursion.
### Tail Recursion
- In this, recursive relation comes at end of the function.
- All the processing is done before moving to next function call.
- Let's understand better by taking an example. Consider the same code used in example of head recursion.
```C++
#include <iostream>
using namespace std;

void count(int n){


    //Base case 
    if(n==0){   
        return ;
    }

    //Recursive call
    count(n-1); 

    //Processing
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    count(n);
}
```
- Let's play. We do nothing, just write it's recursive relation after processing part and see what happens to our output.
```C++
#include <iostream>
using namespace std;

void count(int n){


    //Base case 
    if(n==0){   
        return ;
    }

    //Processing
    cout<<n<<endl;
    
    //Recursive call
    count(n-1); 
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    count(n);
}
``` 
OUTPUT
```C++
8

8
7
6
5
4
3
2
1
```
- As it can be seen, whole output is altered and order of output is reversed.
- So what happened is that we printed the value of "n" when it was 8. Then n-1 , i.e. , 7 was called and printed. Similarly , 6,5...1 were printed. When 0 was called ,it satisfied base case and terminated itself.
- Since count(0) was terminated and it was the last statement in count(1), count(1) was also terminated.
- Also, count(1) was last statement in count(2). Since count(1) was terminated, count(2) was also terminated.
- Similarly count(3),count(4)....count(n) all were terminated and program was completed without any errors.
- To learn more about other types of recursions like tree recursion ,nested etc. `https://www.geeksforgeeks.org/types-of-recursions/`.
## Problems with recursion
- Recursion is a very powerful but is not used that much because of the problem it poses with space complexity.
- In the example above, we can easily use a for loop or while loop and space complexity would be O(1). However when we used recursion, "n" function calls were made meaning "n" new integers were made(when pass by value, new variable is made without effecting the orignal variable) and hence space complexity became O(n) which is very high and is not optimized.
- That's why, we rarely use it.