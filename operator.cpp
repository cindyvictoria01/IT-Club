# include <iostream>
# include <math.h>
using namespace std;

int pangkat(int angka, int power) {
	int hasil = 1;
	for (int i = 1; i<=power; i++) {
		hasil *= angka;
	}
	return hasil;
}
int main(){
	int a = 12;
	int b = 2;
	
	cout << "a = " << a;
	cout << "\nb = " << b;
	cout << "\na + b = " << a + b;
	cout << "\na - b = " << a - b;
	cout << "\na * b = " << a * b;
	cout << "\na / b = " << a / b;
	cout << "\na ^ b = " << pow(a,b);
	
	cout << "\na ^ b = " << pangkat(a, b);
}
