class Solution {
    public:

        string encode(vector<string>& strs) {

                string ans = "";

                        for (string s : strs) {
                                    ans += to_string(s.size()) + "#" + s;
                                            }

                                                    return ans;
                                                        }

                                                            vector<string> decode(string s) {

                                                                    vector<string> ans;   // ⭐ ye missing tha

                                                                            int i = 0;

                                                                                    while (i < s.size()) {

                                                                                                // length find karo
                                                                                                            int j = i;

                                                                                                                        while (s[j] != '#') {
                                                                                                                                        j++;
                                                                                                                                                    }

                                                                                                                                                                int len = stoi(s.substr(i, j - i));

                                                                                                                                                                            // actual string nikalo
                                                                                                                                                                                        string word = s.substr(j + 1, len);

                                                                                                                                                                                                    ans.push_back(word);   // ⭐ strs nahi, word

                                                                                                                                                                                                                // next encoded string
                                                                                                                                                                                                                            i = j + 1 + len;
                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                            return ans;
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                };
