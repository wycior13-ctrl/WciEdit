//WciEdit - a terminal text editor in one file
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

int main() {
     using namespace std;
     string fname;
     stringstream text;

     cout << "please give the filename: ";
     cin >> fname;
     ifstream workfile;
     workfile.open(fname);

     if (!workfile.is_open())
     {
          exit(EXIT_FAILURE);
     }

     text << workfile.rdbuf();
     cout << endl << text.str() << endl;

     return 0;}