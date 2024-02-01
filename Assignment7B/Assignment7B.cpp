#include <iostream>
#include <fstream>
using namespace std;

class Pixel {
public:
    int red, green, blue;
    Pixel() {
        red = 255;
        green = 255;
        blue = 255;
    }
    Pixel(int r, int g, int b) {
        red = r;
        green = g;
        blue = b;
    }
    void changeRGB(int r, int g, int b) {
        red = r;
        green = g;
        blue = b;
    }
    void printRGB() {
        cout << red << " " << green << " " << blue;
    }
};

void printImage(Pixel** image, int width, int height) {
    cout << "PPM Image Contents\n";
    cout << "P3\n";
    cout << width << " " << height << "\n";
    cout << "255\n";
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            image[i][j].printRGB();
            cout << " ";
        }
        cout << "\n";
    }
}


int main() {
    cout << "[Color Art Program]\n";
    int width, height;
    cout << "Enter an image width: ";
    cin >> width;
    cout << "Enter an image height: ";
    cin >> height;

    int r, g, b;

    cout << "Enter the fill color's red value: ";
    cin >> r;
    cout << "Enter the fill color's green value: ";
    cin >> g;
    cout << "Enter the fill color's blue value: ";
    cin >> b;
    cout << endl;

    Pixel** image = new Pixel * [height];
    for (int i = 0; i < height; i++) {
        image[i] = new Pixel[width];
        for (int j = 0; j < width; j++) {
            image[i][j] = Pixel(r, g, b);
        }
    }

    int choice;
    do {
        cout << "What will you do?\n";
        cout << "1) Fill in a pixel\n";
        cout << "2) Fill in a line\n";
        cout << "3) Print the image\n";
        cout << "4) Quit\n";
        cout << "Choice? ";
        cin >> choice;
        cout << endl;
        switch (choice) {
        case 1: {
            int row, col, r, g, b;
            cout << "Row: ";
            cin >> row;
            cout << "Column: ";
            cin >> col;
            cout << "New Red Color: ";
            cin >> r;
            cout << "New Green Color: ";
            cin >> g;
            cout << "New Blue Color: ";
            cin >> b;
            image[row - 1][col - 1].changeRGB(r, g, b);
            break;
        }
        case 2:
            int rowStart, rowEnd, colStart, colEnd;
            int newR, newG, newB;
            cout << "Starting row: ";
            cin >> rowStart;
            cout << "Ending row: ";
            cin >> rowEnd;
            cout << "Starting column: ";
            cin >> colStart;
            cout << "Ending column: ";
            cin >> colEnd;
            cout << "New Red Color: ";
            cin >> newR;
            cout << "New Green Color: ";
            cin >> newG;
            cout << "New Blue Color: ";
            cin >> newB;
            for (int r = rowStart; r <= rowEnd; r++) {
                for (int c = colStart; c <= colEnd; c++) {
                    image[r][c].changeRGB(newR, newG, newB);
                }
            }
            break;
        case 3:
            printImage(image, width, height);
            break;
        case 4:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 4);

}