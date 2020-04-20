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
 
    fstream myInputFile ;
   // myInputFile.open("input1.txt"); This is what gradescope requires
   // myInputFile.open("/Users/briandahi/Documents/ou/Data Structures/Project5/Project5/input1.txt");
    
        myInputFile.open("/Users/briandahi/Documents/ou/Data Structures/Project5/Project5/input1Real.txt");
    
   //    myInputFile.open("/Users/briandahi/Documents/ou/Data Structures/Project5/Project5/input2.txt");
    
   //     myInputFile.open("/Users/briandahi/Documents/ou/Data Structures/Project5/Project5/input3.txt");
    
    string token;
    char aChar;
    

    while(!myInputFile.eof()){
        myInputFile.get(aChar);
         if (!myInputFile.eof()){
        token.clear();
        while((!myInputFile.eof()) && ((aChar != ' ') && (aChar != '\n'))){
            token += aChar;//Here we are puting aChar into a string
            myInputFile.get(aChar);// we get the next char
        }
         m[token]++;
        }
    }
    
    
   
  /*  while (!myInputFile.eof()){//Why the file is not end of file
        do{
            myInputFile.get(aChar);//get a char
        }//end do
        while((!myInputFile.eof()) && ((aChar == ' ') || (aChar == '\n')));
        //while file is still not end And aChar does not ==  blank space or endline loop through.
        
        if (!myInputFile.eof()){
            //This will clear the token of any existing declartion
            token.clear();
            
            while ((!myInputFile.eof()) && ((aChar != ' ') && (aChar != '\n'))){
                //This loop is the same as the last
                
                token += aChar;//Here we are puting aChar into a string
                
                myInputFile.get(aChar);// we get the next char
                
            }//ends third while loop
          m[token]++;
        }//ends if statment
    }//ends first loop*/
    
    myInputFile.close();
    
    multimap<int , string , greater<int>> sortMap;
    multimap<int, string> :: iterator it2;
    for(it = m.begin(); it != m.end();++it){
        
        sortMap.insert(make_pair(it->second, it->first));
      
    }
    
    for (it2 =  sortMap.begin(); it2 !=  sortMap.end(); ++it2) {
        //the m.begin() will start at the front of the map and the exit case will be m.end()
               
          cout  <<it2->second <<" ";
    }
    cout<<endl;
    
  
    string strArray[sortMap.size()];
    int i = 0;
    for(it2 = sortMap.begin(); it2 != sortMap.end(); ++it2){
         strArray[i] = it2->second;
         ++i;
    }
  
    /* Now we need to open the file again read and search and then print the position it is in*/
    // myInputFile.open("input1.txt"); This is what gradescope requires
    
      // myInputFile.open("/Users/briandahi/Documents/ou/Data Structures/Project5/Project5/input1.txt");
    
           myInputFile.open("/Users/briandahi/Documents/ou/Data Structures/Project5/Project5/input1Real.txt");
    
         //  myInputFile.open("/Users/briandahi/Documents/ou/Data Structures/Project5/Project5/input2.txt");
    
         //  myInputFile.open("/Users/briandahi/Documents/ou/Data Structures/Project5/Project5/input3.txt");
    i = 0;
    
    while(!myInputFile.eof()){
        myInputFile.get(aChar);
         if (!myInputFile.eof()){
        token.clear();
        while((!myInputFile.eof()) && ((aChar != ' ') && (aChar != '\n'))){
            token += aChar;//Here we are puting aChar into a string
            myInputFile.get(aChar);// we get the next char
        }
         m[token]++;
        
        for(int i = 0; i < sortMap.size();++i){
                          if(token == strArray[i]){
                              cout<<i+1<<" ";
                          }
               }
         }
    }
    
 /*   while (!myInputFile.eof()){//Why the file is not end of file
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
           for(int i = 0; i < sortMap.size();++i){
                      if(token == strArray[i]){
                          cout<<i+1<<" ";
                      }
           }
       
        }
       }*/
  
    myInputFile.close();
    return 0;
}

