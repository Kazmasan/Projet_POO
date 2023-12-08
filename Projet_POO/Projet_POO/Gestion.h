#pragma once
ref class Gestion
{
public:
	//void afficher avec entrer data dataGred
	virtual void afficher(System::Windows::Forms::DataGridView^ data) = 0;
	virtual void rafraichir(System::Windows::Forms::DataGridView^ data) = 0;
	virtual void ajouter() = 0;
	virtual void modifier() = 0;
	virtual void supprimer() = 0;
};