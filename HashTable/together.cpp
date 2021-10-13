#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class hashT
{
private:
  static const int tablesize = 10;

  // for the linklist
  struct item
  {
    string name;
    string drink;
    item* next;
  };
  item* HashTable[tablesize];
public:
  hashT()
  {
    for(int i = 0; i < tablesize; i++)
    {
      HashTable[i] = new item;
      HashTable[i]->name = "empty";
      HashTable[i]->drink = "empty";
      HashTable[i]->next = NULL;
    }
  }
  int Hash(string key);
  void AddItem(string name, string drink);
  int NumberOfItemsInIndex(int index);
  void PrintTable();
  void PrintItemsInIndex(int index);
};

int hashT::Hash(string key)
{
  int hash = 0;
  int index;

  for (int i = 0; i < key.length(); i++)
  {
    hash += (int)key[i];
  }

  index = hash%tablesize;

  return index;
}

void hashT::AddItem(string name, string drink)
{
  int index = Hash(name);

  if(HashTable[index]-> name == "empty")
  {
    HashTable[index]->name = name;
    HashTable[index]->drink = drink;
  }
  else
  {
    item* Ptr = HashTable[index];
    item* n = new item;
    n->name = name;
    n->drink = drink;
    n->next = NULL;

    while(Ptr->next != NULL)
    {
      Ptr = Ptr->next;
    }
    Ptr->next = n;
  }
}

int hashT::NumberOfItemsInIndex(int index)
{
  int count = 0;

  if(HashTable[index]->name == "empty")
  {
    count = 0;
  }
  else
  {
    count++;
    item* Ptr = HashTable[index];
    while (Ptr->next != NULL)
    {
      count++;
      Ptr =  Ptr->next;
    }
  }
  return count;
}

void hashT::PrintTable()
{
  int number;
  for(int i = 0; i < tablesize; i++)
  {
    number = NumberOfItemsInIndex(i);
    cout << "----------------------\n"
         << "index = " << i << "\n"
         << HashTable[i]->name << "\n"
         << HashTable[i]->drink << "\n"
         << "# of items = " << number << "\n"
         << "----------------------\n";
  }
}

void hashT::PrintItemsInIndex(int index)
{
  item* Ptr = HashTable[index];

  if(Ptr->name == "empty")
    cout << "idex = " << index << " is empty";
  else
  {
    cout << "index " << index << " contains the following item\n";

    while(Ptr != NULL)
    {
      cout << "----------------------\n"
           << Ptr->name << "\n"
           << Ptr->drink << "\n"
           << "----------------------\n";
      Ptr = Ptr->next;
    }
  }
}



int main()
{
  hashT Hashy;

  enum { One = 1, Two, Three, Four};
  int choice, userI;
  string name1, drink1;
  char replay = 'y';


  // add Item to the table
  Hashy.AddItem("Moses", "Locha");
	Hashy.AddItem("Kim", "Iced Mocha");
	Hashy.AddItem("Emma", "Strawberry Smoothie");
	Hashy.AddItem("Annie", "Hot Chocolate");
	Hashy.AddItem("Sarah", "Passion Tea");
	Hashy.AddItem("Pepper", "Caramel Mocha");
	Hashy.AddItem("Mike", "Chai Tea");
	Hashy.AddItem("Steve", "Apple Cider");
	Hashy.AddItem("Bill", "Root Beer");
	Hashy.AddItem("Marie", "Skinny Latte");
	Hashy.AddItem("Susan", "Water");
	Hashy.AddItem("Joe", "Green Tea");

while (replay == 'y' || replay == 'Y')
{
  cout << "Choice for the Menu Below\n"
       << "1 - Dispaly Hash Table\n"
       << "2 - Add vaule to Table\n"
       << "3 - Open a Single table\n"
       << "4 - Quit\n"
       << "Enter a Choice: ";
  cin >> choice;

  switch(choice)
  {
    case One:
      Hashy.PrintTable();
      cout << "\nReturn to Menu (y/n): ";
      cin >> replay;
    break;
    case Two:
      cout << "How many data do you want to add? ";
      cin >> userI;
      cin.ignore();
      for (int n = 0; n < userI; n++)
      {
        cout << "Enter Name: ";
        getline(cin, name1);
        cout << "Enter Drink: ";
        getline(cin, drink1);
        Hashy.AddItem(name1, drink1);
      }
      cout << "\nReturn to Menu (y/n): ";
      cin >> replay;
    break;
    case Three:
      // Display current values
      Hashy.PrintTable();
      cout << "Enter a index you will to see: ";
      cin >> userI;
      Hashy.PrintItemsInIndex(userI);
      cout << "\nReturn to Menu (y/n): ";
      cin >> replay;
    break;
    case Four:
      cout << "\n\n\t\tProgramming is Ending...\n\n";
      replay = 'n';
      break;
    default:
      cout << choice << " is invalid\n";
      cout << "\nReturn to Menu (y/n): ";
      cin >> replay;
  }
}
  return 0;
}
