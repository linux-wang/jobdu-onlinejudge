//题目链接： http://ac.jobdu.com/problem.php?pid=1389
//解题思路实际上不是自己想起来的，记得上一题讨论的是有每次1，2可选
//现在改成了1-n可选，所以实际上是一样的
//思路上是一样的，看别人写的思路吧 http://blog.csdn.net/hackbuteer1/article/details/6686747
//这里准备用递归实现 

#include<iostream>
using namespace std;

int bt_jump(int n)
{
	if(n==1||n==0)
		return 1;
	else
	{
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=bt_jump(i);
		}
		return sum;
	}
}

int main(int argc,char *argv[])
{
	int n;
	cout<<"input n:";
	cin>>n;
	cout<<bt_jump(n)<<endl;
}
