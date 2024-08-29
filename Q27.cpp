#include <iostream>
using namespace std;

void printSpiral(int rows, int cols, int matrix[10][10])
{
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << matrix[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] << " ";
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

int main()
{
    int rows = 4;
    int cols = 4;
    int matrix[10][10] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    cout << "Spiral order of the matrix is: ";
    printSpiral(rows, cols, matrix);

    return 0;
}
