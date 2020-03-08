#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream infile("data/F1.txt");
    if(infile.is_open()) {
        string line;
        while(getline(infile, line)) {
            cout << line << "\n";
        }
    }
    return 0;
}
