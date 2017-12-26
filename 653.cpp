/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void formVec(TreeNode* r,vector<int>&v){
        if(r!=nullptr){
            formVec(r->left,v);
            v.push_back(r->val);
            formVec(r->right,v);
        }
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        formVec(root,v);
        if(v.empty())return false;
        int i=0,j=v.size()-1;
        int tmp=0;
        while(i<j){
            tmp=v[i]+v[j];
            if(tmp==k)return true;
            else if(tmp>k)--j;
            else ++i;
        }
        return false;
    }
};
