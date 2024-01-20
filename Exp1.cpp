#include <iostream>
#include <string>
using namespace std;

int countSubstringOccurrences(const string &input, const string &substring)
{
    int count = 0;
    size_t position = input.find(substring, 0);

    while (position != string::npos)
    {
        count++;
        position = input.find(substring, position + 1);
    }

    return count;
}

int countSubstring(const string &text, const string &sub){
    int c=0;
    int l1 = text.size();
    int l2 = sub.size();
    for(int i=0;i<= l1-l2;i++ ){
        if(sub == text.substr(i,l2)){
            c++;
        }
    }
    return c;
}
int main()
{
    // cout << countSubstringOccurrences("the three truths", "th") << endl;
    // cout << countSubstringOccurrences("ababababab", "abab") << endl;
    // cout << countSubstringOccurrences("abaabba*bbaba*bbab", "a*b") << endl;
    std::cout << countSubstring("the three truths", "th")    << '\n'; 
 std::cout << countSubstring("ababababab", "abab")        << '\n'; 
 std::cout << countSubstring("abaabba*bbaba*bbab", "a*b") << '\n';
}
