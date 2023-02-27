#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class Departmen{
    string name, managerName;
    int departmentID;

public:

    void setName(string n){
        name = n;
    }

    string getName(){
        return name;
    }

    void setDepID(int id){
        departmentID = id;
    }

    int getDepID(){
        return departmentID;
    }

    void setManName(string x){
        managerName = x;
    }

    string getManName(){
        return managerName;
    }

    Department(){
        name;
        managerName;
        departmentID;
    }

    Department(string n , int depID , string manName){
        name = n;
        departmentID = depID;
        managerName = manName;
    }

};


int main() {

    

    return 0;
}