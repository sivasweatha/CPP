#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string data;
  string filename = "test.txt";
  ofstream file;
  file.open(filename);
  cout << "Data: ";
  getline(cin, data);
  file << data;
  cout << "Wrote '" << data << "' to: " << filename;
  file.close();
  return 0;
}