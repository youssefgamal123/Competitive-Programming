#include <iostream>
#include <string>

using namespace std;

int main() {
    string num_div_eight = "";

    int number;
    cin >> number;

    while (number != 0) {
        if (number % 8 == 0) {
            num_div_eight += to_string(number); // Convert int to string and concatenate

        }

    }

    cout << num_div_eight; // Print the concatenated string
    return 0;
}


/*


get the last digit of the number using moduls operator
check if that number is divisible by 8 ,
if it's true , concatenate this number to an empty string so that we can know which numbers from the given number is divisible by 8
if it's false, delete the last digit from the number by dividing the number by 10 and repeat the same process till the number is not equal to zero






string num-div-eight


get number last digit --> check divisabilty by 8
if divisable num-div-eight+=last digit

else

delete last digit and get the following digit
cotinue


80000001008

while(number!=0)





*/
