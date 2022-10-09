/*
Find the length of longest common substring

Name : Bhawana
Age : 22

*/

/*Input 
string 1 : abcd
string 2 : abghed
Output : 2
*/

#include<bits/stdc++.h>
using namespace std;
int longest_common_substring(string s1,string s2)
{
    int n=s1.length(),m=s2.length();
    int dp[n+1][m+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
        }
    }
    int maxi=INT_MIN;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
                maxi=max(dp[i][j],maxi);
            }
            else
                dp[i][j]=0;
        }
    }
    return maxi;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<longest_common_substring(s1,s2);
}
