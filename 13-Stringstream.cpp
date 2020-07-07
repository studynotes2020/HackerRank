#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// 13.stringstream
vector<int> parseInts(string str) {
	// Complete this function
	stringstream ss(str);
	char ch;
	int num;
	vector<int> arr;
	while (ss) {
		ss >> num >> ch;
		arr.push_back(num);
	}
	return arr;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}