#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *timeConversion(char *s){
	int lens = strlen(s);
	char *stHour = (char*)malloc(6*sizeof(char));
	char *meridian = (char*)malloc(6*sizeof(char));

	stHour[0] = s[0];
	stHour[1] = s[1];
	stHour[2] = '\0';
	int intHour = atoi(stHour);

	meridian[0] = s[lens-2];
	meridian[1] = s[lens-1];
	meridian[2] = '\0';

	s[lens-2] = '\0';
	s[lens-1] = '\0';

	if( strcmp(meridian,"PM") == 0 ){
		if( intHour != 12 ){
			intHour += 12;
		}
	} else {
		if( intHour == 12 ){
			intHour = 0;
		}
	}

	sprintf(stHour,"%02d",intHour);
	strncpy(s,stHour,2);
	free(stHour);
	free(meridian);

	return s;
}

int main(){
	char *s = (char*)malloc(20*sizeof(char));
	sprintf(s,"%s","12:01:00AM");
	printf("%s\n", timeConversion(s) );
	return 0;
}
