/*
http://ac.jobdu.com/problem.php?pid=1366
自己开始下用vector实现，后来总是有错误，思路倒是没有什么问题，但是忘记了vector和queue的顺序是不一样的
看了看思路，发现自己是从出栈那里遍历的，这样就麻烦了，如果从入栈那里开始遍历就简单多了
即：先入栈，然后判断是不是top元素和出栈顺序表里的元素相等，相等则出栈
否则继续压栈，直到入栈表为空 
*/

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

bool comp(queue<int> &real, queue<int> &val) {
        stack<int> st;
        while (! real.empty()) {
                st.push(real.front());
                real.pop();
                while (! st.empty() && st.top() == val.front()) {
                        st.pop();
                        val.pop();
                }
        }
        return st.empty();
}

int main(void) {
        int slen, t;
        while (cin >> slen) {
                queue<int> qu_real, qu_val;
                // fill in
                for (int i = 0; i < slen; i++) {
                        cin >> t;
                        qu_real.push(t);
                }
                for (int i = 0; i < slen; ++i) {
                        cin >> t;
                        qu_val.push(t);
                }

                if (comp(qu_real, qu_val)) {
                        cout << "Yes" << endl;
                } else {
                        cout << "No" << endl;
                }       
        }
}
