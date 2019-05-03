#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int input_n;
    cin >> input_n;
    int count = 0;

    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            for (int k = 1; k <= 3; k++)
                for (int l = 1; l <= 3; l++)
                    for (int m = 1; m <= 3; m++)
                        for (int n = 1; n <= 3; n++)
                            for (int o = 1; o <= 3; o++)
                                for (int p = 1; p <= 3; p++)
                                    for (int q = 1; q <= 3; q++)
                                        for (int r = 1; r <= 3; r++)
                                            if (i+j+k+l+m+n+o+p+q+r == input_n) count++;
    cout << count << endl;
    
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            for (int k = 1; k <= 3; k++)
                for (int l = 1; l <= 3; l++)
                    for (int m = 1; m <= 3; m++)
                        for (int n = 1; n <= 3; n++)
                            for (int o = 1; o <= 3; o++)
                                for (int p = 1; p <= 3; p++)
                                    for (int q = 1; q <= 3; q++)
                                        for (int r = 1; r <= 3; r++)
                                            if (i+j+k+l+m+n+o+p+q+r == input_n)
                                                printf("%d %d %d %d %d %d %d %d %d %d\n", i, j, k, l, m, n, o, p, q, r);

    return 0;
}
