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
    map<string,int>::iterator it;
  // map<int, string>::iterator it2;
    fstream myInputFile ;
   // myInputFile.open("input1.txt"); This is what gradescope requires
    myInputFile.open("/Users/briandahi/Documents/ou/Data Structures/Project5/Project5/input1.txt");
    string token;
    char aChar;
   
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
          m[token]++;
        }
    }
    
   // for (it =  m.begin(); it !=  m.end(); ++it) {//the m.begin() will start at the front of the map
        // and the exit case will be m.end()
     //  cout  <<"Key: " <<it->first<< " Value: " << it->second <<endl;
    //}
    myInputFile.close();
    
    multimap<int,string> sortMap;
    multimap<int, string> :: iterator it2;
    for(it = m.begin(); it != m.end();++it){
        sortMap.insert(make_pair(it->second, it->first));
      
    }
  
    for (it2 =  sortMap.begin(); it2 !=  sortMap.end(); ++it2) {//the m.begin() will start at the front of the map
           // and the exit case will be m.end()
          cout  <<"Key: " <<it2->second<< " Value: " << it2->first <<endl;
       }
   
    return 0;
}

