#include<iostream>   //Include the file stream library
#include<fstream>   //for standard input/output
using namespace std;

 int main(){
      ifstream inputFile("sanika.txt");   //open a file for reading
     
     ofstream outputfile ("sanika.txt");  //open a file for writing
         
      fstream file ("sanika.txt",ios::in|ios::out);    //opens a file for both reading and writing
      
     return 0;
     
 }