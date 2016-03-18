/*
url:http://ac.jobdu.com/problem.php?pid=1352
*/

#include<iostream>
#include<vector>
using namespace std;

int get_min(vector<int> v)
{
	int min=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[min]>v[i])
		{
			min=i;
		}
	}
	return min;
}

void get_num(vector<int> v,int s)
{
	vector<int> v1,v2,v3;
	
	
	for(int i=0;i<v.size()-1;i++)
	{	
		for(int j=i+1;j<v.size();j++)
		{
			if((v[i]+v[j])==s)
			{
				v1.push_back(v[i]);
				v2.push_back(v[j]);
				v3.push_back(v[i]*v[j]);
			}
		}
	}
	
	int min;
	min=get_min(v3);
	
	if(v1.size()==0)
	{
		cout<<"-1 -1"<<endl;
	}
	else
	{
	
	if(v1[min]>v2[min])
	{
		cout<<v2[min]<<" "<<v1[min]<<endl;
	}
	else
	{
		cout<<v1[min]<<" "<<v2[min]<<endl;
	}
}
}

int main(void)
{
	int m,n;
	vector<int> v;
	
	cin>>m>>n;
	
	for(int i=0;i<m;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);	
	}

	get_num(v,n);
}
