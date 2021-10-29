#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <stack>

using namespace std;

int main(int argc, char *argv[]){
  ifstream fin("testfile.dat");
  ofstream fout("testfile.dat");
  fin.open("testfile.dat", fstream::app);
  stack<string> moves;
  if(!fin.is_open()) {
    cout << "testfile.dat closed";
  } else {
      while (!fin.eof()) {
        string s;
        getline(fin, s);
        moves.push(s);
      }
      if (strcmp(argv[2], "zero") == 0) {
      		cout << "silent";
    	} else {
        	fout << argv[2] << "\n";
        	cout << moves.top();
      	}
    }
	return 0;
}
