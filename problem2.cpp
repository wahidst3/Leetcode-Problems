 Problem: Find the First Non-Repeating Character
  Solution:

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "leetcode";
    int count[26] = {0};

    for (char c : s)
        count[c - 'a']++;

    for (int i = 0; i < s.size(); i++) {
        if (count[s[i] - 'a'] == 1) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}

what i learned:
working with characters and ascii codes like how we can use ascii code to track the occurance of each character.it took 20 minutes and used ai as well
