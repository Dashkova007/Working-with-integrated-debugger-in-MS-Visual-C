#include <iostream>
using namespace std;
void first() {
	setlocale(LC_ALL, "rus");
	const int x = 10, y = 10;
	const char f = 42;
	int i, j, s;
	do {
		cout << "Выберите фигуру 1-10 (для выхода - 0) = ";
		cin >> s;
		switch (s) {
		case 0: exit(0);
		case 1:
			for (i = 0; i < x; i++) {
				for (j = 0; j < y; j++) {
					if (i <= j) cout << f << " ";
					else cout << "  ";
				}
				cout << endl;
			}
			break;
		case 2:
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					if (j <= i) cout << f << " ";
					else cout << "  ";
				}
				cout << endl;
			}
			break;
		case 3:
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					if ((i <= j) && (i < x - j - 1)) cout << f << " ";
					else cout << "  ";
				}
				cout << endl;
			}
			break;
		case 4:
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					if ((i >= j) && (i > x - j - 1)) cout << f << " ";
					else cout << "  ";
				}
				cout << endl;
			}
			break;
		case 5:
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					if (((i <= j) && (i < x - j - 1)) || ((i >= j) && (i > x - j - 1))) cout << f << " ";
					else cout << "  ";
				}
				cout << endl;
			}
			break;
		case 6:
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					if (((j >= i) && (j > x - i - 1)) || ((j <= i) && (j < x - i - 1))) cout << f << " ";
					else cout << "  ";
				}
				cout << endl;
			}
			break;
		case 7:
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					if ((j <= i) && (j < y - i - 1)) cout << f << " ";
					else cout << "  ";
				}
				cout << endl;
			}
			break;
		case 8:
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					if ((j >= i) && (j > y - i - 1)) cout << f << " ";
					else cout << "  ";
				}
				cout << endl;
			}
			break;
		case 9:
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					if (j <= x - i - 1) cout << f << " ";
					else cout << "  ";
				}
				cout << endl;
			}
			break;
		case 10:
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					if (i >= y - j - 1) cout << f << " ";
					else cout << "  ";
				}
				cout << endl;
			}
			break;
		default: cout << "Error\n"; break;
		}
	} while (s != 0);
}