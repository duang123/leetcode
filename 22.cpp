#include<iostream>
#include<string>
#include<vector>
using namespace std;

void geneParenthesis_Helper(vector<string>&ret,string str,int left,int right){  //回溯的关键在于str是值传递！！！ 
	if(left==0 && right==0){
		ret.push_back(str);
		cout<<"push "<<str<<" into ret"<<endl;
		return ;
	}
	if(left>0)geneParenthesis_Helper(ret,str+"(",left-1,right);
	if(left<right)geneParenthesis_Helper(ret,str+")",left,right-1);
}

vector<string> generateParenthesis(int n){
    if(n<=0)return vector<string>{};
    vector<string>ret;
    geneParenthesis_Helper(ret,"",n,n);
    return ret;
}

int main(){
	auto ret=generateParenthesis(3);
	for(auto i:ret)cout<<i<<",";
	cout<<endl;
	return 0;
}
