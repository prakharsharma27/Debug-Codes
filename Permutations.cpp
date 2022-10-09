#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   void fun( vector<vector<int>>&ans,int i,vector<int>&nums)
   {
     if(i>=nums.size())
     {
         ans.push_back(nums);return ;
     }
       
    for(int j=i;j<nums.size();j++)
    {
        swap(nums[i],nums[j]);
        fun(ans,i+1,nums);
        swap(nums[i],nums[j]);
    }
     
       
       
       
} 
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int>v;
      //  int k=nums.size();
     //   vector<bool>map(nums.size(),0);
        int i=0;
      
        fun(ans,i,nums);
        
    return ans; 
        
    }
};
