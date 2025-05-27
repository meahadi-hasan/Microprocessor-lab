#include <stdio.h>

int main() {
    int n = 5;
    int at[5], bt[5] = {3, 4, 3, 1, 6}, pid[5], ct[5], tat[5], wt[5];
    int done[5] = {0}, time = 0, completed = 0;

    printf("Enter Arrival Time: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &at[i]);
        pid[i] = i + 1;
    }

    while (completed < n) {
        int idx = -1, min_bt = 9999;

        for (int i = 0; i < n; i++) {
            if (!done[i] && at[i] <= time && bt[i] < min_bt) {
                min_bt = bt[i];
                idx = i;
            }
        }

        if (idx != -1) {
            time += bt[idx];
            ct[idx] = time;
            tat[idx] = ct[idx] - at[idx];
            wt[idx] = tat[idx] - bt[idx];
            done[idx] = 1;
            completed++;
        } else {
            time++;
        }
    }

    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", pid[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    return 0;
}
