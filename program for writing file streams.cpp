#include<fstream>
#include<iostream>
using namespace std;

int main() {
  ofstream outfile ("sample.txt");  //create and open a file for writing
  
  if(outfile.is_open()) {
    outfile<<"Hello , World!\n";  //write to the file
    outfile<<"This is a text file in c++\n";
    outfile.close();   //close th file
    cout<<"Data written to file successfully. "<<endl;
  }else{
    cout<<"Error:could not open the file"<<endl;
  }
  return 0;
}