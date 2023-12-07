#pragma once
#include "Gestion.h"

ref class Client : public Gestion
{
private : 
	System::String^ nom;
	System::String^ prenom;
	System::String^ naissance;
	System::String^ id;
public:
	//Je veux rajouter la méthode afficher de la classe Gestion mais qui prend en paramètre data un objet DataGrid
	virtual void afficher(System::Windows::Forms::DataGridView^ data) override;
	virtual void rafraichir(System::Windows::Forms::DataGridView^ data) override;
	virtual void ajouter() override;
	virtual void modifier() override;
	virtual void supprimer() override;
	void setNom(System::String^ nom);
	void setPrenom(System::String^ prenom);
	void setNaissance(System::String^ naissance);
	void setId(System::String^ id);
};
