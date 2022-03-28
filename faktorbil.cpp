# include <iostream>
using namespace std;

int main() {
	int x;
	
	cout << "x: ";
	cin >> x;
	cout << "Faktor: ";
	
	for (int i = 1; x; i++){
		if (x % i == 0) {
			cout << i << " ";
		}
	}
	
	return 0;
}
