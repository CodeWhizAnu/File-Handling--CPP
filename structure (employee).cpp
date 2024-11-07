#include<iostream>
#include<fstream>
using namespace std;

struct Employee{
    char name [50];
    int id;
    float salary;
};

//function to write employee data to a binary file
void writeToFile(const Employee & employee){
    ofstream outFile("employee.dat",ios::binary);
     if(!outFile){
        cerr<<"Error:could not open the file for writing !"<<endl;
        return;
    }

//write the structure to the binary file
outFile.write(reinterpret_cast<const char*>(& employee),sizeof (employee));
outFile.close();
cout<<"Employee data written to binary file successfully !"<<endl;
}

//function to read employee data from a binary file
void readFromFile(){
    Employee employee;
    ifstream inFile("employee.dat",ios::binary);
    if(!inFile){
        cerr<<"Error:could not open the file for reading !"<<endl;
     return;
}

//Read the structure from the binary file
inFile.read(reinterpret_cast<char*>(&employee),sizeof(employee));
if(inFile){
    cout<<"\nEmployeedata read from binary file."<<endl;
    cout<<"Name:"<<employee.name<<endl;
    cout<<"ID:"<<employee.id<<endl;
    cout<<"Salary:"<<employee.salary<<endl;
}else{
    cerr<<"Error:could not read data from the binary file!"<<endl;
}
    inFile.close();
}

int main(){
    Employee employee;
    
    //Input employee details
    cout<<"Enter employee details:\n";
    cout<<"Name:";
    cin.ignore();
    cin.getline(employee.name,50);
    cout<<"ID:";
    cin>>employee.id;
    cout<<"Salary:";
    cin>>employee.salary;
    
    //write employee data to binary file 
    writeToFile(employee);
    
    //Read employee data from binary file
    readFromFile();
    
    return 0;
}