/*
http://ac.jobdu.com/problem.php?pid=1506
题目很有意思啊，我是完全没思路，百度了一下
看这里 http://www.cnblogs.com/lzmfywz/archive/2013/04/22/3036370.html
觉得最简单的就是利用&&短路特性实现的 
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
