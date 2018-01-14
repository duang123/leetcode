#include<string> 
#include<iostream>
using namespace std;

bool isPalindrome(string s) {
        if(s.empty())return true;
        const int sz=s.size();
        for(int i=0,j=sz-1;i<j;++i,--j){
            while(!isalnum(s[i])&& i < j)++i;
            while(!isalnum(s[j])&& i < j)--j;
           // if(i>=j)return true;
            if(toupper(s[i])!=toupper(s[j]))return false;
            
        }
        return true;
    }
    
int main(){
	if(isPalindrome("......a....."))cout<<"true"<<endl;
	else cout<<"false"<<endl; 
	return 0;
}
