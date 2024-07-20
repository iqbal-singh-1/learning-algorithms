# Macros
- Macro is a piece of code that is replaced by value of macro in a program.
- It is defined using "#define".
- Ex:- 
```C++
#define PI = 3.14;
```
This statement creates a macro named "PI" whose value is 3.14. Now if "PI" is spotted anywhere in our code , it will be automatically replaced by 3.14.
## Advantages
- It enhances readability of our code.
- It's better because it is not a variable and hence will not occupy any storage.
- Value of macro cannot be changed if defined. Hence , it can be useful for creating constant items in code.
## Disadvantages
- Macros do not have type safety , so they can cause unnecessary errors in programs if not properly handled.
- Excess macros can make code look untidy and will put challenges in readibilty.
- In case of errors , it becomes difficult to identify the error if it is in a macro.
## Types of Macros
1. *<b>Object-like macros</b>*
- These are the macros which are used to define costants or short code snippets which can be reused.
- These macros do not take any arguments.
- Ex:- 
```C++
#include <iostream> 
using namespace std; 
  
// Defining the value of PI 
#define PI 3.14159 
  
int main() 
{ 
    double r = 4.0; 
  
    //area of the circle 
    double area = PI * r * r; 
  
    cout << "Area of circle with radius " << r 
         << " is " << area; 
  
    return 0; 
}
```
OUTPUT
```C++
Area of circle with radius 4 is 50.2654
```
2. *<b>Function like macros</b>*
- These macros are the macros which can act like a function in our code.
- It can take arguments as well.
- Ex:- Let's create a macro to add 2 numbers.
```C++
#include <iostream> 
using namespace std; 
  
#define add(x,y) cout<< (x + y)
  
int main() 
{ 
    add(4,8);
}
```
OUTPUT
```C++
12
```
3. *<b>Multi-line macros</b>*
- Macros whose definition needs more than one line are called multiline macros.
- Backslash( \ ) is used to show that macro is still continued after each line.
- Ex:-
```C++

#include <iostream> 
using namespace std;
#define PRINT_COUNT(x)					                    \ 
	for (int i = 1; i < =x; i++) {					        \  
		cout << i <<endl;						            \ 
	} 

int main() 
{ 
 
	PRINT_COUNT(4); 
	return 0; 
}
```
OUTPUT
```C++
1
2
3
4
```
4. *<b>Chained macros</b>*
- If a macro contains another macro inside it's definition , it is called as chained macro.
- Ex:-
```C++
#include <iostream> 
using namespace std; 
  
// Defining the value of PI 
#define PI 3.14159 
#define ab PI
int main() 
{ 
    double r = 4.0; 
  
    //area of the circle 
    double area = ab * r * r; 
  
    cout << "Area of circle with radius " << r << " is " << area<<endl; 
    cout <<"value of ab is " << ab <<endl;
    return 0; 
}
```
OUTPUT
```C++
Area of circle with radius 4 is 50.2654
value of ab is 3.14159
```
For more info check `https://www.geeksforgeeks.org/cpp-macros/`