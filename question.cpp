#include <bits/stdc++.h>

using namespace std;

int main() {
    
        string postfix;
        cout << "enter postfix expression: ";
        cin >> postfix;
        stack < int > st;
        for (char ch: postfix) {

            if (isdigit(ch)) {
                st.push(ch - '0');
            }
            else {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();

                if (ch == '+') {
                    st.push(a + b);
                }
                else if (ch == '-') {
                    st.push(a - b);
                }
                else if (ch == '*') {
                    st.push(a * b);
                }
                else if (ch == '/') {
                    st.push(a / b);
                }
            }
        }

        cout << "Answer: " << st.top() << endl;

        return 0;
}