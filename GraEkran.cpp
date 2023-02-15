#include "GraEkran.h"

GraEkran::GraEkran()
{

}

GraEkran::~GraEkran()
{

}

void GraEkran::Wyswietl()
{
	cout<<"\n\n\n";
	cout<<"                                   Kliknij ENTER aby wrocic";
}


void GraEkran::Akcja()
{
	Wyswietl();
	int klawisz=0;
	do
	{
		klawisz= _getch();
	}while(klawisz!=13);
}