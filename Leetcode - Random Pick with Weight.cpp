class Solution {
public:
    vector <int> ar;
    int t;
    Solution(vector<int>& w) {
        t = 0;
        for(auto i : w){
            t +=i;
            ar.push_back(t);
        }
    }
    
    int pickIndex() {
        int r = rand() % t;
        for(int i=0;i<ar.size();i++){
            if(ar[i] > r){
                return i;
            }
        }
        return ar.size(); 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
