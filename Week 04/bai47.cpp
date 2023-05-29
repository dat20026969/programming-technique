#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;
char *nowhiteCharacter(char *stringWhite) {	
	while ((stringWhite[0] == ' ') || (stringWhite[0] == '\t')) {
		++stringWhite;
	}
	return stringWhite;
}
int main() {

	char stringLine[100];               

	printf("Enter a string: ");
	fgets(stringLine, sizeof(stringLine), stdin);

	cout<<nowhiteCharacter(stringLine)<<endl;;
	return(0);
}