#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i=0; i<s.length(); i++)
    {
        for(int j=i+1; j<s.length(); j++)
        {
            if(s[i] < s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    answer = s;
    return answer;
}