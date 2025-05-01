class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        vector<int> a;
        int i=0,j=0;
        while(i<m && j<n){
            if(n1[i]<=n2[j]){
                a.push_back(n1[i]);
                i++;
            }
            else{
                a.push_back(n2[j]);
                j++;
            }
        }
        while(i<m){
                a.push_back(n1[i]);
                i++;
        }
        while(j<n){
                a.push_back(n2[j]);
                j++;
        }
        n1=a;
    }
};