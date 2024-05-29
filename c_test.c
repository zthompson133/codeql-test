#include <stdio.h>
char *gets(char*);

int main() {
	char buf[50], buf1[50], buf2[50];
	printf("Enter name: ");
	char *name = gets(buf1);
	printf("Enter class: ");
	char *class = gets(buf2);
	sprintf(buf, "Name: %s Class: %s", name, class);
	printf("%s\n", buf);
	return 0;
}

