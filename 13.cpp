class Solution {
public:
    map<char,int>m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int romanToInt(const string& str) {
        auto n=str.size();
        int i=0;
        auto ret=0;
        
        for(;i<n;++i){
            if(i==0)ret+=m[str[i]];
            if(i){
                if(m[str[i]]>m[str[i-1]]){
                    ret=ret-2*m[str[i-1]]+m[str[i]];
                }else{
                    ret+=m[str[i]];
                }
            }
        }
        return ret;
    }
};
