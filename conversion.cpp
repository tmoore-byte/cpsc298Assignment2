//done

#include <iostream>
using namespace std;

int feet = 0;
double inches = 0.0;
int meters = 0;
double centimeters = 0.0;
int meterCount = 0;
string x = "";

void input(){
  cout << "enter feet: " << endl;
  cin >> feet;
  cout << "enter inches: " << endl;
  cin >> inches;
}

double calculate(){
  inches = feet*12 + inches;
  centimeters = inches * 2.54;

  while(centimeters >= 100){
    meterCount += 1;
    centimeters = centimeters - 100;
  }
}

void output(){
  cout << "meters: " << meterCount << endl;
  cout << "centimeters: " << centimeters << endl;
}



int main(int argc, char **argv){
while (true){
  input();
  calculate();
  output();
  cout << "Do you want to continue (type 'exit' to exit)? " << endl;
  cin >> x;
  if(x == "exit"){
    break;
  }
}


return 0;
}
