#include <iostream>
#include <set>
using namespace std;


int main () {



    set <int> nums;
    string query_type;
    int queryTotal;
    cin >> queryTotal;

    int x;

    while (queryTotal--) {
        cin >> query_type;
        if (query_type == "insert") {
            cin >> x;
            nums.insert(x);
        }

        else if (query_type=="find") {
            cin >>x;
            auto it = nums.find(x);

            if (it != nums.end()) {
                cout << "found"<<endl;
            }
            else {
                cout << "not found"<<endl;
            }


        }
        else if (query_type=="lower_bound"){
            cin >>x;
            auto it = nums.lower_bound(x);

            if (it != nums.end()) {
                cout << *it<<endl;
            }
            else {
                cout << "-1"<<endl;
            }

        }

        else if (query_type=="upper_bound") {

            cin >>x;
            auto it = nums.upper_bound(x);

            if (it != nums.end()) {
                cout << *it<<endl;
            }
            else {
                cout << "-1"<<endl;
            }

        }



    }











    return 0;




}