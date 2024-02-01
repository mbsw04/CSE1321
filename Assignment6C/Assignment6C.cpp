#include <iostream>
#include <string>

using namespace std;


int surprise_function(int a, int b) {
    return a + b;
}


float surprise_function(float a, float b) {
    return a / b;
}

double surprise_function(double a, double b) {
    return fmod(a, b);
}


string surprise_function(char a, char b) {
    string result;
    result += a;
    result += b;
    return result;
}


bool surprise_function(bool a, bool b) {
    return a && b;
}

int main() {
    cout << "[Overloaded Surprise Function]" << endl;

    
    string datatype;
    cout << "What data type do you want to enter? ";
    cin >> datatype;

    
    if (datatype == "int") {
        int a, b;
        cout << "Value #1: ";
        cin >> a;
        cout << "Value #2: ";
        cin >> b;
        int result = surprise_function(a, b);
        cout << "Calling surprise_function()..." << endl;
        cout << "The result is " << result << endl;
    }
    else if (datatype == "float") {
        float a, b;
        cout << "Value #1: ";
        cin >> a;
        cout << "Value #2: ";
        cin >> b;
        float result = surprise_function(a, b);
        cout << "Calling surprise_function()..." << endl;
        cout << "The result is " << result << endl;
    }
    else if (datatype == "double") {
        double a, b;
        cout << "Value #1: ";
        cin >> a;
        cout << "Value #2: ";
        cin >> b;
        double result = surprise_function(a, b);
        cout << "Calling surprise_function()..." << endl;
        cout << "The result is " << result << endl;
    }
    else if (datatype == "char") {
        char a, b;
        cout << "Value #1: ";
        cin >> a;
        cout << "Value #2: ";
        cin >> b;
        string result = surprise_function(a, b);
        cout << "Calling surprise_function()..." << endl;
        cout << "The result is " << result << endl;
    }
    else if (datatype == "bool" || datatype == "boolean") {
        bool a, b;
        cout << "Value #1: ";
        cin >> boolalpha >> a;
        cout << "Value #2: ";
        cin >> boolalpha >> b;
        bool result = surprise_function(a, b);
        cout << "Calling surprise_function()..." << endl;
        cout << "The result is " << boolalpha << result << endl;
    }
    else {
        cout << "Invalid data type entered." << endl;
    }

    return 0;
}
