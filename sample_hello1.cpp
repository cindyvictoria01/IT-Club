#include <iostream>
using namespace std;

int main(){
	char nama[8];
	
	cout << "Your name? ";
	//gets(nama);
	//cin >> nama;
	fgets(nama, sizeof(nama)+1, stdin);
	
	cout << "Hello " << nama;
	
	return 0;
}
