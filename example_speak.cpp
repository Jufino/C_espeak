#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//-----------------------------------------------
void read_text(char text[]){
	char sys_text[strlen(text)+15];
	memset(&sys_text[0], 0, sizeof(sys_text));       
//-----------------------------------------------------------
	strcpy (sys_text,"espeak -ven '\''");                          
	strcat (sys_text,text);
	strcat (sys_text,"'\''");
	system(sys_text);
}

int main(void){
	read_text("Hello world");
	return 0;
}
