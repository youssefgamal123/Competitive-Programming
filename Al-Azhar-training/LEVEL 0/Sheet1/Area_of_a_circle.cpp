#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const double PI = 3.141592653;

int main() {
    double radius;



  cin >> radius;

    // Calculate the area
    double area = PI * pow(radius, 2);

    // Set precision to 9 decimal places
  cout << fixed << setprecision(9);

    // Print the result
    cout<< area;

    return 0;
}
