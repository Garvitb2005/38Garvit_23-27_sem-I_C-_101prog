// Define an array of integers and display its elements.
#include <iostream>
using namespace std;
int main()
{
  int size;
  cout << "Enter number of students: ";
  cin >> size;
  int marks[size];
  cout << "Enter " << size << " students marks: " << endl;

  //  store input from user to array
  for (int i = 0; i < size; ++i)
  {
    cin >> marks[i];
  }
  cout << "The marks are: ";

  //  print array elements
  for (int n = 0; n < size; ++n)
  {
    cout << marks[n] << "  ";
  }

  return 0;
}
