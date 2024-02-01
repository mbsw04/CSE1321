#include <iostream>
#include <string>

using namespace std;

int main()
{
    double x;
    double y;

    cout << "[Creataceous Park GIS]" << endl;
    cout << "X Coordinate: ";
    cin >> x;
    cout << "Y Coordinate: ";
    cin >> y;

    if ((x <= 8 && x >= 0) && (y <= 8 && y >= 0)) {
        if ((x >= 2 && x <= 4) && (y >= 2 && y <= 6)) {
            cout << endl << "You are at the T. Rex Lake";
        }
        else if (x >= 5 && (y <= 2 && y >= 0)) {
            cout << endl << "You are at the Pterodactyl Aviary";
        }
        else if (x >= 6 && (y >= 2 && y <= 4)) {
            cout << endl << "You are at the Visitor" << "\'s Center";
        }
        else if (x >= 5 && y >= 5) {
            cout << endl << "You are at the Deinonychus Pen";
        }
        else {
            cout << endl << "You are at the Triceratops Grasslands";
        }

    }
    else {
        cout << endl << "WARNING: You have left the boundaries of the park." << endl << "Please return immediately.";
    }
}
