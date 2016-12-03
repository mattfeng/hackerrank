#include <iostream>
#include <cstdio>
using namespace std;

/* specifications:

Input Format -
	Input consists of the following space-separated
	values: int, long, long long,
	char, float, and double, respectively.

Output Format -
	Print each element on a new line in the same order
	it was received as input. Note that the floating point
	value should be correct up to 3 decimal places
	and the double to 9 decimal places.

*/

int main() {

	int int_32bit;
	long long_32bit;
	long long long_64bit;
	char char_8bit;
	float float_32bit;
	double double_64bit;

	scanf("%d %ld %lld %c %f %lf", &int_32bit, &long_32bit, &long_64bit, 
		  &char_8bit, &float_32bit, &double_64bit);

	printf("%d\n%ld\n%lld\n%c\n%f\n%lf\n", int_32bit, long_32bit, long_64bit, 
		  char_8bit, float_32bit, double_64bit);

    return 0;
}
