#include <iostream>

using namespace std;

int grade2score(char grade);
// Precondition: the variable 'grade' is a single character and is either A, B, C, D, F
// Postcondition: 4-0 or -1 is returned.  -1 is returned if 'grade' isn't A, B, C, D, F
double score2gpa(int scores[], int gradeCount);
// Precondition: Scores is an int array with each value 4,3,2,1, or 0.
//               'gradeCount' is the number of grades for that student.
//               It's expected that 'gradeCount' is actually an int and so
//               it is recast as a double

int main()
{
    const int STUDENT_COUNT = 3;
    const int GRADE_COUNT = 5;

    char grades[STUDENT_COUNT * GRADE_COUNT];
    int scores[STUDENT_COUNT * GRADE_COUNT];
    double gpas[STUDENT_COUNT];

    // get grade inputs
    for (int i=0; i<STUDENT_COUNT; i++)
    {
        // prompt the user that you're looking at a particular user
        cout << "Enter the scores for student #" << i+1 << ": ";

        // read in as many grades as is specified by GRADE_COUNT
        for (int j=0; j < GRADE_COUNT; j++)
        {
            cin >> grades[i*GRADE_COUNT + j];
        }
    }

    // convert grades to scores
    for (int i=0; i<STUDENT_COUNT*GRADE_COUNT; i++)
    {
        scores[i] = grade2score(grades[i]);
    }

    // calculate gpas for each student
    for (int i=0; i<STUDENT_COUNT; i++)
    {
        int temp[GRADE_COUNT];
        for (int j = 0; j<GRADE_COUNT; j++)
        {
            temp[j] = scores[i*GRADE_COUNT + j];
        }
        gpas[i] = score2gpa(temp, GRADE_COUNT);

        cout << "Student #" << i+1 << " has a GPA of " << gpas[i] << endl;
    }
    
    return 0;
}

// convert an array of scores to a decimal GPA
double score2gpa(int scores[], int gradeCount)
{
    double gpa = 0;

    for (int i=0; i < gradeCount; i++)
    {
        gpa += scores[i];
    }

    gpa /= gradeCount;

    return gpa;
}

// convert a character grade to a numerical score
int grade2score(char grade)
{
    if (grade == 'A' || grade == 'a')
    {
        return 4;
    }
    else if (grade == 'B' || grade == 'b')
    {
        return 3;
    }
    else if (grade == 'C' || grade == 'c')
    {
        return 2;
    }
    else if (grade == 'D' || grade == 'd')
    {
        return 1;
    }
    else if (grade == 'F' || grade == 'f')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
