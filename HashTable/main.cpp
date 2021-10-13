#include <iostream>
#include <cstdlib>
#include <string>
#include "hash.h"
using namespace std;

int main()
{
  int index;
  hash hashObj;

  index  = hashObj.Hash("Paul");
  cout << "index = " << index << endl;

  return 0;
}
