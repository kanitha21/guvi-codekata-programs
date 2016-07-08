#include <iostream>
#include <vector>
#include <string>

int largestNum(int input) {
  std::string str = std::to_string(input);
  if (str.size()<2)
    return 0;
  std::vector<int> pos;
  char prevChar = *(str.begin());
  int repeatedPos = 1;
  std::string::iterator it = str.begin() + 1;
  for (;it!=str.end();++it) {
    if (prevChar == (*it)) {
      pos.push_back(repeatedPos);
    }
    prevChar = (*it);
    repeatedPos++;
  }
  int maxNum = 0;
  for (std::vector<int>::iterator it = pos.begin();it!=pos.end();++it) {
     std::string tmp = str;
     tmp.erase(*it,1);
     std::string::size_type sz;   
     maxNum = std::max(maxNum, stoi(tmp, &sz));
  }
  return maxNum;
}

int main () {
  int num = largestNum(99145),large=0,rem=0;
  std::cout << "Largest number is " << num;
  while (num > 0) {
                rem = num % 10;

                if (rem > large) {
                        large = rem;
                }

                num = num / 10;
        }
 
   printf("\nSum of digits of %d \n", large);
  return 0;
}
