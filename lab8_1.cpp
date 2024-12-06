#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  
  int check = 0;
  if(rank == 'S'){
      cout << "You have received Super Ultra Rare Unit!!!\n";
      check = 1;
  }
  if(rank == 'A' || check){
      cout << "You have received 5 gems.\n";
      check = 1;
  }
  if(rank == 'B' || check){
      cout << "You have received 1 gems.\n";
      check = 1;
  }
  if(rank == 'C' || check){
      cout << "You have received 2000 coins.\n";
      check = 1;
  }
  if(rank == 'D' || check){
      cout << "You have received very KAK items.\n";
  }
  
  return 0;
}
