class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int r=0;
        for(string i : tokens){
            if(i=="+" || i=="-" || i=="/" || i=="*"){
                int e1=st.top();
                st.pop();
                int e2=st.top();
                st.pop();
                if (i=="+")
                    st.push(e2+e1);
                if (i=="-")
                    st.push(e2-e1);
                if (i=="/")
                    st.push(e2/e1);
                if (i=="*")
                    st.push(e2*e1);
            }
            else st.push(stoi(i));
        }
        return st.top();

    }
};