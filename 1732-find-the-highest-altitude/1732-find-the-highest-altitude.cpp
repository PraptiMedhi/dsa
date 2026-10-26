class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v;
        v.push_back(0);
        int sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            v.push_back(sum);
        }
        auto mini=max_element(v.begin(),v.end());
        return *mini;
        
    }
};