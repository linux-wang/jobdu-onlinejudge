/*
url:http://ac.jobdu.com/problem.php?pid=1390
和变态跳是一个思路 
*/

#include<iostream>
using namespace std;

int num(int n)
{
	if(n==2)
		return 2;
	else
	{
		if(n==3)
			return 3;
		else
			return num(n-1)+num(n-2);
	}
}

int main(void)
{
	int n;
	cin>>n;
	cout<<num(n)<<endl;
}
