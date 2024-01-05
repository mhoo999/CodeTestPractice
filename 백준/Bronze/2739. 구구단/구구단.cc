#include <iostream>

using namespace std;

int main(){
    int Number;
    
    cin >> Number;
    
    for(int i = 1; i <= 9; i++){
        cout << Number << " * " << i << " = " << Number * i << endl;
    }
}