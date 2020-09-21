#include <iostream>
using namespace std;

int main(){
  int faina;
  int oua;

  cout << "Cate kg de faina avem? ";
  cin >> faina;

  cout << "Cate oua avem? ";
  cin >> oua;

  if(faina > 1 && oua > 4)
    cout << "Putem face prajitura!" << endl;
    else 
      cout << "Nu mancam nimica!" << endl;
  
  return 0;
}