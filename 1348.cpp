/*
url:http://ac.jobdu.com/problem.php?pid=1348

*/

#include<vector>
#include<iostream>
using namespace std;

int get_num(vector<int> v)
{
	int num;
	num=0;
	
	for(int i=0;i<v.size()-1;i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(v[i]>v[j])
				num++;
		}
	}
	
	return num;
}

int main(void)
{
	int n;
	cin>>n;
	vector<int> v;
	
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	
	cout<<get_num(v);
}
