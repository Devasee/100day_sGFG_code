//anagram
#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    // Function is to check whether two strings are anagrams of each other or not.
    bool isAnagram(string a, string b) {
        // Your code here
        map<char, int> m;

        // Increment count for each character in string a
        for (char c : a) {
            m[c]++;
        }

        // Decrement count for each character in string b
        for (char c : b) {
            // Check if the character is not present in map or its count is already 0
            if (m.find(c) == m.end() || m[c] == 0) {
                return false;
            }

            m[c]--; // Decrement the count for the character
        }

        // Check if all characters in a are used up in b and vice versa
        for (const auto &pair : m) {
            if (pair.second != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solution;

    // Test cases
    cout << solution.isAnagram("listen", "silent") << endl;  // Output: 1 (true)
    cout << solution.isAnagram("hello", "world") << endl;    // Output: 0 (false)

    return 0;
}
