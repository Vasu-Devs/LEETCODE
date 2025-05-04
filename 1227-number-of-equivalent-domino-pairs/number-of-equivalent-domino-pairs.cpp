class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        // int c=0;
        // for(int i=0;i<d.size();i++){
        //     for(int j=i+1;j<d.size();j++){
        //         if((d[i][0]==d[j][0] && d[i][1]==d[j][1]) || (d[i][1]==d[j][0] && d[i][0]==d[j][1]) )
        //         c++;
        //     }
        // }
        // return c;
        unordered_map<int,int> f;
        int c=0;
        for(auto& de:d){
            int a=min(de[0],de[1]);
            int b=max(de[0],de[1]);
            int key=a*10+b;
            c+=f[key];
            f[key]++;
        }
        return c;
    }
};