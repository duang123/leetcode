#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
/*
int KthSmallest(TreeNode* root,int k){
	stack<TreeNode*>st;
	auto t=root;
	while(!st.empty()||t){
		if(t){
			st.push(t);
			t=t->left;
		}
		else{
			auto tmp=st.top();
			st.pop();
			t=tmp->right;
			if(--k==0)return tmp->val;
		}
	}
	return -1;
}
*/
	int helper(vector<int>& nums,int l,int h){
        auto tmp=nums[l];
        int i=l,j=h+1;
        while(1){
            while(i<h&&tmp>=nums[++i]);
            while(j>l&&tmp<=nums[--j]);
            if(i<j)swap(nums[i],nums[j]);
            else break;
        }
        swap(nums[j],nums[l]);
        return j;
    }
    
    int findKth(vector<int>&nums,int l,int h,int k){
        if(h-l+1<k)return -1;
        auto pivot=helper(nums,l,h);
        auto i=pivot-l+1;
        if(i==k)return nums[pivot];
        else if(i>k){return findKth(nums,l,pivot-1,k);}
        else return findKth(nums,pivot+1,h,k-i);
    }

    int findKthLargest(vector<int>& nums, int k) {
        if(nums.empty()||k>nums.size())return 0;
        random_shuffle(nums.begin(),nums.end());
        return findKth(nums,0,nums.size()-1,nums.size()-k+1);
    }

    
int main(){
	vector<int>v1{1,7,9,5,4,6};
	cout<<findKthLargest(v1,1)<<endl;
	vector<int>v2{1,2};
	cout<<findKthLargest(v2,2)<<endl;
}
