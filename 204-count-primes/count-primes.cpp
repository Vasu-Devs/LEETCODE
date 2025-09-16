class Solution {
public:
    int countPrimes(int n) {
        //Usisng  Sieve of Eratosthenes Algorithm
        if(n<=2)
            return 0;
        
        vector<bool> isP(n,true);
        isP[0]=isP[1]=false;
        for(int i=2;i*i<n;i++){
            if(isP[i]){
                for(int j=i*i;j<n;j+=i){
                    isP[j]=false;

                }
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(isP[i])
                c++;
        }
        return c;
    }
};