// https://leetcode.com/problems/valid-anagram/

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// Example 1:

// Input: s = "anagram", t = "nagaram" 
// Output: true

// Example 2:

// Input: s = "rat", t = "car"
// Output: false

// Form a hasmap of s
// Check if t contains all characters of s.
bool isAnagram(string s, string t) {
      map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]+=1;
        }
        for(int i=0;i<t.length();i++){
            mp[t[i]]-=1;
        }
        for(auto trt=mp.begin();trt!=mp.end();trt++){
            if(trt->second!=0){
            return false;
                }
        }
        return true;
    }
