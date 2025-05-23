class Solution {
public:
    int maxProduct(int n) {
    vector<int>v;
    int res=0;
    while(n>0){
     int digit=n%10;
     v.push_back(digit);
     n=n/10;
    }
    sort(v.rbegin(),v.rend());
    res=v[0]*v[1];
    return res;    
    }
};