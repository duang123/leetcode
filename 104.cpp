#include<iostream>
#include<queue>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  int maxDepth(TreeNode* root){
  	//first one dfs
  	//return root==nullptr? 0:max(maxDepth(root->left),maxDepth(root->right))+1;
  	//second one bfs
  	if(root==nullptr)return 0;
  	queue<TreeNode*>q;
  	int ret=0;
  	q.push(root);
  	while(!q.empty()){
  		++ret;
  		for(int i=0,n=q.size();i<n;++i){
  			auto t=q.front();
  			q.pop();
  			if(t->left)q.push(t->left);
  			if(t->right)q.push(t->right);
		  }
	  }
	  return ret;
  	
  }
int main(){
	return 0;
}
