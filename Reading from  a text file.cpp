#include<fstream>
#include<iostream>
using namespace std;

int main() {
  ifstream infile ("sample.txt");  // open a file for reading
  string line;
  
  if(infile.is_open()) {
    while(getline(infile,line)) {      //Read line by line 
    cout<<line<<endl;       //print each line
  }
   infile.close();    //close the file
  }else{
    cout<<"Error:could not open the file."<<endl;
  }
  return 0;
}