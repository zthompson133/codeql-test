#include <time.h>
#include <stdlib.h>
#include <stdio.h>
char *gets(char*);

int main() {
	char buf[50], buf1[50], buf2[50];
	printf("Enter name: ");
	char *name = gets(buf1);
	printf("Enter class: ");
	char *class = gets(buf2);
	srandom(time(NULL));
	double radius = (double)random()/1000.;
	double area = 3.1415926*radius*radius;
	sprintf(buf, "Name: %s Class: %s Area: %f", name, class, area);
	printf("%s\n", buf);
	printf("Demo done\n");
	return 0;
}

