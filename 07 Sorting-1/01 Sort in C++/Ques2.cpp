#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};

bool myCmp(Point p1, Point p2)
{
    return p1.x < p2.x;
}

// Printing the points in increasing order of x

int main()
{
    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    sort(arr, arr + 3, myCmp);
    for (Point p : arr)
    {
        cout << p.x << " " << p.y << endl;
    }
    return 0;
}