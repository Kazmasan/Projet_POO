#pragma once
#include "Gestion.h"

ref class Article : public Gestion
{
private:
	System::String^ nom;
	System::String^ quantite_article;
	System::String^ nature;
	System::String^ ref_article;
public:
	//Je veux rajouter la méthode afficher de la classe Gestion mais qui prend en paramètre data un objet DataGrid
	virtual void afficher(System::Windows::Forms::DataGridView^ data) override;
	virtual void rafraichir(System::Windows::Forms::DataGridView^ data) override;
	virtual void ajouter() override;
	virtual void modifier() override;
	virtual void supprimer() override;
	void setNom(System::String^ nom);
	void setQuantite_article(System::String^ quantite_article);
	void setNature(System::String^ nature);
	void setRef_article(System::String^ ref_article);
};

