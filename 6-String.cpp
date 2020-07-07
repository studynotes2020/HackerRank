#include <vector>
#include <iostream>

using namespace std;

// 6. String
int main() {
	// Complete the program
	string a, b;
	cin >> a >> b;
	cout << a.size() << " " << b.size() << endl;
	cout << a + b << endl;

	char temp;
	temp = a[0];
	a[0] = b[0];
	b[0] = temp;
	cout << a << " " << b << endl;

	return 0;
}