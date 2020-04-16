#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    
    cout<<"hello"<<endl;
    ifstream myInputFile ("input1.txt");
    string token;
    char aChar;
    while (!myInputFile.eof()){
        do{
            myInputFile.get(aChar);
        }
        while((!myInputFile.eof()) && ((aChar == ' ') || (aChar == '\n')));
            if (!myInputFile.eof()) {
            token.clear();
            while ((!myInputFile.eof()) && ((aChar != ' ') && (aChar != '\n'))){
            token += aChar;
            myInputFile.get(aChar);
                
            }
                cout<<token<<endl;
            }
    }
    
    return 0;
}

