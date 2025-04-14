#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
    double distance() const {
        return sqrt(x * x + y * y);
    }
};

bool comparePoints(const Point& a, const Point& b) {
    return a.distance() < b.distance();
}

int func_sort_points() {
    int n;

    cout << "Enter the number of points: ";
    cin >> n;

    Point* points = new Point[n];
    cout << "Enter the coordinates (x y) for each point:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Point " << i + 1 << ": ";
        cin >> points[i].x >> points[i].y;
    }

    sort(points, points + n, comparePoints);

    cout << "Sorted points (by distance from origin):\n";
    for (int i = 0; i < n; ++i) {
        cout << points[i].x << " " << points[i].y << "\n";
    }

    delete[] points;

    return 0;
}

