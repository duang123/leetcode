#include<vector> 
#include<iostream>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
        if(digits.empty())return vector<int>{1};
        vector<int>ret(digits.size()+1);
        int flag=0,tmp=0;
        for(int i=digits.size()-1;i>=0;--i){
            if(i==digits.size()-1)tmp=digits[i]+1+flag;
            else tmp=digits[i]+flag;
            if(tmp==10){ret[i+1]=0;flag=1;}
            else {ret[i+1]=tmp;flag=0;}
        }
        if(flag==1)ret[0]=1;
        else ret.erase(ret.begin());
        return ret;
    }

int main(){
	vector<int>v{9,9,9,9,9};
	auto ret=plusOne(v);
	for(auto i:v)cout<<i<<",";
	cout<<endl;
	return 0;
}
