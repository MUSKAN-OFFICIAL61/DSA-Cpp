//BY USING STACK

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s;
    cin >> s;

    stack<char> st;

    for(char ch : s) {

        if(!st.empty() && st.top() == ch) {
            st.pop();
        }
        else {
            st.push(ch);
        }
    }

    string ans = "";

    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans;

    return 0;
}