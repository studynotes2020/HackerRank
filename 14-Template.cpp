#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//14.Template Class, Template Function
template <class T>
class AddElements {
	private:
		T element1;
		T element2;
	public:
		AddElements(T arg) { element1 = arg; }
		T add(T element2);
		T concatenate(T element2);
};

template <class T>
T AddElements<T>::add(T element2) {
	return element1 + element2;
}

template <class T>
T AddElements<T>::concatenate(T element2) {
	return element1 + element2;
}

int main() {
	int n, i;
	cin >> n;
	for (i = 0; i<n; i++) {
		string type;
		cin >> type;
		if (type == "float") {
			double element1, element2;
			cin >> element1 >> element2;
			AddElements<double> myfloat(element1);
			cout << myfloat.add(element2) << endl;
		}
		else if (type == "int") {
			int element1, element2;
			cin >> element1 >> element2;
			AddElements<int> myint(element1);
			cout << myint.add(element2) << endl;
		}
		else if (type == "string") {
			string element1, element2;
			cin >> element1 >> element2;
			AddElements<string> mystring(element1);
			cout << mystring.concatenate(element2) << endl;
		}
	}
	return 0;
}