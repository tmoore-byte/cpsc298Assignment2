//DONE

#include <iostream>

using namespace std;

int main(int argc, char **argv){

  int numberArray[9];
  int userNum = 0;


  for (int i = 0; i < 10; ++i){
    cout << "Enter a positive int: " << endl;
    cin >> userNum;
    numberArray[i] = userNum;

  }

  for (int i = 0; i < 10; ++i){
    cout << numberArray[i] << " ";
  }
  cout << endl;
  return 0;
}
