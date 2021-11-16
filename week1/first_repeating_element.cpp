//link of the ques :https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=2&query=category[]Arraysdifficulty[]0page2category[]Arrays
class Solution
{
public:
    
    int firstRepeated(int arr[], int n)
    {
         unordered_map<int,int> u;
    for(int i=0;i<n;i++)
    {
        u[arr[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(u[arr[i]]>1)
        {
            return i+1;
        }
    }
    
    return -1;
    }

}
;