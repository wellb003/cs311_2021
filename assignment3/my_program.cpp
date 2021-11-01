#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <stack>

using namespace std;

int main(int argc, char *argv[]){
  stack<string> moves;
      if (strcmp(argv[2], "zero") == 0) {
                cout << "silent";
        } else {
		moves.push(argv[2]);
                cout << moves.top();
        }
  return 0;
}

