#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int floorResult = floor((double)A / B);
    int ceilResult = ceil((double)A / B);
    int roundResult = round((double)A / B);

    cout << "floor " << A << " / " << B << " = " << floorResult << endl;
    cout << "ceil " << A << " / " << B << " = " << ceilResult << endl;
    cout << "round " << A << " / " << B << " = " << roundResult << endl;

    return 0;
}
