//http://ac.jobdu.com/problem.php?pid=1511
//开始以为要真的自己再实现一下链表，后来想起来好像有list，然后就顺带复习了一下怎么用
//说实话，省事不是一星半点 
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
