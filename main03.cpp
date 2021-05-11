#include <iostream>
using namespace std;
int main ()
{
int n;
cin >> n;
  int sum = 0;
  for (int i = 4 ; i <= n ; i += 3 )
  {sum += i;
    
  }
  cout << sum;
  return 0;
}