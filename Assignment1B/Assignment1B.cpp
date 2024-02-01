#include <iostream>
#include <string>

using namespace std;

int main()
{
	string item1;
	string item2;
	int qty1;
	int qty2;
	double cost1;
	double cost2;

	cout << "What're you buying?";
	getline(cin, item1);
	cout << "How many?";
	cin >> qty1;
	cout << "what do they cost?";
	cin >> cost1;
	cout << "what else're you buying?";
	cin >> item2;
	//	cin.ignore();
	cout << "How many?";
	cin >> qty2;
	cout << "what do they cost?";
	cin >> cost2;

	double total1 = cost1 * qty1;
	double total2 = cost2 * qty2;

	cout << "your list:" << endl;
	cout << "----";
	cout << item1 << " (" << qty1 << ")" << endl;
	cout << "$" << cost1 << " (" << total1 << " total)" << endl << endl;
	cout << item2 << " (" << qty2 << ")" << endl;
	cout << "$" << cost2 << " (" << total2 << " total)" << endl << endl;
	cout << "Total Cost: $" << total1 + total2 << endl;
	cout << "----";
}
