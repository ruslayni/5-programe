#include <stdio.h>

// Function to count the sequences
int countSequences(int n) {
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i <= n; i++) {
        // Calculate the number of sequences using dynamic programming formula
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 12345;
    }

    return dp[n];
}

int main() {
    int n;
    printf("Enter the length of the sequence n (1 < n < 10000): ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("The number of desired sequences: %d\n", result);

    return 0;
}
