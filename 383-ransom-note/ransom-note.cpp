class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    map<char,int>m;
    for(auto i:magazine) m[i]++;
    for( auto j:ransomNote){
        if(m[j]==0){
            return false;
        }
        m[j]--;
    }
    return true;
    }
};