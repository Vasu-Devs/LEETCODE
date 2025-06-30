class Solution {
public:
    string longestPrefix(string s) {

    // ##############MLE###############
    //     int a=-1;
    //     int n=s.length();
    //     for(int l=1;l<n;l++){
    //         string pf=s.substr(0,l);
    //         string sf=s.substr(n-l,l);
            
    //         if(pf==sf){
    //             a=l;
    //         }
        
    //     }
    //     if(a==-1)
    //         return "";
    //     return s.substr(0,a);
    // }
    // ###########TLE##############
    // int n=s.length();
    // int m=0;
    // for(int l=1;l<n;l++){
    //     bool f=true;
    //     for(int i=0;i<l;i++){
    //         if(s[i]!=s[n-l+i]){
    //             f=false;
    //             break;
    //         }
    //     }
    //     if(f)
    //         m=l;
    // }
    // return s.substr(0,m);

    // using LPS array

    int n=s.length();
    vector<int> lps(n,0);
    int len=0;
    int i=1;

    while(i<n){
        if(s[i]==s[len]){
            len++;
            lps[i++]=len; 
        }
        else{
            if(len!=0)
                len=lps[len-1];
            else
            lps[i++]=0;
        }
    }
    return s.substr(0,lps[n-1]);
    }
};