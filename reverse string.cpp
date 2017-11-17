//String Reverser 

#include <iostream> 
#include <algorithm>
#include <string>

int main ()
{
std::string foo("osizl gesingar"); 
std::sting copy (foo); 
std::cout << foo << '\n' << copy << '\n'; 

//der String kann individuell benannt werden. foo ist anscheinend irgendein inside joke. 

std::reverse(copy.begin(), copy.end(); 
std::cout << foo << '\n' << copy << '\n';
return 0; 
}

//das "Programm" spuckt das Ursprungswort oder den Satz 3 mal aus und reversed danach die Buchstaben. 
