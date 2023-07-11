// CodingNinja Problem of the day 11.07.2023

// You are given a binary string 'STR', containing only zeroes and
//  ones. This string does not contain any leading zero.
// Your task is to determine if this string contains at most one
//  contiguous segment of ones.


#include <iostream>
#include <string>
using namespace std;

bool isAtMostOneSegment(string str) {
    int segmentCount = 0;
    int i = 0;

    while (i < str.length()) {
        if (str[i] == '1') {
            // Found the start of a segment
            segmentCount++;

            // Move to the end of the segment
            while (i < str.length() && str[i] == '1') {
                i++;
            }
        } else {
            i++;
        }
    }
    // return segmentCount <= 1;

    if (segmentCount <= 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string str;
    cout << "Enter the Binary String:\n";
    cin >> str;

    bool result = isAtMostOneSegment(str);

    cout << (result ? "Yes" : "No") << endl;

    return 0;
}
