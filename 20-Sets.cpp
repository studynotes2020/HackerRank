#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <set>

using namespace std;

//20. Sets-STL
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int q, y, x;
	set<int>s;
	set<int>::iterator itr;
	
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> y >> x;
		if (y == 1) {
			s.insert(x);
		}
		else if (y == 2) {
			itr = s.find(x);
			if (itr!=s.end()) { //return in the middle if not found
				s.erase(x);
			}
		}
		else {
			itr = s.find(x);
			if (itr != s.end()) {
				cout << "Yes" << endl;
			}
			else
				cout << "No" << endl;
		}
	}
	
	return 0;
}