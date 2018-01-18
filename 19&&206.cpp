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

ListNode* reverse(ListNode* head){
	if(head==nullptr || head->next==nullptr)return head;
	auto l=reverse(head->next);
	head->next->next=head;
	head->next=nullptr;
	return l; 
}

ListNode* reverseIter(ListNode* head){
	auto pre=nullptr;
	while(head!=nullptr){
		auto t=head->next;
		head->next=pre;
		pre=head;
		head=t;
	}

	ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head==nullptr||head->next==nullptr||m>=n) return head;
        ListNode dummy(-1);dummy.next=head;
        int i=0;
        auto left_l=&dummy;
        for(;i<m-1;++i)left_l=left_l->next;
        auto cur=left_l->next,left_r=cur;ListNode*prev=nullptr;
        ++i;
        for(;cur&&i<=n;++i){
        	auto tmp=cur->next;
        	cur->next=prev;
        	prev=cur;
        	cur=tmp;
		}
		left_l->next=prev;left_r->next=cur;
		return dummy.next;
    }

int main(){
	
}
