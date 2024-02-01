#include <iostream>
#include <string>

using namespace std;

int main()
{
    int width;
    int height;
    int file_size;

    int BPC;

    cout << "[Image Encooding Checker]" << endl;
    cout << "What is the image width? ";
    cin >> width;
    cout << "What is the image height? ";
    cin >> height;
    cout << "What is the file size (in bytes)? ";
    cin >> file_size;

    BPC = file_size / (width * height);
    if (BPC % 3 == 0) {
        switch (BPC) {
        case 3:
            cout << endl << "The RGB image is encoded with 8 bits per channel.";
            break;
        case 6:
            cout << endl << "The RGB image is encoded with 16 bits per channel.";
            break;
        case 9:
            cout << endl << "The RGB image is encoded with 32 bits per channel.";
            break;
        default:
            cout << endl << "computer does not know how to read this encoding.";
            break;

        }
    }
    else {
        cout << endl << "The information is invalid " << '-' << " please re-enter it.";
    }
}
    

