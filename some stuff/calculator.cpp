#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main(int argc, char* argv[]){ // exec_name arg1(int) operator arg2(int)

    int num1,num2;
    /*
    cout << "Executable name: "<< argv[0] << endl;
    cout << "Arg1: "<< argv[1] << endl;
    cout << "Operator: "<< argv[2] << endl;
    cout << "Arg2: "<< argv[3] << endl;
    cout << "Amount of arguments: "<< argv[4] << endl;
    */

    string num1string(argv[1]);
    string num2string(argv[3]);

    stringstream num1stream(num1string);
    stringstream num2stream(num2string);

    num1stream >> num1;
    num2stream >> num2;

    if(*argv[2]=='+')
        cout << num1+num2 << endl;
    else if(*argv[2]=='-')
        cout << num1-num2 << endl;
    else if(*argv[2]=='x' || *argv[2]=='*')
        cout << num1*num2 << endl;
    else if(*argv[2]=='/')
        if(num2 != 0)
            cout << num1/num2 << endl;
        else{ 
            cout<<"0 can't be denominator!"<<endl;
            return 0;
        }
    else{
        cout<<"Invalid Operation"<<endl;
        return 0;
    }
        
    return 1;

}
