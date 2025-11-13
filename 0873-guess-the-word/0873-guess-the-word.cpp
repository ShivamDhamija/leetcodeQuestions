/**
 * // This is the Master's API interface.
 * // You should not implement it, or speculate about its implementation
 * class Master {
 *   public:
 *     int guess(string word);
 * };
 */
class Solution {
public:
    int countMatches(string &s1, string &s2) {

        int matchCount = 0;

        for(int i = 0; i < 6; i++) {
            if(s1[i] == s2[i])matchCount++;
        }

        return matchCount;
    }

    void findSecretWord(vector<string>& words, Master& master) {

        srand(time(0));

        vector<string> guessWords(words.begin(), words.end());

        while(guessWords.size() > 0) {

            int guessId = rand() % guessWords.size();

            string testWord = guessWords[guessId];

            int matches = master.guess(testWord);

            if(matches == 6) return;

            vector<string> updatedGuess;

            for(auto word : guessWords) {
                
                int wordMatch = countMatches(testWord,word);

                if(wordMatch == matches) {
                    updatedGuess.push_back(word);
                } 
            }

            guessWords = updatedGuess;

        }
        
    }
};