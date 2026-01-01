# grade-me

A GPA analyzer that I implemented to learn C++ syntax.

## Example

```
isss11@isaiah-pc:~/personal-projects/cgpa-calculator$ ./bin/gpa ./data/marks.csv
Loading... ./data/marks.csv
File loaded and ready for analysis.
Menu Options: s (search), c (compute cGPA), cs (compute GPA by subject), ce (compute GPA by semester), q (quit)
>> s
Enter a course code (i.e. CIS*1300): MATH*1210
MATH*1210 is 90%.
Menu Options: s (search), c (compute cGPA), cs (compute GPA by subject), ce (compute GPA by semester), q (quit)
>> c
The student's cGPA is: 93.08%.
Menu Options: s (search), c (compute cGPA), cs (compute GPA by subject), ce (compute GPA by semester), q (quit)
>> cs
Enter a subject code (i.e. 'MATH'): STAT
The student's subject specific GPA for 'STAT' courses is: 96.50%.
Menu Options: s (search), c (compute cGPA), cs (compute GPA by subject), ce (compute GPA by semester), q (quit)
>> ce
Enter a semester code (i.e. F25): W24
The student's W24 semester GPA is: 93.18%.
Menu Options: s (search), c (compute cGPA), cs (compute GPA by subject), ce (compute GPA by semester), q (quit)
>> q
Exited program.
```

## Functionality

- Search course marks in a CSV by course code.
- Calculate the cGPA of a user.
- Compute GPA by subject.
- Compute GPA by semester.

## Set-up

Please ensure that you have the g++ compiler installed.

To compile, please run:

`make`

Then place a CSV file that complies with the program's specified file format in the data folder, such as `marks.csv`.

To run, please enter:

`./bin/gpa ./data/example-marks.csv`