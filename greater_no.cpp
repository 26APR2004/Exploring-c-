// C++ Program to Find Largest Among
// Three Numbers Using if-else
// Statement
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
	int a, b, c;
	cout << "Enter the three numbers a, b & c" << endl;
	cin >> a >> b >> c;

	if (a >= b) {
		// If 'a' is greater than or equal to 'b', compare
		// 'a' with 'c'
		if (a >= c) {
			// If 'a' is also greater than or equal to 'c',
			// it is the largest number
			cout << "The Largest Among Three Numbers is : "
				<< a << endl;
		}
		else {
			// If 'a' is not greater than or equal to 'c',
			// 'c' must be the largest number
			cout << "The Largest Among Three Numbers is : "
				<< c << endl;
		}
	}
	else {
		// If 'b' is greater than 'a', compare 'b' with 'c'
		if (b >= c) {
			// If 'b' is also greater than or equal to 'c',
			// it is the largest number
			cout << "The Largest Among Three Numbers is : "
				<< b << endl;
		}
		else {
			// If 'b' is not greater than or equal to 'c',
			// 'c' must be the largest number
			cout << "The Largest Among Three Numbers is : "
				<< c << endl;
		}
	}
	return 0;
}
