class Solution {
public:
    bool detectCapitalUse(string s) {
    int count=0;
    for(auto i:s){
        if(isupper(i))
        count++;
    }
    if(count==s.size()||count == 0 ||(count == 1 && isupper(s[0]))){
    return true;
    }
    return false;    
    }
};