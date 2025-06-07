//WciEdit - a terminal text editor in one file
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

int main() {
     using namespace std; 
     string fname; //the filename string
     stringstream text; //the text string

     cout << "please give the filename: ";
     cin >> fname;
     ifstream workfile; //make the workfile object
     workfile.open(fname);// open the file

     if (!workfile.is_open()) //look if the file is ok
     {
          exit(EXIT_FAILURE);//exit if not
     }

     text << workfile.rdbuf(); //add the filetext to the text string
     cout << endl << text.str() << endl;//write the textstring

     return 0;} //end of code

     //Developers:
     //wycior13\wycior13-ctrl
     //no more