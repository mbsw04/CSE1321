#include <iostream>
#include <random>

using namespace std;

int main()
{
    cout << "[Linear Vs. Binary Search]" << endl;

    int* arr = new int[1000019];
    int x = 0;

    for (int i = 1000018; i >= 0; i--) {
        arr[x] = i;
        x++;
    }

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 1000018);

    int random;
    random = dis(gen);;

    cout << "The target value is " << random << endl;
    int linear_loop = 0;
    int Binary_loop = 0;

    for (int i = 0; i <= 1000018; i++) {
        int check = arr[i];
        linear_loop++;
        if (check == random) {
            break;
        }
    }

    cout << "Linear Search: " << linear_loop << " loop(s)" << endl;

    int left; int right;
    left = 0;
    right = 1000018;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == random) {
            break;
        }
        if (arr[mid] < random) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
        Binary_loop++;
    }

    cout << "Binary Search: " << Binary_loop << " guess(es)" << endl;

    if (linear_loop < Binary_loop) {
        cout << "Linear Search is faster this time!";
    }
    else {
        cout << "Binary Search is faster this time!";
    }

    delete[] arr;
}

