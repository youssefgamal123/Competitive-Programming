#include <iostream>
#include <vector>
using namespace  std;

int main () {



    int n;
    cin >> n;
    vector <int> cards (n);

    for (int i = 0 ; i < n ;i++) {
        cin >> cards[i];
    }


    int serja_sum = 0;
    int dima_sum = 0;


    int left_ptr=0;
    int right_ptr = n-1;
    bool serja_turn=true;
    int card;

    while (left_ptr<=right_ptr) {

        if (cards[left_ptr]  > cards[right_ptr] ) {
            card = cards[left_ptr];
            left_ptr++;
        }
        else {
            card = cards[right_ptr];
            right_ptr--;
        }


        if (serja_turn) {
            serja_sum+=card;
            serja_turn=false;
        }
        else {
            dima_sum+=card;
            serja_turn = true;
        }

    }

    cout << serja_sum << " " << dima_sum<<endl;




}