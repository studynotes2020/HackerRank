#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// 11. Class and Object
class Student {
private:
	vector<int> scores;
	int score=0, totalScore=0;
public:
	void input() {
		for (int i = 0; i < 5; i++) {
			cin >> score;
			scores.push_back(score);
		}
	}
	int calculateTotalScore() {
		for (int i = 0; i < 5; i++) {
			totalScore += scores[i];
		}
		return totalScore;
	}
};

int main() {
	int n; // number of students
	cin >> n;
	Student *s = new Student[n]; // an array of n students

	for (int i = 0; i < n; i++) {
		s[i].input();
	}

	// calculate kristen's score
	int kristen_score = s[0].calculateTotalScore();

	// determine how many students scored higher than kristen
	int count = 0;
	for (int i = 1; i < n; i++) {
		int total = s[i].calculateTotalScore();
		if (total > kristen_score) {
			count++;
		}
	}

	// print result
	cout << count;

	return 0;
}