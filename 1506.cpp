/*
http://ac.jobdu.com/problem.php?pid=1506
��Ŀ������˼����������ȫû˼·���ٶ���һ��
������ http://www.cnblogs.com/lzmfywz/archive/2013/04/22/3036370.html
������򵥵ľ�������&&��·����ʵ�ֵ� 
*/

#include<iostream>
using namespace std;

int add_fun(int n, int &sum)
{
	n&&add_fun(n-1,sum);
	return sum+=n;
 } 
 
int main(void)
{
	int sum=0;
	int n;
	cin>>n;
	cout<<add_fun(n,sum);
}
