/*
http://ac.jobdu.com/problem.php?pid=1369
这个是真不会做了 ==。看了解答
递归操作 
*/

/*
 * Author:  Corey Huang
 * Created Time:  2014?06?07? ??? 16?33?41?
 * File Name: 1369_1.cpp
 */
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
vector<string> svec;
vector<string>::iterator iter;
void permutation(string &s, size_t beg, size_t end) {
        size_t i;
        if (beg == end -1)
                svec.push_back(s);
        else {
                for (i = beg; i != s.size(); ++i) {
                        swap(s[i], s[beg]);
                        permutation(s, beg+1, end);
                        swap(s[beg],s[i]);
                }
        }
}
int main() {
        string s;
        while (cin >> s) {
                svec.resize(0);
                permutation(s, 0, s.size());
                sort(svec.begin(), svec.end());
                vector<string>::iterator end_unique = unique(svec.begin(),svec.end());
        for (iter = svec.begin(); iter != end_unique; ++iter)
            //cout << *iter << endl;
                        printf("%s\n",(*iter).c_str());
        }
    return 0;
}
