# include <iostream>
using namespace std;

void inputData(int array[], int jumlahData){
  	for (int i = 0; i < jumlahData; i++) {
  		cout << "Nilai ke-" << i+1 <<": ";
  		cin >> array[i];
	}
}

int total(int x, int list[]){
	int jumlah = 0;
	
	for (int i=0; i < x; i++){
		jumlah += list[i];
	}
	return jumlah;
}

int ratarata(int x, int jumlah){
	int rata2;
	rata2 = jumlah/x;
	return rata2;
}

int maks(int x, int list[]) {
	int maksimum = list[0];
	
	for (int i=0; i < x; i++){
		if (list[i] > maksimum) {
			maksimum = list[i];
		}
	}
	return maksimum;
}

int mins(int x, int list[]) {
	int minimum = list[0];
	
	for (int i=0; i < x; i++){
		if (list[i] < minimum) {
			minimum = list[i];
		}
	}
	return minimum;
}

int main(){
	int jumlah_data;
	
	cout << "Jumlah data? ";
	cin >> jumlah_data;
	
	int list[jumlah_data];
	inputData(list,jumlah_data);
	
	int total_nilai = total(jumlah_data, list);
	int rata2 = ratarata(jumlah_data, total_nilai);
	int max = maks(jumlah_data, list);
	int min = mins(jumlah_data, list);
	
	cout << "\nTotal\t\t: " << total_nilai;
	cout << "\nRata-rata\t: " << rata2;
	cout << "\nMaksimum\t: " << max;
	cout << "\nMinimum\t\t: " << min;
	return 0;
}
