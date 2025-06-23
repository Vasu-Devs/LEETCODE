class Solution {
public:
    bool isHappy(int n) {
    int f=0,s=0,i=0;
    int t=n;
    if( n==1 || n==7) return true;
    if( n<10) return false;
    else{

    while(t){
        int a=pow(t%10,2);
        f+=a;
        t=t/10;
    }  
    return isHappy(f);
    }
    }
};