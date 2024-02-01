#include <iostream>
#include <string>

using namespace std;

int main()
{
	float time;
	float speed;
	int factored_sec;
	int time_saved;

	cout << "[Fast-Forward]" << endl;
	cout << "What is the original video time? ";
	cin >> time;
	cout << "What is the playback speed factor? ";
	cin >> speed;

	int min = int(time);
	float sec = 100 * (time - min);
	float total_sec = (60 * min) + sec;

	factored_sec = total_sec / speed;
	time_saved = total_sec - factored_sec;

	cout << "The new video time would be " << factored_sec << " second(s)." << endl << "That saves you " << time_saved << " second(s) from the original video speed.";

}