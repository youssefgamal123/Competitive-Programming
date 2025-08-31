#include <iostream>
#include <string>
#include <vector>
using namespace std;




    bool isVowel (char c){
        vector<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};


        for (char v : vowels) {
            if (c == v) return true;
        }
        return false;



    }





    int maxVowels(string s, int k) {


        int left_ptr = 0;
        int right_ptr = 0;
        int vowels = 0;
        int max_vowels = 0;

        while (right_ptr < k ){

            if ( isVowel  (s[right_ptr])  ){
                vowels++;
            }
            right_ptr++;
        }
        max_vowels = vowels;



        while(right_ptr < s.size()){
            if (isVowel(s[right_ptr])) vowels++;
            if (isVowel(s[left_ptr])) vowels--;
            left_ptr++;
            right_ptr++;
            max_vowels = max(max_vowels, vowels);


        }


        return max_vowels;

    }


