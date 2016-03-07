#include <iostream>

using namespace std;

int main()
{
    const int STUDENT_COUNT = 3;
    const int GRADE_COUNT = 3;

    char grades[STUDENT_COUNT * GRADE_COUNT];
    int scores[STUDENT_COUNT * GRADE_COUNT];
    double gpas[STUDENT_COUNT];

    // get grade inputs
    for (int i=0; i<STUDENT_COUNT; i++)
    {
        if (i == 0)
        {
            cout << "Enter the scores for the first student: ";
        }
        else if (i == 1)
        {
            cout << "Enter the scores for the second student: ";
        }
        else
        {
            cout << "Enter the scores for the third student: ";
        }

        cin >> grades[i*GRADE_COUNT] >> grades[i*GRADE_COUNT + 1] >> grades[i*GRADE_COUNT + 2];
    }

    // convert grades to scores
    for (int i=0; i<STUDENT_COUNT*GRADE_COUNT; i++)
    {
        if (grades[i] == 'A' || grades[i] == 'a')
        {
            scores[i] = 4;
        }
        else if (grades[i] == 'B' || grades[i] == 'b')
        {
            scores[i] = 3;
        }
        else if (grades[i] == 'C' || grades[i] == 'c')
        {
            scores[i] = 2;
        }
        else if (grades[i] == 'D' || grades[i] == 'd')
        {
            scores[i] = 1;
        }
        else if (grades[i] == 'F' || grades[i] == 'f')
        {
            scores[i] = 0;
        }
    }

    // calculate gpas for each student
    for (int i=0; i<STUDENT_COUNT; i++)
    {
        gpas[i] = (scores[i*GRADE_COUNT] + scores[i*GRADE_COUNT + 1] + scores[i*GRADE_COUNT + 2]) / 3.0;

        if (i == 0)
        {
            cout << "Student 1 has a GPA of " << gpas[i] << endl;
        }
        else if (i == 1)
        {
            cout << "Student 2 has a GPA of " << gpas[i] << endl;
        }
        else
        {
            cout << "Student 3 has a GPA of " << gpas[i] << endl;
        }
    }

    return 0;
}
