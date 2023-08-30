#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numYears;
    cout << "Enter the number of semester: ";
    cin >> numYears;

    vector<double> sgpa(numYears);

    for (int year = 0; year < numYears; ++year) {
        cout << "Enter SGPA for semester " << year + 1 << ": ";
        cin >> sgpa[year];
    }

    double totalSGPA = 0.0;
    for (int year = 0; year < numYears; ++year) {
        totalSGPA += sgpa[year];
    }

    double cgpa = totalSGPA / numYears;

    cout << "Your overall CGPA is: " << cgpa << endl;

    return 0;
}
