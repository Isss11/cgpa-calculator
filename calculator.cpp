#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct Course {
    string code;
    string semester;
    int mark;
};

int read_from_file(char * file_name) {
    string line;
    ifstream fp(file_name);

    // Create vector of all the structs of file information
    vector<Course> courses;

    // Use a while loop to read CSV file line by line
    while (getline (fp, line)) {
        cout << line << "\n";
        courses.push_back({line, "W25", 93});
    }

    // Close the file
    fp.close();
    
    return 0;
}

int main(int argc, char* argv[]) {
    cout << "Loading... " << argv[1] << "\n";

    read_from_file(argv[1]);
}