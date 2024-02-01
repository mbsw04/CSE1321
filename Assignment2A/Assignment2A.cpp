#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num_1;
	int num_2;
	int modulo_num;

	cout << "First Number: ";
	cin >> num_1;
	cout << "Second Number: ";
	cin >> num_2;
	cout << "Number for Modulo Operation: ";
	cin >> modulo_num;

	int add = num_1 + num_2;
	int sub = num_1 - num_2;
	int multi = num_1 * num_2;
	int div = num_1 / num_2;

	int mod_add = (add) % (modulo_num);
	int mod_sub = (sub) % (modulo_num);
	int mod_multi = (multi) % (modulo_num);
	int mod_div = (div) % (modulo_num);


	cout << endl <<num_1 << " + " << num_2 << " = " << add << ". The remainder if divided by " << modulo_num << " is " << mod_add << "." << endl;
	cout << num_1 << " - " << num_2 << " = " << sub << ". The remainder if divided by " << modulo_num << " is " << mod_sub << "." << endl;
    cout << num_1 << " * " << num_2 << " = " << multi << ". The remainder if divided by " << modulo_num << " is " << mod_multi << "." << endl;
    cout << num_1 << " / " << num_2 << " = " << div << " (Approximately). The remainder if divided by " << modulo_num << " is " << mod_div << ".";

}