#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

// 4. Pointer
void update(int *a, int *b) {
	// Complete this function    
	*a = *a + *b;
	//*pb = *a - *b;
	return;
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);

	cout << a << endl << b << endl;
	return 0;
}