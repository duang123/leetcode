#include<stack>
#include<string>
#include<iostream>
using namespace std;

bool isValid(string s){
	stack<char>st;
	for(auto i:s){
		switch(i){
			case '{':
			case '(':
			case '[':
				st.push(i);break;
			case '}':
				if(st.empty() || st.top()!='{')return false;st.pop();break;
			case ']':
				if(st.empty() || st.top()!='[')return false;st.pop();break;
			case ')':
				if(st.empty() || st.top()!='(')return false;st.pop();break;
			
		}
	}	
	return st.empty();
}

int main(){
	string str="()";
	cout<<isValid(str)<<endl;
	return 0;
}
