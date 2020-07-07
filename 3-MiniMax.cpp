#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

// 3. Mini-Max Sum
int main() {
	vector<int> arr(5);
	for (int arr_i = 0; arr_i < 5; arr_i++) {
		cin >> arr[arr_i];
	}
	uint32_t max = 0, min = UINT_MAX, temp = 0;
	uint32_t sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	for (int i = 0; i < 5; i++) {
		temp = sum - arr[i];
		if (temp > max) max = temp;
		if (temp < min) min = temp;
	}
	cout << min << " " << max << endl;
	return 0;
}