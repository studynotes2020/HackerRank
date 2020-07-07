#include <vector>
#include <iostream>

using namespace std;

// 2. Plus Minus
int main() {
	int n = 6;
	//cin >> n;
	vector<int> arr(n);
	arr = { -4,3,-9,0,4,1 };
	// for (int arr_i = 0; arr_i < n; arr_i++) {
	// 	cin >> arr[arr_i];
	// }
	float pos=0, neg=0, zero=0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) pos += 1;
		else if (arr[i] < 0) neg += 1;
		else zero += 1;
	}

	cout << fixed << pos / n << endl;
	cout << fixed << neg / n << endl;
	cout << fixed << zero / n << endl;

	return 0;
}