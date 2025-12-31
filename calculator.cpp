#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <vector>
using namespace std;

struct Course {
    string code;
    string semester;
    int mark;
};

int read_from_file(char * file_name, vector<Course> &courses) {
    string line;
    ifstream fp(file_name);

    // Use a while loop to read CSV file line by line
    while (getline (fp, line)) {
        cout << line << "\n";
        
        // Parse line
        string course_code = line.substr(0, 8);
        int mark = stoi(line.substr(10, 2));
        string semester = line.substr(13, 3);

        courses.push_back({course_code, semester, mark});
    }

    // Close the file
    fp.close();
    
    return 0;
}


// Obtains the grade by course code
int get_grade_by_course_code(string course_code, vector<Course> &courses) {
    cout << "Search!\n";
    return 0;
}

// Computes the CGPA for the student
float compute_cgpa(vector<Course> &courses) {
    cout << "Compute CGPA!\n";
    return 0.0;
}

// Computes the CGPA for a specific course subject type (i.e. Mathematics)
float compute_subject_cgpa(string subject_code, vector<Course> &courses) {
    cout << "Compute subject CPGA!\n";
    return 0.0;
}

// Computes semester GPA
float compute_semester_gpa(string semester_code, vector<Course> &courses) {
    cout << "Compute semester CGPA!\n";
    return 0.0;
}

// Accepts menu options and runs program functions
void run_menu_options(vector<Course> &courses) {
    // Create input loop for GPA analysis
    string input;

    while (strcmp(input.c_str(), "q") != 0) {
        cout << "Menu Options: s (search), c (compute cGPA), cs (compute cGPA by subject), ce (compute cGPA by semester), q (quit)\n";
        cout << ">> ";
        cin >> input;

        if (strcmp(input.c_str(), "s") == 0) {
            string course_code;

            cout << "Enter a course code (i.e. CIS*1300): ";
            cin >> course_code;

            get_grade_by_course_code(course_code, courses);
        } else if (strcmp(input.c_str(), "c") == 0) {
            compute_cgpa(courses);
        } else if (strcmp(input.c_str(), "cs") == 0) {
            string subject_code;

            cout << "Enter a subject code (i.e. 'MATH'): ";
            cin >> subject_code;

            compute_subject_cgpa(subject_code, courses);
        } else if (strcmp(input.c_str(), "ce") == 0) {
            string semester_code;

            cout << "Enter a semester code (i.e. W25): ";
            cin >> semester_code;

            compute_semester_gpa(semester_code, courses);
        } else {
            if (strcmp(input.c_str(), "q") != 0) {
                cout << "Invalid option entered.\n";
            }
        }
    }
}

int main(int argc, char* argv[]) {
    cout << "Loading... " << argv[1] << "\n";

    // Create vector of all the structs of file information
    vector<Course> courses;

    if (read_from_file(argv[1], courses) != 0) {
        cout << "There was an error reading the file, '" << argv[1] << "'. Please check if it exists or if it is in the proper (CSV) format.\n";
    }

    cout << "File loaded and ready for analysis.\n";

    run_menu_options(courses);

    cout << "Exited program.\n";

    return 0;
}