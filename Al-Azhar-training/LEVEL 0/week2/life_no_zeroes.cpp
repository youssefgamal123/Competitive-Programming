#include <iostream>
#include <string>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int sum_with_zeroes= n1+n2;

    // Summation without zeroes
    // Convert two numbers into strings and remove zeroes from them and then sum the two numbers
    // Then check if the summations are equal

    string num1Str = to_string(n1);
    string resultStr = "";
    for (char digit : num1Str) {
        if (digit != '0') {
            resultStr += digit;
        }
    }

    string num2Str = to_string(n2);
    string result2Str = "";
    for (char digit : num2Str) {
        if (digit != '0') {
            result2Str += digit; // Fix: Append to result2Str instead of resultStr
        }
    }



    int num1_without_Zeroes = stoi(resultStr);
    int num2_without_Zeroes = stoi(result2Str);


int result = num1_without_Zeroes + num2_without_Zeroes;


/*
    string num3Str = to_string(result);
    string result3Str = "";
    for (char digit : num2Str) {
        if (digit != '0') {
            result3Str += digit; // Fix: Append to result2Str instead of resultStr
        }
    }

*/
//int result_without_zeroes=stoi(result3Str);






  if (result == sum_with_zeroes)
  cout<<"YES";
  else
  cout<<"No";






    return 0;
}
