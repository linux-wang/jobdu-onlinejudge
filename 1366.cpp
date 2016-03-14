/*
http://ac.jobdu.com/problem.php?pid=1366
�Լ���ʼ����vectorʵ�֣����������д���˼·����û��ʲô���⣬����������vector��queue��˳���ǲ�һ����
���˿�˼·�������Լ��Ǵӳ�ջ��������ģ��������鷳�ˣ��������ջ���￪ʼ�����ͼ򵥶���
��������ջ��Ȼ���ж��ǲ���topԪ�غͳ�ջ˳������Ԫ����ȣ�������ջ
�������ѹջ��ֱ����ջ��Ϊ�� 
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
