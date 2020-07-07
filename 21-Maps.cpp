#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iomanip> 
#include <sstream>
#include <set>
#include <map>

using namespace std;

//21.Maps-STL
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int q, type, y;
	string x;
	map <string, int> m;
	map<string, int>::iterator itr;

	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> type >> x;
		itr = m.find(x);
		if (type == 1) {
			cin >> y;
			if (itr != m.end()) {
				m[x] += y;
			}
			else
				m.insert(make_pair(x, y));
		}
		else if (type == 2) {
			if (itr != m.end());
				m.erase(x);
		}
		else {
			if (itr != m.end())
				cout << m[x] << endl;
			else
				cout << "0" << endl;
		}
	}
	return 0;
}