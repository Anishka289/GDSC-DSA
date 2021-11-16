//link of the ques :https://leetcode.com/problems/search-a-2d-matrix-ii/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        std::vector< std::vector<int> >::const_iterator row; 
    std::vector<int>::const_iterator col; 

    for (row = matrix.begin(); row != matrix.end(); ++row)
    { 
         for (col = row->begin(); col != row->end(); ++col)
         { 
             if(*col==target)
                 return true;
         } 
    } 
        return false;
    }
};