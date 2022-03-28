# include <iostream>
using namespace std;

// int (bulat)
int ft_to_m(int x){
	return x*0.305;
}

// float (desimal)
float ft_to_m(float x){
	return x*0.305;
}

int in_to_cm(int x){
	return x*2.54;
}

int c_to_k(int x){
	return x+273.15;
}

int f_to_k(int x){ 
	return (x-32)*5/9+273.15;
}

int kmh_to_ms(int x){
	return x * 5/18;
}

int lbs_to_kg(int x){
	return x * 0.453592;
}

int main() {
	int pilihan;
	int angka;
	float n;
	do {
		system("cls");
		cout << "Menu Konversi Satuan\n";
		cout << "--------------------\n";
		cout << "1. Kaki (ft) -> Meter (m)\n";
		cout << "2. Inch (in) -> Centi Meter (cm)\n";
		cout << "3. Celcius (C) -> Kelvin (K)\n";
		cout << "4. Fahrenheit (F) -> Kelvin (K)\n";
		cout << "5. Kecepatan: km/jam -> m/s\n";
		cout << "6. Pounds (lbs) -> Kilogram (kg)\n";
		cout << "0. Keluar\n";
		cout << "Menu : ";
		cin >> pilihan;
		switch(pilihan){
			case 1:
				system("cls");
				cout << "Kaki (ft) -> Meter (m)\n";
				cout << "----------------------\n";
				cout << "x? ";
				// untuk float (bilangan desimal)
				cin >> n;
				cout << n << "ft = " << ft_to_m(n) << "m\n";
				// untuk int (bilangan bulat)
				angka = n;
				cout << angka << "ft = " << ft_to_m(angka) << "m\n";
				system("pause");
				break;
			case 2:
				system("cls");
				cout << "Inch (in) -> Centi Meter (cm)\n";
				cout << "-----------------------------\n";
				cout << "x? ";
				cin >> angka;
				cout << angka << "in = " << in_to_cm(angka) << "cm\n";
				system("pause");
				break;
			case 3:
				system("cls");
				cout << "Celcius (C) -> Kelvin (K)\n";
				cout << "-------------------------\n";
				cout << "x? ";
				cin >> angka;
				cout << angka << "C = " << c_to_k(angka) << "K\n";
				system("pause");
				break;
			case 4:
				system("cls");
				cout << "Fahrenheit (F) -> Kelvin (K)\n";
				cout << "----------------------------\n";
				cout << "x? ";
				cin >> angka;
				cout << angka << "F = " << f_to_k(angka) << "K\n";
				system("pause");
				break;
			case 5:
				system("cls");
				cout << "Kecepatan: km/jam -> m/s\n";
				cout << "------------------------\n";
				cout << "x? ";
				cin >> angka;
				cout << angka << " km/jam = " << kmh_to_ms(angka) << " m/s\n";
				system("pause");
				break;
			case 6:
				system("cls");
				cout << "Pounds (lbs) -> Kilogram (kg)\n";
				cout << "-----------------------------\n";
				cout << "x? ";
				cin >> angka;
				cout << angka << " lbs = " << lbs_to_kg(angka) << " kg\n";
				system("pause");
				break;
		}
	} while (pilihan!=0);
	
}
