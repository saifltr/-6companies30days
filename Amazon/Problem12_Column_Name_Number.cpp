#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    string colName (long long int n)
    {
        long long int temp = n;
       
       int numOfChars=1;
       while(temp>pow(26,numOfChars))
       {
           temp-=pow(26,numOfChars);
           numOfChars++;
       }
       
       string ans(numOfChars, 'A');
       
       for(int i=0 ; i<ans.length() ; i++)
       {
           temp = n;
           for(int j=0 ; j<ans.length() ; j++)
           {
               if(j==i)
               {
                   continue;
               }
               
               temp-=( pow(26,ans.length()-j-1)*(ans[j]-64) );
           }
           
           int value = floor(temp/pow(26,ans.length()-i-1));
           ans[i] = value+64;
       }
       
       return ans;
    }
};


int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}
