#include<iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int height(TreeNode* root){
	if(root==nullptr)return 0;
	int left=height(root->left);
	if(left==-1)	return -1;
	int right=height(root->right);
	if(right==-1)return -1;
	if(abs(left-right)>1)return -1;
	else return max(left,right)+1;
}

bool isBalanced(TreeNode* root){
	if(root==nullptr)return true;
	return height(root)!=-1;
} 

int main(){
	
}
