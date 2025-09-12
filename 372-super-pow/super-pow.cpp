class Solution {
public:
    int superPow(int a, vector<int>& b) {
        // Euler Totient Function
        if(a==1) return 1;
        int n=0;
        for(int x: b) n=(n*10+x)%1140;

        if(n==0) n+=1140;
        int ans=1;
        while(n>0){
            if(n%2) {ans=(ans*a)%1337 ; n--;}
            else{a=(a*1ll*a)%1337 ; n/=2;}
        }
        return ans;
    }
};