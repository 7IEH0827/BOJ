#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool compareSong(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string, int> category;
    unordered_map<string, vector<pair<int, int>>> song;
    
    for (int i = 0; i < genres.size(); i++) {
        category[genres[i]] += plays[i];
        song[genres[i]].push_back({i, plays[i]});
    }
    
    for (auto& [genre, song_list] : song) {
        sort(song_list.begin(), song_list.end(), compareSong);
    }
    
    vector<pair<string, int>> sorted_category(category.begin(), category.end());
    sort(sorted_category.begin(), sorted_category.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; 
    });
    
    for (const auto& [genre, total_plays] : sorted_category) {
        auto& song_list = song[genre]; 
        int count = min(2, (int)song_list.size());
        
        for (int j = 0; j < count; j++) {
            answer.push_back(song_list[j].first);
        }
    }
    
    return answer;
}