#include <bits/stdc++.h>
using namespace std;

// Sort students by their marks
// If two students have same marks, then original order is preserved
// Stable sorting cares about the original order of elements

// Example of stable sorting
// Bubble sort,Insertion sort,Merge sort
// Example of unstable sorting
// Quick sort,Heap sort,Selection sort

// Bubble sort is stable because it compares adjacent elements and swaps them only if they are in wrong order
// So if two elements are equal, they will not be swapped and their order will be preserved

// Selection sort is unstable because it selects the maximum element and swaps it with the last element

struct Student
{
    string name;
    int marks;
};

bool sortStudents(Student s1, Student s2)
{
    return s1.marks < s2.marks;
};

int main()
{
    Student arr[] = {
        {"Namita", 90},

        {"Vranda", 91},
        {"Ayush", 90},
        {"Sneha", 75},
    };
    sort(arr, arr + 4, sortStudents);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i].name << " " << arr[i].marks << endl;
    }

    return 0;
}