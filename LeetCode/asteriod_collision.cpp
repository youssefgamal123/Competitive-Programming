class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int a : asteroids) {
            bool destroyed = false;
            while (!st.empty() && a < 0 && st.top() > 0) {
                if (abs(st.top()) < abs(a)) {
                    st.pop();
                    continue;
                } else if (abs(st.top()) == abs(a)) {
                    st.pop();
                }
                destroyed = true;
                break;
            }
            if (!destroyed) st.push(a);
        }
        vector<int> res(st.size());
        for (int i = res.size() - 1; i >= 0; i--) {
            res[i] = st.top();
            st.pop();
        }
        return res;
    }






};