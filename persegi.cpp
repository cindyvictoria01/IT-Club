# include <iostream>
using namespace std;

int main() {
	int sisi;
	
	cout << "Sisi? ";
	cin >> sisi;
	
	int luas = sisi * sisi;
	int keliling = 4 * sisi;
	
	cout << "Luas persegi = " << luas;
	cout << "\nKeliling persegi = " << keliling;
}
