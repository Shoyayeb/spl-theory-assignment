#include <stdio.h>

int main() {
    int n, i;
    float attendance, assignment, classTest, midTerm, termFinal, totalMarks, weightedTotal;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nStudent %d (Attendance, Assignments, Class Test, Midterm, Term Final):\n", i + 1);
        scanf("%f %f %f %f %f", &attendance, &assignment, &classTest, &midTerm, &termFinal);
        // Calculate weighted total based on the provided percentages
        weightedTotal = attendance  * 0.05 + assignment * 0.10 +
                        classTest * 0.15 + midTerm * 0.30 + termFinal * 0.40;

        printf("Student %d: ", i + 1);
        printf("Total:::: %f",weightedTotal);

        // Determine letter grade based on the weighted total and provided thresholds
        if (weightedTotal >= 90) {
            printf("A\n");
        } else if (weightedTotal >= 86) {
            printf("A-\n");
        } else if (weightedTotal >= 82) {
            printf("B+\n");
        } else if (weightedTotal >= 78) {
            printf("B\n");
        } else if (weightedTotal >= 74) {
            printf("B-\n");
        } else if (weightedTotal >= 70) {
            printf("C+\n");
        } else if (weightedTotal >= 66) {
            printf("C\n");
        } else if (weightedTotal >= 62) {
            printf("C-\n");
        } else if (weightedTotal >= 58) {
            printf("D+\n");
        } else if (weightedTotal >= 55) {
            printf("D\n");
        } else {
            printf("F\n");
        }
    }

    return 0;
}
