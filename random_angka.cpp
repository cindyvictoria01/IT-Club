# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <time.h>
using namespace std;

// validasi angka
bool isdigit(char *str) {  
	for (int i; i < strlen(str); i++) {
		char ch = str[i];
		if (ch < 48 || ch > 57) return false;
	}	
	return true;
}

// input angka
int get_int(const char *prompt) {
	bool first = true;
	while (true) {
		if (first) {
			cout << prompt;
		} else {
			cout << "[Retry] " << prompt;
		}
		
		char input[8];
		gets(input);
		if (strlen(input) != 0) {
			if (isdigit(input)) {
				return atoi(input);
			}
		}
	}
}

// fungsi untuk random
int* random_n_value(int n, int limit) {
	int *data = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		data[i] = rand() % (limit+1);
	}
	return data;
}

// fungsi untuk cetak
void print_data(int data[], int n) {
	cout << "Data items: ";
	for (int i = 0; i < n; i++) {
		cout << data[i] << " ";
	}
	cout << "\n";
}

int main() {
	srand((unsigned)time(NULL)); // intisialisasi random
	
	int n;
	int limit;
	
	n = get_int("Jumlah angka? ");
	limit = get_int("Range? ");
	
	int *data_1 = random_n_value(n, limit);
	print_data(data_1, n);
	return 0;
}
