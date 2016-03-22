/*
http://ac.jobdu.com/problem.php?pid=1512
stack s1,s2;s1用来push，s2用来pop，平时存在s1中
pop的时候注意是否为空 
*/

#include<stack>
#include<iostream>
#include<string>
using namespace std;

void q_push(stack<int> &s1,stack<int> &s2,int t)
{
	s1.push(t);
}

void q_pop(stack<int> &s1,stack<int> &s2)
{
	if(s1.empty())
	{
		cout<<"-1"<<endl;
	}
	else
	{
		while(!s1.empty())
		{
			int t;
			t=s1.top();
			s1.pop();
			s2.push(t);
		}
		cout<<s2.top()<<endl;
		s2.pop();
		while(!s2.empty())
		{
			int t;
			t=s2.top();
			s1.push(t);
			s2.pop();
		}
	}
}

int main(void)
{
	stack<int> s1,s2;
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(s=="PUSH")
		{
			int t;
			cin>>t;
			q_push(s1,s2,t);
		}
		else
		{
			q_pop(s1,s2);
		}
	}
}
