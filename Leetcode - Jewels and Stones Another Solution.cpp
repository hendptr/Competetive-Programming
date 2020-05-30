class Solution {
public:
    int numJewelsInStones(string J, string S) {
 /*
        Create Hashtable using unordered_map because we dont need ordered data
        Assign Value of 1 Every Char in J 
        {J[i..], 1}
        
        After Than we Check using loop every char in S
        
        hash[s[i..]] > 0 we increment ++ total value
        
        ex 
        
        J = "aZ"
        S = "AaaZ"
        
        create total variabel assign to 0
        create Hash = {{a, 1}, {z, 1}}
        check every char S if greater '>' than 0  
        Hash['A'] = 0 because there no capital A in hash
        hash['a'] = 1 because there char a in hash we increment total so total = 1
        hash['a'] = 1 because there char a in hash we increment total so total = 2
        hash['Z'] = 1 because there char a in hash we increment total so total = 3
        
        return total
        
        */
        unordered_map <char, int> hash;
        for(auto i : J){
            hash.insert({i, 1});
        }
        int total = 0;
        for(auto j : S){
            if(hash[j] > 0){
                total++;
            }
        }
        return total;
    }
};
