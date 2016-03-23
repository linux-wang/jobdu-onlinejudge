/*
url:http://ac.jobdu.com/problem.php?pid=1361
*/

#include<iostream>
#include<stack>
#include<string>
using namespace std;



int main(void)
{
	string s;
	getline(cin,s);
	
	stack<string> s2;
	
	string s1;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=' ')
		{
			s1.push_back(s[i]);
		}
		else
		{
			s2.push(s1);
			s1.clear();
		}
	}
	s2.push(s1);
	s1.clear();
	
	while(!s2.empty())
	{
		cout<<s2.top()<<" ";
		s2.pop();
	}
	

}
