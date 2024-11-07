#include<iostream>
#include<fstream>
using namespace std;

struct Data{
    int id;
    char name[50];
 };
 
 int main(){
     Data d2;
     
     ofstream outFile("data.bin",ios:: binary);
     
     if(outFile.is_open()){
         outFile.write(reinterpret_cast<char*>(&d2),sizeof(d2));
         
         outFile.close();
         cout<<"Data write from binary file:ID="<<d2.id<<",Name="<<d2.name<<endl;
     }else{
         cout<<"Error:could not open file."<<endl;
        }
     return 0;
     
 }