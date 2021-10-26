#include <iostream>
#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "ConteudoMinistrado.hpp"
#include "Console.hpp"

int main()
{
	Pessoa prof1{"João", 40};
	Disciplina dis1{"C++", nullptr};
	dis1.setProfessor(&prof1);
	dis1.adicionarConteudoMinistrado("Ponteiros", 4);
	dis1.adicionarConteudoMinistrado("Referencias", 2);
	Console::imprimirDadosDisciplina(dis1);
	// dis1.removerConteudoMinistrado(1);
	dis1.limparConteudos();
	Console::imprimirDadosDisciplina(dis1);
	return 0;
}