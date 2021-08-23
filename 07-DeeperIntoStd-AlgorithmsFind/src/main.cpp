
#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Algorithm
  // using std::find with vector and iterator:
#pragma region Simple find

  vector<int> vector1{ 1, 36, 7, 13, 8, 54, 10 };
  int numberToFind;

  cout << "Number to find :";
  cin >> numberToFind;

  cout << "Vector1 content" << endl;
  for (auto i = vector1.begin(); i < vector1.end(); i++) {
      cout  << *i << endl;
   }

 if (find(vector1.begin(), vector1.end(), numberToFind) != vector1.end())
      std::cout << "Element found in myvector: " << numberToFind << endl;
  else
      std::cout << "Element not found in myvector" << endl;

#pragma endregion

#pragma region Find something special
 vector<int> vector2{ 9, 46, 5, 24, 3, 8};
 cout << "Vector2 content" << endl;
 for (auto i = vector2.begin(); i < vector2.end(); i++) {
     cout << *i << endl;
 }

 auto result = find_if(vector2.begin(), vector2.end(), [](int v) {return v % 2 == 0; });
 if (result != vector2.end()) {
     cout << "first even number : " << *result << endl;
 }

#pragma endregion

 
}
