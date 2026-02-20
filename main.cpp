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

    for (auto &c : valiuta) c = toupper(c);

    double kursas = 0.0;

    if (pasirinkimas == 1) {

        if (valiuta == "GBP") kursas = GBP_Bendras;
        else if (valiuta == "USD") kursas = USD_Bendras;
        else if (valiuta == "INR") kursas = INR_Bendras;
        else {
            cout << "Nezinoma valiuta.\n";
            return 0;
        }

        cout << fixed << setprecision(2);
        cout << "1 EUR = " << kursas << " " << valiuta << "\n";
        return 0;
    }
    cout << "Iveskite kieki: ";
    cin >> kiekis;

    if (pasirinkimas == 2) {

        if (valiuta == "GBP") kursas = GBP_Pirkti;
        else if (valiuta == "USD") kursas = USD_Pirkti;
        else if (valiuta == "INR") kursas = INR_Pirkti;
        else {
            cout << "Nezinoma valiuta.\n";
            return 0;
        }
        double rezultatas = kiekis * kursas;

        cout << fixed << setprecision(2);
        cout << "Uz " << kiekis << " EUR gausite " << rezultatas << " " << valiuta << "\n";
    }
    else if (pasirinkimas == 3) {

        if (valiuta == "GBP") kursas = GBP_Parduoti;
        else if (valiuta == "USD") kursas = USD_Parduoti;
        else if (valiuta == "INR") kursas = INR_Parduoti;
        else {
            cout << "Nezinoma valiuta.\n";
            return 0;
        }
        double rezultatas = kiekis / kursas;

        cout << fixed << setprecision(2);
        cout << "Pardave " << kiekis << " " << valiuta << " gausite " << rezultatas << " EUR\n";
    }
    else {
        cout << "Neteisingas pasirinkimas.\n";
    }
    return 0;
}
