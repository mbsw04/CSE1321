#include <iostream>
#include <string>

using namespace std;

int main()
{
	int square_size;
	int border_size;
	int square_color;
	int border_color;
	bool ans0 = 1;
	bool ans1 = 1;
	bool ans2 = 1;
	bool ans3 = 1;

	while (ans0) {
		cout << "Enter the size of the square: ";
		cin >> square_size;
		ans0 = 0;

		if (square_size < 0) {
			ans0 = 1;
			cout << "Invalid input!" << endl;
		}
	}

	while (ans1) {
		cout << "Enter the size of the border: ";
		cin >> border_size;
		ans1 = 0;

		if (border_size < 0) {
			ans1 = 1;
			cout << "Invalid input!" << endl;
		}
	}

	while (ans2) {
		cout << "Enter the color of the square: ";
		cin >> square_color;
		ans2 = 0;

		if (!(square_color == 0 || square_color == 1)) {
			ans2 = 1;
			cout << "Invalid input!" << endl;
		}
	}

	while (ans3) {
		cout << "Enter the color of the border: ";
		cin >> border_color;
		ans3 = 0;

		if (!(border_color == 0 || border_color == 1)) {
			ans3 = 1;
			cout << "Invalid input!" << endl;
		}
	}
	int dim = square_size + (border_size * 2);


	cout << "PBM File Contents:" << endl << "P1" << endl;
	cout << dim << " " << dim << endl;
	for (int i = 0; i != border_size ;i++) {
		for (int j = 0; j != dim ; j++) {
			cout << border_color << " ";
		}
		cout << endl;
	}

	for (int i = 0; i != square_size; i++) {
		for (int j = 0; j != ((dim-square_size)/2) ; j++) {
			cout << border_color << " ";
		}
		for (int i = 0; i != square_size ; i++) {
			cout << square_color << " ";
		}
		for (int j = 0; j != ((dim - square_size) / 2) ; j++) {
			cout << border_color << " ";
		}
		cout << endl;
	}

	for (int i = 0; i != border_size ; i++) {
		for (int j = 0; j != dim ; j++) {
			cout << border_color << " ";
		}
		cout << endl;
	} 
}
