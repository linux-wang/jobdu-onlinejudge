//http://ac.jobdu.com/problem.php?pid=1511
//��ʼ��ΪҪ����Լ���ʵ��һ����������������������list��Ȼ���˳����ϰ��һ����ô��
//˵ʵ����ʡ�²���һ�ǰ�� 
#include<iostream>
#include<list>
using namespace std;

int main(void)
{
	list<int> l;
	int n;
	cin>>n;
	
	while(n!=-1)
	{
		l.push_back(n);
		cin>>n;
	}
	
	for(list<int>::reverse_iterator rit=l.rbegin();rit!=l.rend();rit++)
	{
		cout<<*rit<<endl;
	}
}
