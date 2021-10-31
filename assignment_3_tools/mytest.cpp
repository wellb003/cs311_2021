#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <stack>

using namespace std;

int main(int argc, char *argv[]){
  ifstream fin("mymoves.dat",ios::in | ios::out);
  ofstream fout("mymoves.dat",ios::app);
  stack<string> moves;
      if (strcmp(argv[2], "zero") == 0) {
                cout << "silent";
        } else {
                fout << argv[2] << "\n";
                string s;
                while (getline(fin, s)) {
                   moves.push(s);
                 }
                cout << moves.top();
        }
  fin.close();
  fout.close();
  return 0;
}

