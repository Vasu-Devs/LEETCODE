#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        // string pal= to_string(x);
        // string pal1=pal;
        // reverse(pal1.begin(),pal1.end());
        // if(pal.compare(pal1)==0){
        //     return 1;
        // }
        // else{
        //     return 0;;
        // }
        if(x<0){
            return 0;
        }
        unsigned int pal=0,temp=x;
        while(temp){
            pal=pal*10+temp%10;
            temp/=10;
        }
        if(pal==x){
            return 1;
        }
        return 0;
    }
};