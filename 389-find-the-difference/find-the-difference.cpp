class Solution {
public:
    char findTheDifference(string s, string t) {
    int j=0;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    for(int i=0;i<t.size();i++){
        if(s[i]!=t[j]){
            return t[j];
        }
        j++;
    }return 0;    
    }
};