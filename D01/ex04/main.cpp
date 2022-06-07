#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	int		pos;
	std::string	new_file;
	std::string	s1;
	std::string	s2;
	std::string	content;
	std::string	temp;
	std::string	res;
	if (ac != 4)
	{
		std::cout << "Error: wrong input" << std::endl;
		return 1;
	}
	new_file = av[1];			
	new_file += ".replace";			//Fichier a produire
	s1 = av[2];				
	s2 = av[3];
	std::ifstream flux(av[1]);		//ifstream->Ouverture pour lecture
	if (!flux.good())
	{
		std::cout << "Error: invalid file" << std::endl;
		return 1;
	}
	std::getline(flux, temp);		
	while (flux.eof() != 1)
	{
		content +=  temp;
		content += '\n';
		std::getline(flux, temp);	//Recuperation du contenu dans content
	}
	flux.close();
//.....................................................................................
	pos = content.find(s1);
	while ((pos = content.find(s1)) != -1)	//Remplacement de str1 par str2 dans content
	{
		res += content.substr(0, pos);
		res += s2;
		content = content.substr(pos + s1.length(), content.length());
	}

	std::ofstream flux2(new_file.c_str());	//Ouverture et ecriture sur le new_file
	flux2 << res;
	flux2.close();				//Fermeture du new_file
	return 0;

	return (0);
}
