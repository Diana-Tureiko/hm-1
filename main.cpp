#include <iostream>
using namespace std;

int main() {
  int n;
  int m[100];
  cout << " Izvada n masīva elementus uz ekrāna!\n ";
  cin >> n;

  for (int i=0; i<=n;i++)
  {
    cin >> m[i];
  } 
  for (int i=0; i<=n;i++)
  {
    cout << m[i] << ' ';
  } 
  return 0;
}