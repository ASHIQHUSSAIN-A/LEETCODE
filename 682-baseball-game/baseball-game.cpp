class Solution {
public:
    int calPoints(vector<string>& operations) {
    vector<int>res;
    int sum=0;
    for(int i=0;i<operations.size();i++){
        if(operations[i]=="+"){
          int ans = res[res.size() - 1] + res[res.size() - 2];
            res.push_back(ans);
        }
        else if(operations[i]=="D"){
            int ans=res.back()*2;
            res.push_back(ans);
        }
        else if(operations[i]=="C"){
            res.pop_back();
        }
        else
        {
            res.push_back(stoi(operations[i]));
        }
    }
    for(auto i:res){
    sum+=i;
    }
    return sum;    
    }
};