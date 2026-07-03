// Last updated: 04/07/2026, 02:02:32
class Solution {
public:

    string freqArray(string &word){ //key nikaalne ke liye
            int arr[26] = {0}; // using for freq count
            for(auto &ch : word){

                arr[ch - 'a'] += 1;
                
            }
            
            string temp = "";
            for(int i = 0; i < 26; i++){
                while(arr[i] > 0){

                    temp += char(i + 'a'); // making a sorted word for key
                    arr[i]--;               //and decreasing if we add by one
                }
            }

            return temp;
        } 

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map <string, vector<string>> mp;
        vector <vector<string>> result;

        for(int i = 0; i < strs.size(); i++){
            string word = strs[i];
            string keyword = freqArray(word); //key nikal jaye through the provided word
            
            mp[keyword].push_back(word);
        }

        for(auto &it: mp){

            result.push_back(it.second);

        }
        
        return result;

        }
    };
