using namespace std;

#include <iostream>
#include <unordered_map>
#include <vector>

class FruitsIntoBaskets {
 public:
  static int findLength(const vector<char>& arr) {
      int maxLength =0;

      unordered_map<char, int> fumap,rumap;
      char c;
        for(int wE=0; wE<arr.size(); wE++){
            c = arr[wE];
            fumap[c]++;
            if(rumap.find(c)== rumap.end()){ //char not found
                if(rumap.size()<2){
                    rumap[c] = fumap[c];
                }
                else{
                    auto it1 = rumap.begin();
                    auto it2 = ++it1;
                    it1 = rumap.begin();
                    unordered_map<char, int>::iterator  minc = (it1->second>it2->second)?it2:it1;
                    cout<<minc->first<<" min of: "<<it1->first<<" & "<<it2->first<<endl;
                    if(minc->second<fumap[c]){
                        //erase minc & add c
                        cout<<"erasing "<<minc->first;
                        rumap.erase(minc);
                        rumap[c]=fumap[c];
                        cout<<" for"<<c<<endl;
                    }
                }
            }
            else{
                rumap[c]++;
            }
        }
        for(auto it = rumap.begin(); it != rumap.end(); ++it){
            maxLength += it->second;
        } 

    
      return maxLength;
  }
};

int main(int argc, char* argv[]) {
  int result = FruitsIntoBaskets::findLength(vector<char>{'A', 'B', 'C', 'A', 'C'});
  cout << "Max length: " << result << endl;
  result = FruitsIntoBaskets::findLength(vector<char>{'A', 'B', 'C', 'B', 'B', 'C'});
  cout << "Max length: " << result << endl;
  result = FruitsIntoBaskets::findLength(vector<char>{});
  cout << "Max length: " << result << endl;
}
