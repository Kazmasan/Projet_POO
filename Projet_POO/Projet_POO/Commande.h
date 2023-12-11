#pragma once
#include "gestion.h"

ref class Commande : public Gestion
{
public:
	void rafraichir(System::Windows::Forms::DataGridView^ data) override;
	void afficher(System::Windows::Forms::DataGridView^ data) override;
	void ajouter() override;
	void modifier() override;
	void supprimer() override;
	void setDateEmission(System::String^);
	void setDateLivraison(System::String^);
	void setNumClient(int^);
	void setRefCommande(System::String^);
private:
		System::String^ date_emission;
		System::String^ date_livraison;
		int^ num_client;
		System::String^ ref_commande;
};

