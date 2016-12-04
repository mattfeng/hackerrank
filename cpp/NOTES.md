# C++ Notes

## Useful Libraries

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
```

## Some More Libraries

```cpp
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
```

## C++ Data Types

<table>
	<tr>
		<th>Data Type</th>
		<th>Format Specifier</th>
		<th>Most Common Bit Width</th>
	</tr>

	<tr>
		<td>int</td>
		<td>"%d"</td>
		<td>32 bit integer</td>
	</tr>

	<tr>
		<td>long / long int</td>
		<td>"%ld"</td>
		<td>32 bit integer (same as int for modern systems)</td>
	</tr>

	<tr>
		<td>long long / long long int</td>
		<td>"%lld"</td>
		<td>64 bit integer</td>
	</tr>

	<tr>
		<td>char</td>
		<td>"%c"</td>
		<td>character type</td>
	</tr>

	<tr>
		<td>float</td>
		<td>"%f"</td>
		<td>32 bit real value</td>
	</tr>

	<tr>
		<td>double</td>
		<td>"%lf"</td>
		<td>64 bit real value</td>
	</tr>
</table>

## `for` Loops

```cpp
for ( expression_1 ; expression_2 ; expression_3 ) {
	... statements ...
}
```

* expression_1: used for initializing variables which are generally used for controlling the terminating flag for the loop

* expression_2: used to check for the terminating condition. if this evaluates to false, then the loop is terminated -- evaluated **before** the loop starts

* expression_3: used to update the flags and variables -- evaluated **after** the loop ends

## Pointers

> A pointer in C is a way to share a memory address among different context (primarily functions). They are primarily used whenever a functino needs to modify the content of a variable, of which it doesn't have ownership.

```cpp
int var;
int *p = &var;

// dereference -- set the value at address 'p' to 10 (i.e. set var to 10)
*p = 10;

// can be thought of in two ways:
// int *p (the value at address p is an integer) -- "dereferenced"
// int* p (p itself is an address, a pointer to an integer) -- "pure pointer"
```

## Arrays

```cpp
string array[3] = {"a", "b", "c"};
int int_arr[3] = new int[3]; // allocates an array of size 3 on the HEAP
```


## Classes
```cpp
class Person {
// default access specifier is `private`	
	string name;
	int age;

public:
	virtual void getdata(); // determine which function to call during runtime
	virtual void putdata();
};

class Professor: public Person {

};

class Student: public Person {

};

void Person::getdata() {
	cin >> name >> age;
}

... snip ...

```

## Virtual Functions

`virtual` keyword gives **late binding**, while without the keyword gives **early binding**.

## Strings

```cpp
string s = "hello this is a string from c plus plus.";
/* 
 * Substrings:

	s.substr(6); 	OR
	string(s.begin() + 6, s.end());
*/
```

## Standard Library

### `vector`

```cpp
#include <vector>
#include <algorithm>

vector<int> v; // create an empty vector of `int`

int size = v.size(); // size of vector

v.push_back(x); // push integer into a vector, at the end

v.pop_back(x); // pop the LAST element from the vector

sort(v.begin(), v.end()); // sorts all elements in the vector

v.at(index); // retrieve value at `index`

```

## `StringStream`

```cpp
#include <sstream>
```

