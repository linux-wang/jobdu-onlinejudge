//http://ac.jobdu.com/problem.php?pid=1511
//֮ǰ��listʵ�ֵģ�������һ����structʵ��һ�°�
//�����Լ��ܲ���ʵ��һ������
 
#include<iostream>
#include<malloc.h>
using namespace std; 

struct Node{
	int num;
	struct Node *next;
};

int main(void)
{
	struct Node *head;
	head = NULL;
	struct Node *tail;
	tail = head;

	int n;
	cin >> n;
	while (n != -1)
	{
		struct Node *p=(struct Node *)malloc(sizeof(struct Node));
		p->num = n;
		p->next = NULL;

		if (head == NULL)
		{
			head = p;
			tail = p;
			//head=&node; 
		}
		else
		{
			tail->next = p;
			tail = tail->next;
		}
		//	cout<<(*tail).num<<endl;
		cin >> n;
	}

	struct Node *p;
	p = head;
//	int i = 1;
	while (p != NULL)
	{
		//cout << i++;
		cout << (*p).num << " ";
		p = p->next;
	}

}
