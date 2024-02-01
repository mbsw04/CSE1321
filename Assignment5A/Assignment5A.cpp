#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first_name[5] = { "Mark","Amanda","Norman","Steve","Jesse" };
	string last_name[5] = { "Sloan","Bently","Briggs","Sloan","Travis" };
	int age[5] = { 67,33,47,35,24 };
	string Occupation[5] = { "Chief of Internal Medicine"," Pathologist","Administrator","Hospital Security","Surgeon Intern" };
	string has_medical_licence[5] = {"TRUE","TRUE","FALSE","FALSE","TRUE"};

	bool menu = 1;
	cout << "[Community General Hospital Directory]" << endl;
	while (menu) {
		
		cout << "1) List all employees" << endl
			<< "2) Search employee records by ID" << endl
			<< "3) Search employee records by Last Name" << endl
			<< "4) Quit" << endl;

		int choice;
		bool ans_1 = 1;

		while (ans_1) {
			cout << "Choice: ";
			cin >> choice;
			if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
				ans_1 = 0;
			}
			else {
				cout << "No option " << choice << "!"<<endl;
			}
		}
		
		switch (choice) {
		case 1:
		{
			cout << endl;
			for (int i = 0; i < 5; i++) {
				cout << "#" << i << ": " << first_name[i] << " " << last_name[i] << ", Age " << age[i] << ", " << Occupation[i] << ", Medical Licence: " << string(has_medical_licence[i]) << endl;
			}

			break;
		}
		case 2:
		{
			int id;
			bool ans_id = 1;
			while (ans_id) {
				cout << "ID: ";
				cin >> id;
				if (id == 0 || id == 1 || id == 2 || id == 3 || id == 4) {
					ans_id = 0;
				}
				else {
					cout << "Invalid ID!"<<endl;
				}
			}
			cout << "#" << id << ": " << first_name[id] << " " << last_name[id] << ", Age " << age[id] << ", " << Occupation[id] << ", Medical Licence: " << has_medical_licence[id] << endl;
			break;
		}
		case 3:
		{
			string search_last_name;
			bool found = 0;
			
				cout << "Last Name: ";
				cin >> search_last_name;
				for (int i = 0; i < 5; i++) {
					if (last_name[i].compare(search_last_name) == 0) {
						found = 1;
						cout << "#" << i << ": " << first_name[i] << " " << last_name[i] << ", Age " << age[i] << ", " << Occupation[i] << ", Medical Licence: " << has_medical_licence[i] << endl;
					}
				}
				if (!(found == 1)) {
					cout << "No Reccords Found!"<<endl;
				}
			
			break;
		}
		case 4:
		{
			cout << "[Closing Directory...]";
			return 0;
		}	break;
		}
		cout << endl;
	}

}