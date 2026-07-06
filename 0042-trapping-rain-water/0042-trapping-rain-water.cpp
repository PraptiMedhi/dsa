class Solution {
public:
    int trap(vector<int>& height) {
       int lmin=0;
       int rmin=0;
       int total=0;
       int l=0;
       int r=height.size()-1;
       while(l<=r){
        if(height[l]<=height[r]){
            if(lmin>height[l]){
                total= total+lmin-height[l];
            }
            else{
                lmin=height[l];
               
            }
             l=l+1;
        }
        else{
            if(rmin>height[r]){
                total+=rmin-height[r];
            }
            else{
                rmin=height[r];
               
            }
             r=r-1;
        }
       }
       return total;
    }
};