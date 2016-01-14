//You can find the exercise on http://ac.jobdu.com/problem.php?pid=1510
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
	string s;
	getline(cin,s);
	
	vector<string> v;
	string s1;
	for(string::iterator it=s.begin();it!=s.end();it++)
	{
		if(*it!=' ')
		{
			s1.push_back(*it);
		}
		else
		{
			v.push_back(s1);
			s1.clear();
		}
			
	}
	v.push_back(s1);
	
	s.clear();
	for(int i=0;i<v.size()-1;i++)
	{
		s=s+v[i];
		s=s+"%20";
	}
	//cout<<v[v.size()-1];
	s=s+v[v.size()-1];
	cout<<s;	
	
	
	
//	cout<<s<<endl;
}
