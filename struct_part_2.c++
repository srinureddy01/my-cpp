// what i learnt was struct was having set of veribles are beclard like ( int , string , ect ) we can accres with the ( . ) opperatoe in the strut so that we can also keep the differnet stuct accredd words so that we jave multile vaues on thesam evarible name
#include<iostream>

using namespace std;

int main()
{
    struct
    {
        int age;
        string name;
    }studentA,studentB;
     
    cout<<"enter the name: ";
    cin >>  studentA.name;
    cout << "Enter the age: ";
    cin >>  studentA.age;
    
    // student b 
    
        cout<<"enter the name: ";
    cin >>  studentB.name;
    cout << "Enter the age: ";
    cin >>  studentB.age;
    
    cout<<"The name of the candidate: "<< studentA.name<<" and the age "<<studentA.age<<endl;
    
    cout << "The name of the candidate :"<< studentB.name<<" and the age was " << studentB.age;
}
