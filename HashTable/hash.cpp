

#include <iostream>
#include <cstdlib>
#include <string>
#include "hash.h"
using namespace std;


int hash::Hash(string key)
{
  int hash = 0;
  int index;

  index = key.length();

  for (int i = 0; i < key.length(); i++)
  {
    hash += (int)key[i];
    cout << "hash = " << hash << "\n";
  }

  return index;
}
