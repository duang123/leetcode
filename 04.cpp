#include<iostream>
#include<limits>
#include<vector>
using namespace std;

double findKth(vector<int>& nums1, vector<int>& nums2,int a_start,int b_start,int k){
	//边界条件，判断是否为空 
	if(a_start>=nums1.size())return nums2[b_start+k-1];
	if(b_start>=nums2.size())return nums1[a_start+k-1];
	//base case
	if(k==1) return min(nums1[a_start],nums2[b_start]);
	int new_a=a_start+k/2-1>=nums1.size()? numeric_limits<int>::max():nums1[a_start+k/2-1];
	int new_b=b_start+k/2-1>=nums2.size()? numeric_limits<int>::max():nums2[b_start+k/2-1];
	if(new_a>new_b){
		return findKth(nums1,nums2,a_start,b_start+k/2,k-k/2);
	}else return findKth(nums1,nums2,a_start+k/2,b_start,k-k/2);
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	int len=nums1.size()+nums2.size();
	if(len%2==1)return findKth(nums1,nums2,0,0,len/2+1);
	else return (findKth(nums1,nums2,0,0,len/2)+findKth(nums1,nums2,0,0,len/2+1))/2.0;        
}

int main(){
	return 0;
}
