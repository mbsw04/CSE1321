#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    cout << "Enter a red value (0-255):";
    cin >> num1;
    cout << "Enter a green value (0-255):";
    cin >> num2;
    cout << "Enter a blue value (0-255):";
    cin >> num3;
    cout << "The inverted color is red=" << 255 - num1 << ", green=" << 255 - num2 << ", blue= " << 255 - num3 << endl;
    double num4 = float((255 - num1)) / 255;
    double num5 = float((255 - num2)) / 255;
    double num6 = float((255 - num3)) / 255;
    cout << "with floating points, that would be red=" << num4 << ", green=" << num5 << ", blue=" << num6 << endl;



}
