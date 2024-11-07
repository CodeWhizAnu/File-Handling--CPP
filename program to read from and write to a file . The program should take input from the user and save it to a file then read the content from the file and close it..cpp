#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
  string userInput;
  // Asking use for userInput
  cout << "Enter some text:";
  getline (cin ,userInput);
  
  // Writing use input to a file
  ofstream outfile("sanika.txt");
  if (outfile.is_open())
  {
    outfile << userInput;
    outfile.close();
    cout << "Data saved to file." << endl;
    } else {
      cout << "Error opening file for writing." << endl;
    }
  // Reading content from the file
  string fileContent;
  ifstream inFile ("sanika.txt");
  if (inFile.is_open())
  {
    getline(inFile , fileContent);
    inFile.close();
    cout << "Data read from file:" << fileContent << endl;
  }
  else
  {
    cout <<"Error opening file for reading." << endl;
  }
  return 0;
  }