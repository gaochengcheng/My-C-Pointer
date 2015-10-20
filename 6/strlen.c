#include <stdlib.h>

 
 int main(){
 	char *str = "abcd";
 	int length = strlen(str);
 	printf("%d",length);
 	return 0;
 }
 int strlen(char *string){
 	
 	int length = 0;
 	
 	while( *string++ != '\0')
 		length += 1;
 	
 	return length;
 }
