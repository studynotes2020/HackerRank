#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// 18. Virtual Function
class Person {
protected:
	string name;
	int age,id;
public:
	virtual void getdata() {};
	virtual void putdata() {};

};

class Professor : public Person {
private:
	int publications;
	
public:
	static int cur_id;
	virtual void getdata() {
		cur_id++;
		id = cur_id;
		cin >> name >> age >> publications;
	}
	virtual void putdata() {
		cout << name << " " << age << " " << publications
			<< " " << id << endl;
	}
};
int Professor::cur_id;

class Student : public Person {
private:
	int marks[6];
	
public:
	static int cur_id;
	virtual void getdata() {
		cur_id++;
		id = cur_id;
		cin >> name >> age;
		for (int i = 0; i < 6; i++) {
			cin >> marks[i];
		}
	}
	virtual void putdata() {
		int sum = 0;
		for (int i = 0; i < 6; i++) {
			sum += marks[i];
		}
		cout << name << " " << age << " " << sum
			<< " " << id << endl;
	}
};
int Student::cur_id;

int main() {

	int n, val;
	cin >> n; //The number of objects that is going to be created.
	vector<Person *> per(n);

	for (int i = 0; i < n; i++) {

		cin >> val;
		if (val == 1) {
			// If val is 1 current object is of type Professor
			per[i] = new Professor;

		}
		else per[i] = new Student; // Else the current object is of type Student

		per[i]->getdata(); // Get the data from the user.

	}

	for (int i = 0; i<n; i++)
		per[i]->putdata(); // Print the required output for each object.

	return 0;

}