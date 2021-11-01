#include <iostream>
#include <cstring>
#include <string>
#include <stack>
#include <fstream>

using namespace std;

int main(int argc, char** argv){
      if (strcmp(argv[2], "zero") == 0) {
                cout << "silent";
        } else if (strcmp(argv[2], "silent") == 0) {
		cout << "silent";
        } else {
		cout << "confess";
	}
  return 0 ;
}
