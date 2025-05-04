#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

string sortSentence(string s)
{
    string word;
    vector<string> v(10);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)//this shows that there is a number
        {
            v[s[i] - 48] = word + " ";
            word = "";
            i++;
        }
        else word = word + s[i];
    }
    string ans;
    for(string x:v)
    {
        ans = ans+x;
    }
    ans.pop_back();
    return ans;
}

int main() {
    string sentence;
    cout << "Enter the sentence: ";
    getline(cin, sentence);
    string sortedSentence = sortSentence(sentence);
    cout << "Sorted sentence: " << sortedSentence << endl;
    return 0;
}