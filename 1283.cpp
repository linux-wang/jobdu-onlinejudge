/*
http://ac.jobdu.com/problem.php?pid=1283
*/

#include<iostream>
#include<string>
using namespace std;

int get_num(string v)
{	int i=0;
	for(i;i<v.size();i++)
	{
		int count;
		count=0;
		for(int j=0;j<v.size();j++)
		{
			if(v[i]==v[j])
				count++;	
		}
		if(count==1)
		{
			return i;
			break;
		}
	}
	if(i==v.size())
		return -1;
}

int main(void)
{
	while(1)
	{
		string s;
		cin>>s;
		cout<<get_num(s)<<endl;
	}
}
