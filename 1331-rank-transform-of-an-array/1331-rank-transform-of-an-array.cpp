class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
      vector<int>s=arr;
     
      sort(s.begin(),s.end());
     s.erase(unique(s.begin(), s.end()), s.end());
      vector<int>ans(arr.size());
     for(int i=0;i<arr.size();i++){
        ans[i]=lower_bound(s.begin(),s.end(),arr[i])-s.begin()+1;
     }
     return ans;
    }
};