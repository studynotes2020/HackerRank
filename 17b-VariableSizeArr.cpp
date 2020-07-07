#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//17bs. Variable Size Array
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, val, q;
	vector<int> vec;
	vector<int>::iterator low;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> val;
		vec.push_back(val);
	}

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> q;
		low = lower_bound(vec.begin(), vec.end(), q);
		if(vec[low-vec.begin()]==q)
			cout << "Yes " << (low - vec.begin())+1 << endl;
		else 
			cout << "No " << (low - vec.begin()) + 1 << endl;
	}
	
	
	return 0;
}