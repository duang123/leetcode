//Permutations
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.empty())return vector<vector<int>>{};
        vector<vector<int>>ret;
        vector<int>tmp;
        helper(ret,tmp,nums);
        return ret;
    }
private:
    void helper(vector<vector<int>>&ret,vector<int>tmp,const vector<int>&nums){
        if(tmp.size()==nums.size()){
            ret.push_back(tmp);
            return ;
        }
        for(int i=0;i<nums.size();++i){
            if(find(tmp.begin(),tmp.end(),nums[i])!=tmp.end())continue;
            tmp.push_back(nums[i]);
            helper(ret,tmp,nums);
            tmp.pop_back();
        }
    }
};
//PermutationsII
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if(nums.empty())return vector<vector<int>>{};
        vector<vector<int>>ret;
        vector<int>tmp;
        vector<bool>used(nums.size(),false);
        sort(nums.begin(),nums.end());
        helper(ret,tmp,nums,used);
        return ret;
    }
private:
    void helper(vector<vector<int>>&ret,vector<int>tmp,const vector<int>&nums,vector<bool>used){
        if(tmp.size()==nums.size()){
            ret.push_back(tmp);
            return ;
        }
        for(int i=0;i<nums.size();++i){
            if(used[i]) continue;
            if(i>0 &&nums[i-1]==nums[i] && !used[i-1]) continue;
            tmp.push_back(nums[i]);
            used[i]=true;
            helper(ret,tmp,nums,used);
            tmp.pop_back();
            used[i]=false;
        }
        
    }
};
