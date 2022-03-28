# include <iostream>
using namespace std;

int leapyear(int x) {
	bool tmp;
	
	if (x % 400 == 0) {
		tmp = true;
	} else {
		if (x % 100 == 0) {
			tmp = false;
		} else {
			if (x % 4 == 0) {
				tmp = true;
			} else {
				tmp = false;
			}
		}
	}
	
	if (tmp != false) {		// tmp == true
		cout << "Tahun Kabisat";
	} else {
		cout << "Bukan Tahun Kabisat";
	}
}

int main(){
	bool loop = true;
	
	do {
		// declare variabel year
		int year;
		string ans;
		
		// user input
		cout << "Year: ";
		cin >> year;
		
		// panggil function
		leapyear(year);
		
		// ulang??
		cout << "\nTry again (y/n)? ";
		cin >> ans;
		
		if (ans == "y" || ans == "Y") {
			loop = true;
		} else{
			loop = false;
		}
	}
	while (loop != false);
	return 0;
}
