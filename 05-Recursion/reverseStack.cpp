#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void insertBottom(stack<int> &st, int ele){
        if(st.empty()){
            st.push(ele);
            return;
        }
        int topEle=st.top();
        st.pop();
        insertBottom(st,ele);
        st.push(topEle);
    }
    void reverseStack(stack<int> &st) {
        if(st.empty()){
            return;
        }
        int topEle=st.top();
        st.pop();
        reverseStack(st);
        insertBottom(st,topEle);
    }
};

int main() {
    stack<int> st;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter stack elements (bottom to top): ";
    for(int i = 0; i < n; i++) {
        cin >> x;
        st.push(x);
    }

    Solution obj;
    obj.reverseStack(st);

    cout << "Reversed stack (top to bottom): ";

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}



