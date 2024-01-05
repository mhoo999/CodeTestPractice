#include <iostream>

using namespace std;

int Numbers[1'000'000];

int main(){
    int Number;
    cin >> Number;
    
    
    for(int i = 0; i < Number; ++i)
    {
        cin >> Numbers[i];
    }
    
    int max = Numbers[0];
    int min = Numbers[0];
    
    for(int i = 1; i < Number; ++i)
    {
      if(max < Numbers[i])
          max = Numbers[i];
      if(min > Numbers[i])
          min = Numbers[i];
    }
    
    cout << min << " " << max;
}