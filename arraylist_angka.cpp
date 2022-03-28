# include <iostream>
# include <string.h>
# include <stdlib.h>
using namespace std;

// ascii code
// range: 48-57 (untuk digit)

// function untuk periksa digit / bukan
bool isdigit(char *str) {  // 123
	for (int i; i < strlen(str); i++) {
		char ch = str[i];
		if (ch < 48 || ch > 57) return false;
	}	
	return true;
}

// function untuk mengambil input (harus int)
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
		cout << "<ERROR> LIST IS FULL\n";
	}
}

// list kosong
bool is_empty(ArrayList list) {
	return list.size == 0;
}

// cetak
void display(ArrayList list) {
	if (!is_empty(list)) {
		cout << "List item: \n";
		for (int i = 0; i<list.size; i++) {
			cout << list.data[i] << " ";
		}
		cout << "\nTotal element: " << list.size << "/" << list.capacity << "\n";
	} else {
		cout << "<ERROR> LIST IS EMPTY\n";
	}
}


int main() {
	ArrayList list;
	int pilihan;
	int item;
	do {
		system("cls");
		cout << "Program ArrayList Angka\n";
		cout << "-----------------------\n";
		cout << "1. Initialize Array\n";
		cout << "2. Add Item\n";
		cout << "3. Display Item\n";
		cout << "4. Clear Array\n";
		cout << "0. Exit\n";
		cout << "-----------------------\n";
		fflush(stdin);
		pilihan = get_int("Menu : ");
		switch(pilihan) {
			case 1:
				system("cls");
				list = make_new_list(10);
				cout << "List initalized\n";
				system("pause");
				break;
			case 2:
				system("cls");
				cout << "Add Item\n";
				cout << "--------\n";
				item = get_int("Data: ");
				add_item(list, item);
				system("pause");
				break;
			case 3:
				system("cls");
				cout << "Display Item\n";
				cout << "------------\n";
				display(list);
				system("pause");
				break;
			case 4:
				system("cls");
				list = make_new_list(10);
				cout << "List is cleared\n";
				system("pause");
				break;
		} 
	} while(pilihan!=0);
	system("cls");
	cout << "Thankyou ...\n";
	return 0;
}

