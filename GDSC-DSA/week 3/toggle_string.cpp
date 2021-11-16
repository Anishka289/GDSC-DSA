//link for the ques: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/
#include <iostream>

using namespace std;

int main()
 {
	char s[100];
	cin >> s;										
	for(int i =0 ; s[i]!='\0' ;i++)
	{
		if(isupper(s[i]))
		s[i]=tolower(s[i]);
		else
		s[i]=toupper(s[i]);
		
	}		
	cout<<s;
}