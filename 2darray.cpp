//done

#include <iostream>

using namespace std;

int main(int argc, char **argv){

  int a[4][5];
  int userNum = 0;

  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 5; ++j){
      cout << "enter a number: " << endl;
      cin >> userNum;
      a[i][j] = userNum;
    }
  }

  return 0;
}
