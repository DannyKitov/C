typedef struct{
    char name[20];
    int num;
    float avr;
} Student;

int main(void)
{
    int n;
    do
    {
        printf("Enter a number of students: ");
        scanf("%d", &n);
    } while(n <= 0);
    Student students[n];
    printf("Enter the name, number in class and average grade for each student:\n");
    for(int i=0; i<n; i++)
    {
        printf("Student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Number in class: ");
        scanf("%d", &students[i].num);
        printf("Average grade: ");
        scanf("%f", &students[i].avr);
    }
    printf("\nStudent information:\n");
    for(int i=0; i<n; i++)
    {
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Number in class: %d\n", students[i].num);
        printf("Average grade: %.2f\n", students[i].avr);
    }
    return 0;
}