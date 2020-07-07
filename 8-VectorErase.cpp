#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// 8. Vector Erase
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i<n; i++) {
		cin >> arr[i];
	}
	int x, a, b;
	cin >> x >> a >> b;
	
	arr.erase(arr.begin() + x - 1);
	arr.erase(arr.begin() + a - 1, arr.begin() + b - 1);
	n = n - 1 - (b - a);
	cout << n << endl;
	for (int i = 0; i<n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}