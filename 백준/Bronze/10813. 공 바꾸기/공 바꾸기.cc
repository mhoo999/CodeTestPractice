#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;

  int Porket[n];

  for(int i = 0; i < n; ++i)
    Porket[i] = i + 1;

  int m;
  cin >> m;

  int PreN[m];
  int NexN[m];

  for(int i = 0; i < m; ++i)
  {
    cin >> PreN[i] >> NexN[i];
  }
  
  for(int i = 0; i < m; ++i)
  {
    int pre = (PreN[i] - 1);
    int nex = (NexN[i] - 1);
    int temp = 0;

    temp = Porket[pre];
    Porket[pre] = Porket[nex];
    Porket[nex] = temp;
  }

  for(int i = 0; i < n; ++i)
    cout << Porket[i] << " ";
}