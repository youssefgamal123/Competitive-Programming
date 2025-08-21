
// UPSOLVE

#include <iostream>

int main() {
    std::string s;
    std::cin >> s;

    bool foundAB = false, foundBA = false;

    // Check for "AB" and "BA" without overlapping
    for (size_t i = 0; i < s.length() - 1; ++i) {
        if (!foundAB && s.substr(i, 2) == "AB") {
            foundAB = true;
            i += 1;  // Skip the next character to avoid overlapping
        } else if (!foundBA && s.substr(i, 2) == "BA") {
            foundBA = true;
            i += 1;  // Skip the next character to avoid overlapping
        }

        // If both substrings are found, break out of the loop
        if (foundAB && foundBA) {
            break;
        }
    }

    // Check if both substrings are found without overlapping
    if (foundAB && foundBA) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
