class Solution {
public:
static bool cmp (pair<int, int>&a, pair<int, int>&b) {
if (a.first != b.first) {
return a.first > b.first;
}
return a.second < b.second;
}

vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
    
    unordered_map<string, bool>feed;

    for (auto &p : positive_feedback) {
        feed[p] = true;
    }

    for (auto &n : negative_feedback) {
        feed[n] = false;
    }

    vector<pair<int, int>>score; //score of student, id

    for (int i = 0; i < report.size(); i++) {
        string s = report[i], temp = "";
        s += ' ';
        int res = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == ' ') {
                if (feed.find(temp) != feed.end()) {
                    if (feed[temp] == true) {
                        res += 3;
                    }
                    else {
                        res -= 1;
                    }
                }
                temp = "";
            }
            else {
                temp += s[j];
            }
        }
        score.push_back({res, student_id[i]});
    }

    sort(score.begin(), score.end(), cmp);

    vector<int>ans;
    for (int i = 0; i < k; i++) {
        ans.push_back(score[i].second);
    }
    return ans;
}
};