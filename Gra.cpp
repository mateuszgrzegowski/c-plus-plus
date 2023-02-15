#include "Gra.h"


Gra::Gra()
{
	this->nastepnyWyszukany=NULL;
}

Gra::~Gra()
{

}

Gra* Gra::przejdzDalej()
{
	return nastepna;
}

Gra* Gra::dalejWyszukiwarka()
{
	return this->nastepnyWyszukany;
}

void Gra::Wyszukany(Gra* obiekt)
{
	this->nastepnyWyszukany=obiekt;
}

void Gra::zerujWyszukany()
{
	this->nastepnyWyszukany=NULL;
}