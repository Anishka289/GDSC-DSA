//link of the ques : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    int findFirst(vector<int>& nums, int target)
    {
         int ans = -1;
    int s = 0;
    int e = nums.size() - 1;
    while(s <= e){
        int mid =s+ (e-s) / 2;

        if(nums[mid]>=target){
            e=mid-1; }
        else{
            s=mid+1;}
        
        if(nums[mid]==target) 
            ans=mid;
    }
    return ans;
    }
    
     int findLast(vector<int>& nums, int target){
          int ans = -1;
    int s = 0;
    int e = nums.size() - 1;
    while(s <= e){
        int mid =s+ (e-s) / 2;
       
        if(nums[mid]<=target){
            s=mid+1; }
        else{
            e=mid-1;}
        
        if(nums[mid]==target) 
            ans=mid;
    }
    return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
         vector<int>result(2);
         result[0] = findFirst(nums, target);
         result[1] = findLast(nums, target);
         return result; 
        
    }
};