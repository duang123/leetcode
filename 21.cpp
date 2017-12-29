#include<iostream>
#include<limits>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode(int val):next(nullptr),val(val){}
};

ListNode* mergeTwoList(ListNode* l1,ListNode* l2){
	ListNode dummy(numeric_limits<int>::max());
	auto tail=&dummy;
	while(l1 && l2){
		if(l1->val<l2->val){
			tail->next=l1;
			l1=l1->next;
		}else{
			tail->next=l2;
			l2=l2->next;
		}
		tail=tail->next;
		tail->next=nullptr;
	}
	tail->next=l1? l1:l2;
	return dummy.next;
}
int main(){
	return 0;
}
