#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const double GBP_Bendras = 0.8729;
    const double GBP_Pirkti  = 0.8600;
    const double GBP_Parduoti = 0.9220;
    const double USD_Bendras = 1.1392;
    const double USD_Pirkti  = 1.1230;
    const double USD_Parduoti = 1.1743;
    const double INR_Bendras = 81.1246;
    const double INR_Pirkti  = 80.1862;
    const double INR_Parduoti = 107.8546;

    int pasirinkimas;
    string valiuta;
    double kiekis;

    cout << "Valiutos keitykla\n";
    cout << "1. Palyginti valiutos kursa\n";
    cout << "2. Pirkti valiuta\n";
    cout << "3. Parduoti valiuta\n";
    cout << "Pasirinkite: ";
    cin >> pasirinkimas;

    cout << "Iveskite valiuta (GBP, USD, INR): ";
    cin >> valiuta;


    return 0;
}
