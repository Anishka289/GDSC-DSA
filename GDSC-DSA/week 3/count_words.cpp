//link for question : https://practice.geeksforgeeks.org/problems/count-number-of-words1500/1
 #include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
	cin.ignore();
	
	    
	    string s;
        getline(cin,s);
        cout<<countWords(s)<<endl;
	    
}
int countWords(string s)
{
 int count = 0;
   int n = s.length();
   int seenletter =false;
   int i=0;
   while(i<n)
   {
       seenletter =false;
       while (i<n&&isalpha(s[i]))
           {
               seenletter=true;
               i++;
           }
      
      if(s[i]=='\\')
           i+=2;
      else
           i++;   
      if(seenletter==true)
           count++;
   }
   return count;
} 