#pragma once
#include "Gestion.h"

ref class Personnel : public Gestion
{
public:
	virtual void afficher() override;
	virtual void rafraichir(System::Windows::Forms::DataGridView^ data) override;
	virtual void ajouter() override;
	virtual void modifier() override;
	virtual void supprimer() override;
	void setNom(System::String^ nom);
	void setPrenom(System::String^ prenom);
	void setDateEmbauche(System::String^ dateEmbauche);
	void setSuperieur(System::String^ superieur);
	void setID(System::String^ID);
private:
	System::String^ nom;
	System::String^ prenom;
	System::String^ dateEmbauche;
	System::String^ superieur;
	System::String^ ID;
};

