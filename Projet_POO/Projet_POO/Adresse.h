#pragma once
#include "gestion.h"
using namespace System;
using namespace System::Collections::Generic;
ref class Adresse : public Gestion
{
private:
	String^ rue;
	String^ ville;
	String^ codePostal;
	String^ pays;
	int idClient;
	String^ type;
	int^ id_adresse;
public:
	virtual void rafraichir(System::Windows::Forms::DataGridView^ data) override;
	virtual void afficher(System::Windows::Forms::DataGridView^ data) override;
	virtual void ajouter() override;
	virtual void modifier() override;
	virtual void supprimer() override;
	void setIdAdresse(int^);
	void setRue(String^);
	void setVille(String^);
	void setCodePostal(String^);
	void setPays(String^);
	void setIdClient(int);
	void setType(String^);

};

