#include<iostream>
#include<cstring>
/* @author lordofwizard aka Advait Pandharpurkar
 Same Discription as Main.java File
 */

int main(){
	
	std::string ascChar;// initialisation of max characters 
	std::cout << "Message : \t";
	//std::cin.ignore();
	getline(std::cin, ascChar, '\n');
	// main for loop
	for(int i =0; i < ascChar.size() ; i++){
		if(ascChar[i] > 64 && ascChar[i] <78)ascChar[i] += 13;
		else if(ascChar[i] > 78 && ascChar[i] <90)ascChar[i] -= 13;
		else if(ascChar[i] > 96 && ascChar[i] <110)ascChar[i] +=13;
		else if(ascChar[i] > 109 && ascChar[i] <123)ascChar[i] -= 13;
}// all the checks 
	std::cout<<ascChar<<std::endl;
	return 0;
}// I know this is awesome right?
