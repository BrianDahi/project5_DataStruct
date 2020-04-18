#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <map>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
    
  
    map<string, int> m;
    fstream myInputFile ;
   // myInputFile.open("input1.txt"); This is what gradescope requires
    myInputFile.open("/Users/briandahi/Documents/ou/Data Structures/Project5/Project5/input1.txt");
    string token;
    char aChar;
    char* arrayChar;
    int i,j=0;

    
    while (!myInputFile.eof()){//Why the file is not end of file
        do{
            myInputFile.get(aChar);//get a char
        }
        while((!myInputFile.eof()) && ((aChar == ' ') || (aChar == '\n')));
        //while file is still not end And aChar does not ==  blank space or endline loop through.
        
        if (!myInputFile.eof()){
            //This will clear the token of any existing declartion
            
            token.clear();
            
            while ((!myInputFile.eof()) && ((aChar != ' ') && (aChar != '\n'))){
                //This loop is the same as the last
                
                token += aChar;//Here we are puting aChar into a string
                myInputFile.get(aChar);// we get the next char
                
            }
            //Now I need to store into map
            //Thinking of ways to store and increment
            m[token] = 1;
            cout<<"this is a token: "<<token<<endl;
        }
    }
    myInputFile.close();
    return 0;
}

