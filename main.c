#include<stdio.h>
/* @author lordofwizard aka Advait Pandharpurkar
 Same Discription as Main.java File
 */

int main(){
	
	char ascChar[500];// initialisation of max characters 
	printf("\nMessage : \t");// input
	scanf("%[^\n]%*c",ascChar);
	
	// main for loop
	for(int i =0; i < sizeof(ascChar) ; i++){
		if(ascChar[i] > 64 && ascChar[i] <78)ascChar[i] += 13;
		else if(ascChar[i] > 78 && ascChar[i] <90)ascChar[i] -= 13;
		else if(ascChar[i] > 96 && ascChar[i] <110)ascChar[i] +=13;
		else if(ascChar[i] > 109 && ascChar[i] <123)ascChar[i] -= 13;
}// all the checks 
	printf("\n %s\n",ascChar);
	return 0;
}// I know this is awesome right?
