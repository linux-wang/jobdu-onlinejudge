/*
http://ac.jobdu.com/problem.php?pid=1355
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void poke(vector<int> v,int n)
{
	int s0;
	s0=0;
	int s1;
	s1=0;
	
	sort(v.begin(),v.end());
	for(int i=0;i<v.size()-1;i++)
	{
		int t;
		if(v[i]==0)
		{
			s0++;
		}
		else
		{
			t=v[i+1]-v[i];
			if(t!=1)
			{
				s1+=t;
			}
			
		}
	}
//	cout<<"s0:"<<s0<<"  "<<"s1:"<<s1<<endl;
	if(s1==0)
	{
		cout<<"so lucky"<<endl;
	}
	else
	{
		if((s0>=s1-1)&&(s1!=0))
		{
			cout<<"so lucky"<<endl;
		}
		else
		{
			cout<<"oh my god"<<endl;	
		}
	}
		
}

int main(void)
{
	vector<int> v;
	int n;
	cin>>n;
	while(n)
	{
		for(int i=0;i<n;i++)
		{
			int t;
			cin>>t;
			v.push_back(t);
		}
		poke(v,n);
		v.clear();
		cin>>n;
	}
}
