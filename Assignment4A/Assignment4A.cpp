#include <iostream>
#include <string>

using namespace std;

int main()
{
    int choice;
    int start_num;

    cout << "What loop do you want to use?" << endl << "1) A loop that might run zero or more times" << endl << "2) A loop that will always run at least once" << endl << "3) A loop with a predetermined start and end" << endl;
    cout << "Your choice: ";
    cin >> choice;
    cout << "What's your start number? ";
    cin >> start_num;

    if (choice == 1) {
        cout << "Counting:";
        for (int i = start_num; i >= 0; i--) {
            cout << " " << i << ",";
        }
    }
    else if (choice == 2) {
        int count = start_num;

        cout << "Counting:";
        do {
            cout << " " << count << ",";
            count--;
        } while (count >= 0);
    }
    else {
        int end_num;
        int count = start_num;

        cout << "What's your end number? ";
        cin >> end_num;
        cout << "Counting:";

        if (count > end_num) {
            while (count >= end_num) {
                cout << " " << count << ",";
                count--;
            }
        }
        else {
            while (count <= end_num) {
                cout << " " << count << ",";
                count++;
            }
        }
    }
}