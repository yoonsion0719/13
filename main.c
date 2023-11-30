#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[100];
	double score;
}; 

int main(int argc, char *argv[]) {
	
	struct student s1={123,'s',4.50};
	
	s1.ID=123456;
	s1.name[0]='j';
	s1.score=4.20;
	

	printf("ID: %i\nname: %s\ngrade: %f",s1.ID,s1.name,s1.score);
	
	return 0;
}
