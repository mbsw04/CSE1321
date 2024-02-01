#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    const double distance_moon = 384399.0 * pow(10, 3);
    const double distance_animal_cracker = 0.025;
    double meters_entered;
    float calculated_distance_moon;
    int calculated_distance_animal_cracker;
    int size;

    cout << "[Distance Calulator]" << endl;
    cout << "How many meters? ";
    cin >> meters_entered;

    calculated_distance_moon = meters_entered / distance_moon;
    calculated_distance_animal_cracker = meters_entered / distance_animal_cracker;

    size = abs(trunc(log10(calculated_distance_moon)))+2;
    cout.precision(size);
 
    cout << endl << meters_entered << " meter(s) is..." << endl << "..." << fixed << calculated_distance_moon << " distance from the Moon" << endl << "..." << calculated_distance_animal_cracker << " Animal Crackers long";
}
