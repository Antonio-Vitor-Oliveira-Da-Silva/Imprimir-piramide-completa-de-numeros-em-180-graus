#include <stdio.h>

// Print the pattern upto n
void printPattern(int n)
{
    // Printing upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }

    // printing lower part
    for (int i = n - 1; i > 0; i--) {
        for (int j = i; j > 0; j--)
            printf("%d", i);
        printf("\n");
    }
}

// Driver Code
int main()
{
    int n = 8;
    printPattern(n);
    return 0;
}