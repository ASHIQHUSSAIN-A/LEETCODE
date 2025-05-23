class Solution {
public:
    string truncateSentence(string s, int k) {
    istringstream iss(s);
    string str;
    vector<string>v;
    string t;
    while(iss>>str){
        v.push_back(str);
    }
    for(int i=0;i<k;i++){
    t+=(v[i]);
    if(i != k-1){
        t+=" ";
    }
    }
    return t;  
    }
};