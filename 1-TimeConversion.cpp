#include <string>
#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <sstream>
#include <set>
#include <map>

using namespace std;

// How to make Console not disappearing
// Properties>Configuration Properties> Linker> System
// select Console (/SUBSYSTEM:CONSOLE) in SubSystem option.

// 1. time conversion
string timeconversion(string s) {
	// complete this function
	int hh_12;
	string hh, mm, ss, am_pm;
	
	hh_12 = stoi(s.substr(0, 2));
	mm = s.substr(3,2);
	ss  = s.substr(6,2);
	am_pm = s.substr(8, 2);

	if (am_pm == "am") {
		if (hh_12 < 12) hh = s.substr(0, 2);
		else hh = "00";
	}
	else {
		if (hh_12 < 12) hh = to_string(hh_12 + 12);
		else hh = "12";
	}

	return hh + ":" + mm + ":" + ss;
}

int main() {
	string s = "06:40:03pm";
	string result = timeconversion(s);
	cout << result << endl;
	return 0;
}