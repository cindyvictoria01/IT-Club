// coba kalian buat suatu program yang dapat menentukan
// angka yang diinput user itu genap atau ganjil

# include <iostream>
using namespace std;

int cek(int angka){
	string hasil;
	
	if (angka % 2 == 0) {
		hasil = "Genap"	
	}
	else {
		hasil = "Ganjil"
	}
	return hasil;
}

int main() {
	
}
