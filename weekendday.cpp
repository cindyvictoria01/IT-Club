# include <iostream>
using namespace std;

int main() {
	int hari;
	cout << "Hari (1-7)? ";
	cin >> hari;
	
	if (hari >= 1 && hari <= 4) {
		cout << "Weekday";
	} else if (hari >= 5 && hari <= 7) {
		cout << "Weekend";
	} else {
		cout << "out of range ...";
	}
	
	if (hari <= 1 || hari >= 7) {
		cout << "out of range ...";
	}
	
	return 0;
}
