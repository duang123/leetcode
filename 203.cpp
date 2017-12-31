#include<iostream>
using namespace std;

struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
 ListNode* removeElements(ListNode* head, int val){
 	ListNode dummy(-1);
 	auto cur=&dummy;
 	while(head!=nullptr){
 		if(head->val!=val){cur->next=head;cur=cur->next;}
 		head=head->next;
	 }
	 cur->next=nullptr;
 }

int main(){
	
	return 0;
}
