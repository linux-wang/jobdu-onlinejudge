/*http://ac.jobdu.com/problem.php?pid=1517
����������k��Ԫ�أ�2��ָ��������ڶ�������k����Ȼ��һ����
�ڶ�����ĩβ��ʱ�����һ�����ǵ�����k�� 
*/

#include<list>
#include<iostream>
using namespace std;

void get_k(list<int> l,int n,int k)
{
/*	
*/
	if(k<1||k>n)
	{
		cout<<"NULL"<<endl;
	}
	else
	{
		list<int>::iterator p=l.begin();
		list<int>::iterator q=l.begin();
		for(int i=0;i<k;i++)
		{
			q++;
		}
		for(;q!=l.end();)
		{
			q++;
			p++;
		}
		cout<<*p<<endl;
	}
}

int main(void)
{
	while(1)
	{
		int n,k;
		cin>>n>>k;
		list<int> l;
		for(int i=0;i<n;i++)
		{
			int t;
			cin>>t;
			l.push_back(t);
		}
		get_k(l,n,k);
		l.clear();
	}
}
