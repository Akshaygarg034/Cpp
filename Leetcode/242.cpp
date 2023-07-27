// Using Map

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         map<char, int> mp;
//         for(auto it : s){
//             mp[it]++;
//         }
//         for(auto it : t){
//             if(mp.find(it) == mp.end()) return false;
//             mp[it]--;
//             if(mp[it] == 0) mp.erase(it);
//         }
//         if(mp.empty())return true;
//         else return false;
//     }
// };

// Using Array of size 26

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        vector<int> arr(26, 0);

        for(int i=0; i<s.size(); i++){
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }

        for(auto it: arr){
            if(it != 0) return false;
        }

        return true;
    }
};
