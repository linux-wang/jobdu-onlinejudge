/*
http://ac.jobdu.com/problem.php?pid=1372
�����뵽��ֻ�б����� 
ͨ��ѭ���õ�����Ȼ��ȡ���ֵ��ͬʱ��¼λ�� 
����͵��û��дȫ�����λ�õ��Ǹ��ͺܼ��� ==�� 
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void get_max(vector<int> v)
{
	vector<int> v1��;
	for(int i=0;i<v.size();i++)
	{
		int sum;
		int max;
		
		for(int j=0;j<v.size();j++)
		{
			sum=0;
			max=sum;
			for(int k=i;k<=j;k++)
			{
				sum+=v[k];
				
				if(max<sum)
					max=sum;
			}
			
		}
		v1.push_back(max);
	}
	
	sort(v1.begin(),v1.end());
	cout<<v1[v1.size()-1]<<endl; 

}

int main(void)
{
	vector<int> v; 
	for(int i=0;i<5;i++)
	{
		v.push_back(i);
	}
	get_max(v);
}
