/*
��Ŀ���ӣ� http://ac.jobdu.com/problem.php?pid=1214
�����ж��Ƿ��ǳ�������ʼ�ҵ��뷨�������ӣ�Ȼ���ж��ǲ���ֻ������������
���������������29���������������ж��ǲ���2��3��̫�鷳��Ȼ����һ������
���� http://www.zybang.com/question/ae859a42ba22e27173be66a934d6ce3f.html
˼·�������ˣ������Լ����ƶϣ�Ҳ�ߵ��������˼·��������
 http://pan.baidu.com/s/1bl8bL0
*/

#include<vector>
#include<iostream>
using namespace std;

int ugly_number(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		while(n%2==0)
		{
			n=n/2;
		} 
		while(n%3==0)
		{
			n=n/3;
		}
		while(n%5==0)
		{
			n=n/5;
		}
		while(n%7==0)
		{
			n=n/7;
		}
		if(n==0)
		{
			return 1;
		}
		if(n==1)
		{
			return 1;
		}
		else
			return 0;
		
	}
}

int main(void)
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=1;i<100;i++)
		if(ugly_number(i))
			v.push_back(i);
	cout<<v[n-1]<<endl;
}
