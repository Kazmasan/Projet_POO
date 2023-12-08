#pragma once
#include "Gestion.h"

ref class Personnel : public Gestion
{
public:
	virtual void afficher(System::Windows::Forms::DataGridView^ data) override;
	virtual void rafraichir(System::Windows::Forms::DataGridView^ data) override;
	virtual void ajouter() override;
	virtual void modifier() override;
	virtual void supprimer() override;
	void setNom(System::String^ nom);
	void setPrenom(System::String^ prenom);
	void setDate_embauche(System::String^ Date_embauche);
	void setId_superieur(System::String^ Id_superieur);
	void setID(System::String^ID);
	void setAdresse(System::String^ adresse);
private:
	System::String^ nom;
	System::String^ prenom;
	System::String^ Date_embauche;
	System::String^ Id_superieur;
	System::String^ ID;
	System::String^ adresse;
};