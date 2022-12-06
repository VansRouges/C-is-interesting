#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char NAME[] = "Vance";
    const int age = 22;
    char person[30], course[30];
   
    int personAge;
    double gpa;
    printf("Hey My name is %s, I'm %d. I might be an AI \n", NAME, age);
    printf("What's Yours? \n");
    fgets(person, 30, stdin);
    printf("Nice to meet you, %s ", person);
    printf("How old are you? \n");
    scanf("%d",&personAge);
    printf("%d huh? You are the same age with my daughter. What's your GPA? \n", personAge);
    scanf("%lf",&gpa);
    printf("%lf ? That's excellent \n", gpa);
    printf("what is the course your'e studying?\n");
    fgets(course, 20, stdin);
    printf("wow that is a great course, i love %s", course);
    return 0;
}