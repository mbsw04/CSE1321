#include <iostream>

using namespace std;

int main()
{
    cout << "[KSU Image Manipulation Program]" << endl;

    int img_width;
    int img_height;
    int img_color;

    cout << "Enter an image width: ";
    cin >> img_width;
    cout << "Enter an image height: ";
    cin >> img_height;

    do {
        cout << "Enter the fill color: ";
        cin >> img_color;
    } while (!(img_color <= 255 && img_color >= 0));

    int** img = new int* [img_height];

    for (int i = 0; i < img_height; ++i) {
        img[i] = new int[img_width];
    }

    for (int i = 0; i < img_height; i++) {
        for (int j = 0; j < img_width; j++) {
            img[i][j] = img_color;
        }
    }
    cout << endl;
    bool run = 1;
    do {
        
        cout << "What will you do?" << endl
            << "1) Fill in a pixel" << endl
            << "2) Fill in a line" << endl
            << "3) Print the image" << endl
            << "4) Quit" << endl;

        int choice;
        do {
            cout << "Choice?  ";
            cin >> choice;
        } while (!(choice > 0 && choice < 5));

        cout << endl;
        switch (choice) {
        case 1: {
            int row; int col; int new_color; bool g1 = 1;

            while (g1) {
                cout << "Row: ";
                cin >> row;
                cout << "Column: ";
                cin >> col;
                cout << "New Color: ";
                cin >> new_color;

                if (!((row < img_height && row >= 0) && (col < img_width && col >= 0) && (new_color <= 255 && new_color >= 0))) {
                    cout << "Invalid information!" << endl;
                }
                else {
                    g1 = 0;
                };
            }
            img[row][col] = new_color;
            cout << endl;
            break;
        }
        case 2: {
            bool g2 = 1;
            int row; int col; int new_color; int len; string direction;

            while (g2) {
                cout << "Row: ";
                cin >> row;
                cout << "Column: ";
                cin >> col;
                cout << "New Color: ";
                cin >> new_color;
                cout << "Length: ";
                cin >> len;
                cout << "Direction: ";
                cin >> direction;

                if (!((row < img_height && row >= 0) && (col < img_width && col >= 0) && (new_color <= 255 && new_color >= 0) && (direction.compare("up") == 0 || direction.compare("down") == 0 || direction.compare("left") == 0 || direction.compare("right") == 0))) {
                    cout << "invalid command";
                }
                else {
                    g2 = 0;
                }
            }
            
            int x = row; int y = col;
            for (int i = len; i != 0; i--) {
                img[x][y] = new_color;

                if (direction.compare("up") == 0) {
                    x--;
                }
                else if (direction.compare("down") == 0) {
                    x++;
                }
                else if (direction.compare("left") == 0) {
                    y--;
                }
                else if (direction.compare("right") == 0) {
                    y++;
                }

                if (x > img_width) {
                    break;
                }
                else if (x < 0) {
                    break;
                }
                else if (y > img_height) {
                    break;
                }
                else if (y < 0) {
                    break;
                }

               
            }

            cout << endl;

            break;
        }
        case 3: {
            cout << "PGM Image Contents" << endl;
            cout << "P2" << endl;
            cout << img_width << " " << img_height<<endl;
            cout << "255";

            for (int i = 0; i < img_height; i++) {
                cout << endl;
                for (int j = 0; j < img_width; j++) {
                    cout << img[i][j] << " ";
                }
            }
            cout << endl << endl;
            break;
        }
        case 4: {
            cout << endl << "[Exiting KSU Image Manipulation Program]";
            run = 0;
            return 0;
        }
        }

    } while (run);
}