#include <bits/stdc++.h>
using namespace std;
class Solution{
  
    public:
    vector<int> leaders(int a[], int n){
        
         vector<int> arr;
        int x=a[n-1];
        arr.push_back(x);
        
        for(int i=n-2;i>=0;i--)
        {
            if(x<=a[i])
            {
                x=a[i];
                arr.push_back(x);
            }
        }
        
        reverse(arr.begin(),arr.end());
        return arr;
        
        
    }
};
int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}