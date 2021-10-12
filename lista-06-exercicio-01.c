#include<stdio.h>
#include<stdlib.h>

char * myStrcpy (char *, char *);

char * myStrcat (char *, char *);

int myStrlen (char *);

int myStrcmp (char *, char *);

char myToupper (char);

char myTolower (char);

int main(void) {
	char *t1, *t2, *t3, a = 'r', b = 'R';
	
	t1 = (char *) malloc(sizeof(char));
	t2 = (char *) malloc(sizeof(char));	
	t3 = (char *) malloc(sizeof(char));
	
	t1 = "Hello world";
	t3 = "Hello world";
	
	myStrcpy(t2, t1);
	
	printf("strpy -> %s \n", t2);
	
	myStrcat(t2, t1);
	
	printf("strcat -> %s \n", t2);
	
	printf("strcmp -> %d \n", myStrcmp(t3, t1));
	
	printf("toupper -> %c \n", myToupper(a));
	
	printf("toupper -> %c \n ", myTolower(b));
	
	free(t1);
	free(t2);
	free(t3);
	return 0;
}

char * myStrcpy (char * dest, char * origin) {
	int i = 0;
	
	while (origin[i] != '\0') {
		dest[i] = origin[i];
		i++;
	}
	
	return dest;
}

int myStrlen(char *text) {
	int i = 0;
	
	while (text[i] != '\0') {
		i++;
	}
	
	return i;
}

int myStrcmp (char * str1, char * str2) {	
	if(str1 == str2) {
		return 0;
	} else {
		if(str1 < str2) {
			return -1;		
		} else {
			return 1;
		}
	}
}

char * myStrcat(char * dest, char * origin) {
	int i = 0, size = myStrlen(dest);
	
	while (origin[i] != '\0') {
		dest[size++] = origin[i];
		i++;
	}
	
	return dest; 
}

char myToupper(char c) {
	if(c >= 65 && c <= 90) {
		return c;
	}
	
	return c - 32;
}

char myTolower(char c) {
	if(c >= 97 && c <= 122) {
		return c;
	}
	
	return c + 32;
}
