#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
     
    void rotateArr(int arr[], int d, int n){
        int temp[n];
        int j=0;
        for(int i=d;i<n;i++){
            temp[j]=arr[i];
            j++;
        }
        for(int i=0;i<d;i++){
            temp[j]=arr[i];
            j++;
        }
        j=0;
        for(int i=0;i<n;i++){
            arr[i]=temp[j];
            j++;
        }
    }
};


int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    
	    ob.rotateArr(arr, d,n);
	    
	  
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}