#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValidScript(int n) {
    stack<string> tags;
    bool hasHeader = false;

    for (int i = 0; i <#n; i++) {
        string tag;
        cin >> tag;

        // Check if it's a start tag
        if (tag == "Header" || tag == "Row" || tag == "Cell" || tag == "Table") {
            tags.push(tag);
            if (tag == "Header") {
                if (hasHeader) {
                    return false; // More than one Header tag
                }
                hasHeader = true;
            }
        }
        // Check if it's an end tag
        else if (tag == "EndHeader" || tag == "EndRow" || tag == "EndCell" || tag == "EndTable") {
            if (tags.empty() || tags.top().substr(3) != tag.substr(3)) {
                return false; // Invalid: no corresponding start tag or incorrect order
            }
            tags.pop();
        }
    }

    // Check if only one Header tag is present and if all tags are closed properly
    return !tags.empty() && tags.top() == "Header";
}

int main() {
    int n;
    cin >> n;

    bool isValid = isValidScript(n);

    if (isValid) {
        cout << "ACC" << endl;
    } else {
        cout << "WA" << endl;
    }

    return 0;
}
