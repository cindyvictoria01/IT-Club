#include <iostream>
using namespace std;

int kelipatan(int n){
	for (int i = 1; n; i++){
		if (n % i == 0) {
			cout << i << " ";
		}
	}
	return 0;
}

int main(){
	int x;
	
	cout << "PROGRAM MENCARI FAKTOR BILANGAN\n";
	cout << "x: ";
	cin >> x;
	
	cout << kelipatan(x);
	return 0;
}
