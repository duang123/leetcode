#include<iostream>
using namespace std;

struct ListNode{
	ListNode* next,
	int val;
	ListNode(int val):next(nullptr),val(val){}
};

ListNode* removeNthFromEnd(ListNode* head, int n){
	ListNode** terminal=&head,*iter=head;
	for(int i=1;i!=n;++i)iter=iter->next;
	while(iter->next!=nullptr){
		terminal=&((*terminal)->next);
		iter=iter->next;
	}	
	*terminal=*(iterminal)->next;
	return head;
}

int main(){
	
}
