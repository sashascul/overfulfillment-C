#include <stdio.h>
#include <string.h>

int puts1 (const char * ar);
char* strchr1 (char * ar, int ch);
unsigned int strlen1 (const char * ar);
char* strcpy1 (char* before, const char* from);

int main () {
	
	
	
}

int puts1 (const char * ar) {
	
	int i = 0;
	
	while (*(ar + i) != '\0') {
	
		putchar(*(ar + i));
		i++;
	
	}
	
	if (*(ar + i) == '\0') {
		putchar ('\n');
		return 0;
	}
	else
		return -1;
	
}

char* strchr1 (char * ar, int ch) {
	
	int i = 0;
	
	while (*(ar + i) != '\0') {
		
		if (*(ar + i) == (char)ch)
			break;
		i++;
				
	}
	
	return (ar + i);
	
}

unsigned int strlen1 (const char * ar) {
	
	int i = 0; 
	
	while (*(ar + i) != '\0')
		i++;
	
	return i;
	
}

char* strcpy1 (char* before, const char* from) {
	
	int i = 0;
	
	while (* (before + i) != '\0') {
		
		* (before + i) = *(from + i);
		i++;
	}
	
	return before;
	
}
