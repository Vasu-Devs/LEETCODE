class Solution {
public:
    bool isThree(int n) {
        // vector<int> v;
        // for(int i=1;i<=sqrt(n);i++){
        //     if(n%i==0){
        //         v.push_back(i);
        //         if(n/i!=i) v.push_back(n/i);
        //         if(v.size()>3) return false;
        //     }
        // }
        // if(v.size()!=3) return false;
        // return true;

        if(floor(sqrt(n))!=ceil(sqrt(n))) return false;
        int c=0;
        for(int i=1;i*i<n;i++){
            if(n%i==0) c++;
            if(c>1) return false;
        }
        return c==1;
    }
};