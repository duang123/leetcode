class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()&& haystack.empty())return 0;
        if(haystack.empty()||haystack.size()<needle.size())return -1;
        for(int i=0;i<=haystack.size()-needle.size();i++){
            int j=0;
            for(;j!=needle.size();++j){
                if(needle[j]!=haystack[i+j])break;
            }
            if(j==needle.size())return i;
        }
        return -1;
    }
    
    /*
    int strStr(const string& haystack, const string& needle) {
        if(haystack.empty()&&needle.empty())return 0;
        if(haystack.empty())return -1;
        if(needle.empty())return 0;
        auto m=needle.size(),n=haystack.size();
        if(m>n)return -1;
        int i=0;
        while(i<=n-m){
            if(haystack.substr(i,m)==needle)
                    return i;
             ++i;
             continue;
        }
        return -1;
    }
    
    */
};
