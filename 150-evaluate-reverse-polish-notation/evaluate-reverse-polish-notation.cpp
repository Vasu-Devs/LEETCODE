class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        int r=0;
        for(string i : tokens){
            if(i=="+" || i=="-" || i=="/" || i=="*"){
                int e1=stoi(st.top());
                st.pop();
                int e2=stoi(st.top());
                st.pop();
                if (i=="+")
                    st.push(to_string(e2+e1));
                if (i=="-")
                    st.push(to_string(e2-e1));
                if (i=="/")
                    st.push(to_string(e2/e1));
                if (i=="*")
                    st.push(to_string(e2*e1));
            }
            else st.push(i);
        }
        return stoi(st.top());

    }
};