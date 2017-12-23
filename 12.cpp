#include<string>
#include<iostream>
#include<vector>
using namespace std;

string intToRoman(int num){
	vector<int>vi{1000,900,500,400,100,90,50,40,10,9,5,4,1};
	vector<string>vs{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	string ans="";
	for(int i=0;i!=vi.size();++i){
		while(num>=vi[i]){
			num-=vi[i];
			ans.append(vs[i]);
		}
	}
	return ans;
}
int main(){
	cout<<intToRoman(999)<<endl;
	return 0;
}
