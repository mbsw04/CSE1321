#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ARRAY_SIZE = 17;


bool check_if_sorted(int arr[]) {
    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}


void shuffleArray(int arr[]) {
    for (int i = ARRAY_SIZE - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}


void PrintArray(int arr[]) {
    cout << "Printing array...\n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main() {
    int ar[ARRAY_SIZE];
    srand(time(NULL));

    for (int i = 0; i < ARRAY_SIZE; i++) {
        ar[i] = rand() % 359 + 1;
    }
    cout << "[Random Sort]\n";
    int attempts = 0;
    bool sorted = false;
    while (!sorted) {
        PrintArray(ar);
        sorted = check_if_sorted(ar);
        if (!sorted) {
            cout << "Not sorted yet!\n";
            shuffleArray(ar);
        }
        attempts++;
    }
    cout << "Hooray, it's sorted! And it only took " << attempts << " attempts!" << endl;

}
