#include <stdio.h>
#include<string.h>



typedef struct {
    char name[100];
    int sID;
    double ct1, ct2, ct3, ct4, best3;
} Student;


int main(){

    Student students[2]= {
        {
            "ABD",
            2205888,
            15,19,8,15,0
        },
        {
            "ABE",
            18,15,16
        }
    };

    Student *s1 = &students[0];
    Student *s2 = &students[1];

    printf("%s, %d, %lf\n",(*s1).name, s1->sID, s1->ct1);
    printf("%s, %d, %lf\n", s2->name, s2->sID, s2->ct1);


    /// printf("%d\n\n\n", sizeof(students[0]));
    printf("%s, %d, %lf\n", students[0].name, students[0].sID, students[0].ct1);
    printf("%s, %d, %lf\n", students[1].name, students[1].sID, students[1].ct1);

    /*
    struct Student  s1;
    std s2 = {
        "ABD",
        2205888,
        15,19,8,15,0
    };

    s1.sID = 2205999;
    s1.ct1 = 20;
    strcpy(s1.name, "ABC");

    printf("%s, %d, %lf\n", s1.name, s1.sID, s1.ct1);
    printf("%s, %d, %lf\n", s2.name, s2.sID, s2.ct1);
*/

    return 0;
}
