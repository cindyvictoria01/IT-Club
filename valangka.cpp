# include <iostream>
# include <string.h>
# include <stdlib.h>
using namespace std;

// 1 2 3 4 5 6 7 8 9 0
// .isdigit()

// suatu input adalah digit

// ascii code
// range: ???

// 1 23 123 51 12

bool isdigit(char *str) {  // 123
	for (int i; i < strlen(str); i++) {
		char ch = str[i];
		if (ch < 48 || ch > 57) return false;
	}	
	return true;
}

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

// Struktur arraylist
typedef struct {
	int *data;
	int size;
	int capacity;
} ArrayList;

// fungsi untuk membentuk item ArrayList baru dengan capacity initial = n
ArrayList make_new_list(int n) {
	ArrayList list;
	list.capacity = n;
	list.size = 0;	
	list.data = (int *)malloc(sizeof(int) * list.capacity);
	return list;
}

// list penuh
bool is_full(ArrayList list) {
	return list.size == list.capacity;
}

// menambah item
void add_item(ArrayList& list, int x) {
	if (!is_full(list)) {
		list.data[list.size++] = x;
	}
	else {
		// penuh
		cout << "Err, arraylist is full ...\n";
	}
}

// list kosong
bool is_empty(ArrayList list) {
	return list.size == 0;
}

// cetak
void display(ArrayList list) {
	if (!is_empty(list)) {
		cout << "Item:\n";
		for (int i = 0; i<list.size; i++) {
			cout << list.data[i] << " ";
		}
		cout << "\nTotal data element: " << list.size << "/" << list.capacity << endl;
	} else {
		cout << "List is empty";
	}
}


int main() {
	ArrayList list;
	int pilihan;
	int item;
	do {
		system("cls");
		cout << "Program ArrayList\n";
		cout << "-----------------\n";
		cout << "1. Inisialisasi Array\n";
		cout << "2. Menambah Item\n";
		cout << "3. Cetak Isi Array\n";
		cout << "0. Exit\n";
		cout << "-----------------\n";
		fflush(stdin);
		pilihan = get_int("Menu : ");
		switch(pilihan) {
			case 1:
				system("cls");
				list = make_new_list(10);
				cout << "List sudah diinisialisasi\n";
				system("pause");
				break;
			case 2:
				system("cls");
				item = get_int("Data: ");
				add_item(list, item);
				system("pause");
				break;
			case 3:
				system("cls");
				display(list);
				system("pause");
				break;
		} 
	} while(pilihan!=0);
	system("cls");
	cout << "Thankyou ...\n";
	return 0;
}

