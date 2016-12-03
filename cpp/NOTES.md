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
		<td>long</td>
		<td>"%ld"</td>
		<td>32 bit integer (same as int for modern systems)</td>
	</tr>

	<tr>
		<td>long long</td>
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

## Virtual Functions

`virtual` keyword gives **late binding**, while without the keyword gives **early binding**.