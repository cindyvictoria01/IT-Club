# include <iostream>
using namespace std;

int faktor(int n) {
	for (int i = 1; n; i++){
		if (n % i == 0) {
			cout << i << " ";
		}
	}
}
int main() {
	int x;
	
	cout << "x: ";
	cin >> x;
	cout << "Faktor: ";
	cout << faktor(x);
	
	return 0;
}
