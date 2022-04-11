class Solution {
public:
   void ss(int ind,int n,vector<vector<int>>&ans,vector<int>&nums,vector<int>&ds)
   {
       if(ind==n)
       {
           ans.push_back(ds);
           return ;
       }
       ds.push_back(nums[ind]);
       ss(ind+1,n,ans,nums,ds);
       ds.pop_back();
         ss(ind+1,n,ans,nums,ds); 
       
   }
    vector<vector<int>> subsets(vector<int>& nums) {
          
         vector<vector<int>>ans;
        vector<int>ds;
        int n=nums.size();
        ss(0,n,ans,nums,ds);
        return ans;
    }
};
