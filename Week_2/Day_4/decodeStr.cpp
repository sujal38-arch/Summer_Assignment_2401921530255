string decodeString(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ']'){
                st.push(s[i]);
            }
            else{
                string str = "";
                while(!st.empty() && islower(st.top())){
                    str += st.top();
                    st.pop();
                }
                st.pop();
                reverse(str.begin(), str.end());
                string num = "";
                while(!st.empty() && isdigit(st.top())){
                    num += st.top();
                    st.pop();
                }
                reverse(num.begin(), num.end());
                int val = stoi(num);
                string res = "";
                while(val--) res += str;
                for(int j = 0; j < res.size(); j++){
                    st.push(res[j]);
                }
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }