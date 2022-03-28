# include <iostream>
using namespace std;

int main() {
	int x, y;
	
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	
	// a
	if (x > y) {
		cout << x << " lebih besar daripada " << y << endl;
	} else if (y > x){
		cout << y << " lebih besar daripada " << x << endl;
	}
	
	// b
	if (x < y) {
		cout << x << " lebih kecil daripada " << y << endl;
	} else if (y < x) {
		cout << y << " lebih kecil daripada " << x << endl;
	}
	
	// c
	//cout << "sama: " << (x == y) << endl;
	
	if (x == y) {
		cout << x << " sama dengan " << y;
	}
	
	
	// d
	//cout << "tidak sama: " << (x != y) << endl;
	
	if (x != y) {
		cout << x << " tidak sama dengan " << y;
	}
	
}
