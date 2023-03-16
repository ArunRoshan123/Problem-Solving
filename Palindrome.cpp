# Palindrome
#include<iostream>
using namespace std;
class Solution {
public:
    void isPalindrome(int x) {
        int temp;
        temp=x;
        int remainder, reverse=0;
    while (x != 0)
    {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x/= 10;
    }
    if(reverse==temp){
        cout<< "true";}
    else{
    cout<< "false";
    }
    }
};
int main()
{
    int x;
    cin>>x;
    Solution s;
    s.isPalindrome(x);
    return 0;
}
