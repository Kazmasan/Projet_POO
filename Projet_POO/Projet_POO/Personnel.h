#pragma once
#include "Gestion.h"

ref class Personnel : public Gestion
{
public:
	//Je veux rajouter la m�thode afficher de la classe Gestion mais qui prend en param�tre data un objet DataGrid
	virtual void afficher(System::Windows::Forms::DataGridView^ data) override;
	virtual void ajouter() override;
	virtual void modifier() override;
	virtual void supprimer() override;
};

