#include<iostream>
using namespace std;

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