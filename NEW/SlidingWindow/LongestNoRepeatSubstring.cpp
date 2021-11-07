using namespace std;

#include <iostream>
#include <unordered_set>

class NoRepeatSubstring {
 public:
  static int findLength(const string& str) {
      int count =0;
        unordered_set<char> s;
        for(int wS=0, wE=0; wE<str.length();wE++){
            char c =str[wE];
            if(s.find(c)==s.end()){
                s.insert(c);
                count = max(count, (int)s.size());
            }
            else{
                while(str[wS]!=c){
                    s.erase(str[wS]);
                    wS++;
                }
                s.erase(str[wS]);
                wS++;
                s.insert(c);
            }
        }
      return count;
  }
};

int main(int argc, char* argv[]) {
  int result = NoRepeatSubstring::findLength("aabccbb");
  cout << "Max length: " << result << endl;
  result = NoRepeatSubstring::findLength("abbbb");
  cout << "Max length: " << result << endl;
  result = NoRepeatSubstring::findLength("abccde");
  cout << "Max length: " << result << endl;
}
