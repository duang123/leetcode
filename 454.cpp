#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;

int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D){
	int count=0;
	unordered_map<int,int>m;
	for(auto i:A)
	  for(auto j:B)
	    ++m[i+j];
	for(auto i:C)
	  for(auto j:D)
	    count+=m[0-i-j];
	return count;
}

int main(){
	vector<int>A{1,2};
	vector<int>B{-2,-1};
	vector<int>C{-1,2};
	vector<int>D{0,2};
	cout<<fourSumCount(A,B,C,D)<<endl;
	return 0;
}
