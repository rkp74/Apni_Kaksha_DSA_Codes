#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // rs stands for row start.
    // re stands for row end.
    // cs stands for coloumn start.
    // ce stands for coloumn end.
    int rs = 0, re = n - 1, cs = 0, ce = m - 1;

    while (rs <= re && cs <= ce)
    {
        // for row start
        for (int col = cs; col <= ce; col++)
        {
            cout << arr[rs][col] << " ";
        }
        rs++;

        // for coloumn end
        for (int row = rs; row <= re; row++)
        {
            cout << arr[row][ce] << " ";
        }
        ce--;

        // for row end
        for (int col = ce; col >= cs; col--)
        {
            cout << arr[re][col] << " ";
        }
        re--;

        // for coloumn start
        for (int row = re; row >= rs; row--)
        {
            cout << arr[row][cs] << " ";
        }
        cs++;
    }
}