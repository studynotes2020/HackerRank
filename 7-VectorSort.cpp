#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// 7. Vector Sort
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i<n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	for (int i = 0; i<n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}