# include <iostream>
# include <string.h>
# include <stdlib.h>
using namespace std;

bool isdigit(char *str) {
	for (int i = 0; i < strlen(str); i++) {
		char ch = str[i];
		if (ch < 48 || ch > 57) return false;
	}
	return true;
}

int get_int(const char *prompt) {
	bool first = true;
	while (true) {
		if (first) {
			first = false;
			cout << prompt;
		} else {
			cout << "[Retry] " << prompt;
		}
		char input[80];
		gets(input);
		if (strlen(input) != 0) {
			if (isdigit(input)) {
				return atoi(input);
			}	
		} 
	}
}

int main() {
	int x;
	
	cout << "PROGRAM ARRAY ANGKA\n";
	cout << "-------------------\n";
	x = get_int("Angka: ");
	
	cout << "Angka: " << x;
	
	return 0;
}
