#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//17. Variable Size Array
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, q, k, val, a, b;
	cin >> n >> q;
	vector<vector<int>> vec;
	for (int i = 0; i < n; i++) {
		cin >> k;
		vector<int> vec2;
		for (int j = 0; j < k; j++) {
			cin >> val;
			vec2.push_back(val);
		}
		vec.push_back(vec2);
	}
	for (int l = 0; l < q; l++) {
		cin >> a >> b;
		cout << vec[a][b] << endl;
	}
	return 0;
}

