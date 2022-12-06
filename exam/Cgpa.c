#include <stdio.h>
#include <stdlib.h>
// i decided to assign each grade to its value and just make it const.
#define a 5 
#define b 4
#define c 3
#define d 2
#define e 1
#define f 0

int main() {
	float firstSemester, secondSemester, total1, total2, sessionTotal, CGPA;
	int unit1=21, unit2=17;
	float phy121=3*a, phy195=2*b, chem101=2*b, chem171=2*c, math111=3*a, math121=3*a, eng101=2*a, gsp101=2*a, gsp111=2*a;
	printf("first semester result:");
	printf("\nPHY121: D\nPHY195: B\nCHEM101: B\nCHEM171: C\nMATH111: A\nMATH121: A\nENG101: B\nGSP101: B\nGSP111: A");
	float chem122=2*b, chem112=2*a, phy124=3*b, phy116=2*a, math122=3*a, eng102=3*a, gsp102=2*b;
	total1=(phy121+phy195+chem101+chem171+math111+math121+eng101+gsp101+gsp111);
	firstSemester=total1/unit1;
	printf("\nyour first semester CGPA is: %0.2f",firstSemester);
	printf("\n\nsecond semester result:");
	printf("\nCHEM122: B\nCHEM112: A\nPHY124: B\nPHY116: C\nMATH122: A\nENG101: A\nGSP102: B");
	firstSemester=(phy121+phy195+chem101+chem171+math111+math121+eng101+gsp101+gsp111)/unit1;
	total2=(chem122+chem112+phy124+phy116+math122+eng102+gsp102);
	secondSemester=total2/unit2;
	printf("\nyour second semester CGPA is: %0.2f",secondSemester);
	sessionTotal=total1+total2;
	CGPA= sessionTotal/(unit1+unit2);
	printf("\n\nyour CGPA is: %0.2f",CGPA);
	return 0;
}
