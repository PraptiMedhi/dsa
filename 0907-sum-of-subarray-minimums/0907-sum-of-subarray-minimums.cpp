class Solution {
        private:
    vector<int> nextsmallerelement(vector<int> arr,int n){
        stack<int>s;
     
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            int curr=arr[i];
            while(!s.empty() && arr[s.top()]>=curr){
                s.pop();
            }
            ans[i]=s.empty()?n:s.top();
            s.push(i);
        }
        return ans;
    }
       vector<int> prevsmallerelement(vector<int> arr,int n){
     stack<int>s;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int curr=arr[i];
            while(!s.empty() && arr[ s.top()]>curr){
                s.pop();
            }
             ans[i]=s.empty()?-1:s.top();
            s.push(i);
        }
        return ans;
    }
public:
    int sumSubarrayMins(vector<int>& arr) {
        int total=0;
        int  mod=1e9+7;
        int n=arr.size();
        vector<int>next(n);
        next=nextsmallerelement(arr,n);

        vector<int> prev(n);
        prev=prevsmallerelement(arr,n);
        for(int i=0;i<n;i++){
          int   left=i-prev[i];
           int  right=next[i]-i;
            total=(total+(left*right*1LL*arr[i])%mod)%mod;
        }
        return total;
    }
};