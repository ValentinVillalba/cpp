#include <string>
#include <iostream>

//se le resta el tamaño de ending al de str
//se crea un string a partir de ese numero
//se lo compara con ending
//return dice si el final de str es igual a ending

bool solution(std::string const &str, std::string const &ending) {
	return (std::string(str.end() - ending.size(), str.end()) == ending);
}

int main(){
	std::string word;
	std::string end;

	std::cout << "Ingrese una palabra: ";
	std::cin >> word;

	std::cout << "Ingrese el final de esa palabra: ";
	std::cin >> end;

	std::cout << solution(word, end) << std::endl;

	return 0;
}
