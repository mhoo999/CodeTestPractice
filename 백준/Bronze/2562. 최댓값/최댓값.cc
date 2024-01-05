#include <iostream>

using namespace std;

int main(){
  int Numbers[9];

  for(int i = 0; i < 9; ++i)
  {
    cin >> Numbers[i];
  }

  int Max = Numbers[0];
  int Count = 1;

  for(int i = 1; i < 9; ++i)
  {
    if(Max < Numbers[i])
    {
      Max = Numbers[i];
      Count = i + 1;
    }
  }

  cout << Max << endl << Count;
}