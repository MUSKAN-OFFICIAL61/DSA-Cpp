#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {

    for(int i = 0; i <= haystack.length() - needle.length(); i++) {

        int j;

        for(j = 0; j < needle.length(); j++) {

            if(haystack[i + j] != needle[j]) {
                break;
            }
        }

        if(j == needle.length()) {
            return i;
        }
    }

    return -1;
}

int main() {

    string haystack, needle;

    cin >> haystack;
    cin >> needle;

    cout << strStr(haystack, needle);

    return 0;
}