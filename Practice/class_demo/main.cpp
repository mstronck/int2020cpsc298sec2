#include "class_demo.h"
using namespace std;

int main(int argc, char **argv){
  CPSC298Utils cp;
  cout << cp.countVowels("Rene") << endl;

  CPSC298Utils *cps = new CPSC298Utils();
  cout << "On the heap " << cps -> countVowels("Rene") << endl;

  delete cps;

  return 0;
}
