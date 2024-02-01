#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	string ans1;
	string ans2;

	cout << "[Cretaceous Park Dialog]" << endl;
	cout << "Oh no, the power has gone out at Cretaceous Park!" << endl;
	cout << "1) What does that mean?" << endl;
	cout << "2) No, I just turned the light off." << endl;
	getline(cin, ans1);

	if (ans1.compare("What does that mean?") == 0) {
		cout << endl << "The dinosaurs will get loose... again...";
		cout << endl << "1) Life finds a way...";
		cout << endl << "2) What do we do?" << endl;
		getline(cin, ans2);

		if (ans2.compare("Life finds a way...") == 0) {
			cout << endl << "That\'s not helpful right now!";
			cout << endl << "We have to evacuate the park!";
		}
		else {
			cout << endl << "We have to evacuate the park!";
		}
	}
	else {
		cout << endl << "Oh thank goodness!";
	}
}