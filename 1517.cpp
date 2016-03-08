/*http://ac.jobdu.com/problem.php?pid=1517
找链表倒数第k个元素，2个指针遍历，第二个先走k个，然后一起走
第二个到末尾的时候则第一个就是倒数第k个 
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
