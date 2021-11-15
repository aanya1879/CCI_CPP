using namespace std;

#include <iostream>
#include <vector>
#include <unordered_map>

int findSqSum(int num){
    int sum = 0, i;
    while(num>0){
        i = num%10;
        num = num/10;
        sum += i*i;
    }

    return sum;
}
bool findHappyNumber(const int num) {
    int sp= num;
    int fp= num;

    do{
        sp = findSqSum(sp);
        fp = findSqSum(findSqSum(fp));
        cout<<sp<<"--"<<fp<<endl;
    }while(sp!=fp);

    return sp==1;
} 

int main(int argc, char* argv[]) {
  bool result;
  result = findHappyNumber(23);
  cout << "Is Happy Number: " << result << endl;
  result = findHappyNumber(12);
  cout << "Is Happy Number: " << result << endl;
}
