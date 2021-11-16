//link for the question :https://leetcode.com/problems/reverse-string/

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
     int len = s.size();
        for(int i =0 , j=len-1 ; i<len/2 ; i++ , j--) 
     {
         s[i]=s[i]+s[j];
         s[j]=s[i]-s[j];
         s[i]=s[i]-s[j];   
     }   
        
    }
}