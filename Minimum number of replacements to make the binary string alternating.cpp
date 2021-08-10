/*
Approach: For the string str, there can be two possible solutions. Either the resultant string can be 
 

Type 1: 010101… or
Type 2: 101010…

In order to find the minimum replacements, count the number of replacements to convert the string in type 1 
and store it in count then minimum replacement will be min(count, len – count) where len is the length of the string. 
len – count is the number of replacements to convert the string in type 2.
*/

#include <bits/stdc++.h>
using namespace std;
 
// Function to return the minimum number of
// characters of the given binary string
// to be replaced to make the string alternating
int minReplacement(string s, int len)
{
    int ans = 0;
    for (int i = 0; i < len; i++) {
 
        // If there is 1 at even index positions
        if (i % 2 == 0 && s[i] == '1')
            ans++;
 
        // If there is 0 at odd index positions
        if (i % 2 == 1 && s[i] == '0')
            ans++;
    }
    return min(ans, len - ans);
}
 
// Driver code
int main()
{
    string s = "1100";
    int len = s.size();
    cout << minReplacement(s, len);
 
    return 0;
}
