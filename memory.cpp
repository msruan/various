#include <iostream>
#include <string>

using namespace std;

void print_info(string& s) {
    cout << "String: " << s << endl;
    cout << "Length: " << s.length() << " characters" << endl;
    cout << "Size (bytes): " << sizeof(s) << " bytes" << endl;
    cout << "Capacity: " << s.capacity() << " characters" << endl;
    cout << "Max Size: " << s.max_size() << " characters" << endl;
    cout << "---------" << endl;
}

int main() {
    string the_string = "content";

    print_info(the_string);
    for (int i = 0; i < 10; i++)
        the_string += the_string;
    print_info(the_string);

    return 0;
}

/*#include <iostream>
#include <vector>

void troca(int& a, int&b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}

std::vector<int> bubble_sort(std::vector<int> vetor,bool reverse=0) 
{
	bool houve_trocas;
	do
	{
		houve_trocas = 0;
		for (int j = 0; j < (vetor.size()-1);j++)
		{
			if (reverse)
			{
				if (vetor[j] > vetor[j+1])
				{
					troca(vetor[j],vetor[j+1]);
					houve_trocas = 1;
				}
			}
			else
			{
				if (vetor[j] < vetor[j+1])
				{
					troca(vetor[j],vetor[j+1]);
					houve_trocas = 1;
				}
			}
		}	
	}while(houve_trocas);
	return vetor;
}

/*std::vector<int> copy(std::vector<int> lista){
	std::vector<int> lista_out(0);
	for (int i = 0; i < lista.size(); i++)
		lista_out.push_back(lista[i]);
	return lista_out
}
std::vector<int> copy(std::vector<int> lista)
{
	return lista;
	//v2
	//return std::move(lista); //com o cabeçalho <utility>
}

std::vector<int> revert(std::vector<int> lista)
{
	unsigned len = lista.size();
	std::vector<int> lista_out(len);
    for (int i = 0; i < len; i++)
		lista_out[i] = lista[len-(1+i)];
    return lista_out;
}


void mostrar_vetor(std::vector<int> vetor)
{
	std::cout << "\n{";
	for (int i = 0; i < vetor.size(); i++)
		std::cout <<" " << vetor[i] << " |";
	std::cout << " }\n";	
}

int main()
{
	std::vector<int> vetor {1,2,3};
	std::cout << "Antes da troca:";
	mostrar_vetor(vetor);
	vetor = bubble_sort(vetor);
	std::cout << "Depois da troca:";
	mostrar_vetor(vetor);
}
*/

