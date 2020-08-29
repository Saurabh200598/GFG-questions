#include <iostream>
#include<string>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int j = s.length();
	    for(int i=s.length()-1;i>=0;i--)
	    {
	       if(s[i]=='.')
	       {
	       	for(int k = i+1;k<j;k++)
	       	{
	       	cout<<s[k];
	       	}
	       	cout<<".";
	       	j = i;
		   }
	    }
	for(int i =0;i<j;i++)
	cout<<s[i];
	cout<<endl;
	    
	}
	return 0;
}
