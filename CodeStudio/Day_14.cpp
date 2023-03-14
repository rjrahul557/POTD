#include<iostream>
using namespace std;

//easy
string toHex(int nums) {
	unsigned int num = nums;

	string digits = "0123456789ABCDEF";
	string res="";
	while(num>0)
	{
		int rem = num%16;
		res += digits[rem];
		num=num/16;
	}
	reverse(res.begin(),res.end());
	return res;
}

//medium->circular game
int solve(int n, int k)
{
    if(n==1)return 0;
    

    return (solve(n-1,k)+k)%n;
}
int predictTheWinner(int n, int k) {
    
    int ans = solve(n,k);
    return ans+1;
}