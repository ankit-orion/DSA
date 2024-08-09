#include <bits/stdc++.h>
using namespace std;
int max_words(vector<string> sentences)
{
    int max_words = 0;
    for (string sentence : sentences)
    {
        int word_count = 0;
        for (int i = 0; i < sentence.size();)
        {
            int j = sentence.find(' ', i);
            if (j == string::npos) {
                word_count++;
                break;
            }
            word_count++;
            i = j + 1;
        }
        max_words = max(max_words, word_count);
    }
    return max_words;
}

int main()
{
    vector<string> sentences = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"};
    cout << max_words(sentences) << endl;
    return 0;
}