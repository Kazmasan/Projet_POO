#pragma once
#include "GestionPersonnel.h"
#include "GestionClient.h"
#include "GestionArticle.h"
#include "GestionCommande.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_personnel;
	private: System::Windows::Forms::Button^ btn_clients;
	private: System::Windows::Forms::Button^ btn_stock;
	private: System::Windows::Forms::Button^ btn_commande;
	protected:


	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_personnel = (gcnew System::Windows::Forms::Button());
			this->btn_clients = (gcnew System::Windows::Forms::Button());
			this->btn_stock = (gcnew System::Windows::Forms::Button());
			this->btn_commande = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_personnel
			// 
			this->btn_personnel->AutoSize = true;
			this->btn_personnel->Location = System::Drawing::Point(155, 106);
			this->btn_personnel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_personnel->Name = L"btn_personnel";
			this->btn_personnel->Size = System::Drawing::Size(136, 28);
			this->btn_personnel->TabIndex = 0;
			this->btn_personnel->Text = L"Gestion du personnel";
			this->btn_personnel->UseVisualStyleBackColor = true;
			this->btn_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_personnel_Click);
			// 
			// btn_clients
			// 
			this->btn_clients->AutoSize = true;
			this->btn_clients->Location = System::Drawing::Point(155, 156);
			this->btn_clients->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_clients->Name = L"btn_clients";
			this->btn_clients->Size = System::Drawing::Size(136, 28);
			this->btn_clients->TabIndex = 1;
			this->btn_clients->Text = L"Gestion des clients";
			this->btn_clients->UseVisualStyleBackColor = true;
			this->btn_clients->Click += gcnew System::EventHandler(this, &MyForm::btn_clients_Click);
			// 
			// btn_stock
			// 
			this->btn_stock->Location = System::Drawing::Point(155, 206);
			this->btn_stock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_stock->Name = L"btn_stock";
			this->btn_stock->Size = System::Drawing::Size(136, 28);
			this->btn_stock->TabIndex = 2;
			this->btn_stock->Text = L"Gestion du stock";
			this->btn_stock->UseVisualStyleBackColor = true;
			this->btn_stock->Click += gcnew System::EventHandler(this, &MyForm::btn_stock_Click);
			// 
			// btn_commande
			// 
			this->btn_commande->Location = System::Drawing::Point(155, 252);
			this->btn_commande->Margin = System::Windows::Forms::Padding(2);
			this->btn_commande->Name = L"btn_commande";
			this->btn_commande->Size = System::Drawing::Size(136, 28);
			this->btn_commande->TabIndex = 3;
			this->btn_commande->Text = L"Gestion des commandes";
			this->btn_commande->UseVisualStyleBackColor = true;
			this->btn_commande->Click += gcnew System::EventHandler(this, &MyForm::btn_commande_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 430);
			this->Controls->Add(this->btn_commande);
			this->Controls->Add(this->btn_stock);
			this->Controls->Add(this->btn_clients);
			this->Controls->Add(this->btn_personnel);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void btn_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		GestionPersonnel^ gestionPersonnel = gcnew GestionPersonnel();

		// Ajoutez la fen�tre gestionPersonnel � MyForm
		this->Controls->Add(gestionPersonnel);

		// Configurez la position et la taille de gestionPersonnel
		gestionPersonnel->Location = System::Drawing::Point(0, 0);
		gestionPersonnel->Size = this->ClientSize;

		// D�finissez la propri�t� AutoSize de MyForm sur true
		this->AutoSize = true;

		// Amenez la fen�tre gestionPersonnel au premier plan
		gestionPersonnel->BringToFront();

		// Affichez la fen�tre gestionPersonnel
		gestionPersonnel->Show();
	}

	private: System::Void btn_clients_Click(System::Object^ sender, System::EventArgs^ e) {
		Gestionclient^ gestionClient = gcnew Gestionclient();

		// Ajoutez la fen�tre gestionPersonnel � MyForm
		this->Controls->Add(gestionClient);

		// Configurez la position et la taille de gestionPersonnel
		gestionClient->Location = System::Drawing::Point(0, 0);
		gestionClient->Size = this->ClientSize;

		// D�finissez la propri�t� AutoSize de MyForm sur true
		this->AutoSize = true;

		// Amenez la fen�tre gestionPersonnel au premier plan
		gestionClient->BringToFront();

		// Affichez la fen�tre gestionPersonnel
		gestionClient->Show();
	}
	private: System::Void btn_stock_Click(System::Object^ sender, System::EventArgs^ e) {
		GestionArticle^ gestionStock = gcnew GestionArticle();

		// Ajoutez la fen�tre gestionPersonnel � MyForm
		this->Controls->Add(gestionStock);

		// Configurez la position et la taille de gestionPersonnel
		gestionStock->Location = System::Drawing::Point(0, 0);
		gestionStock->Size = this->ClientSize;

		// D�finissez la propri�t� AutoSize de MyForm sur true
		this->AutoSize = true;

		// Amenez la fen�tre gestionPersonnel au premier plan
		gestionStock->BringToFront();

		// Affichez la fen�tre gestionPersonnel
		gestionStock->Show();
	}
private: System::Void btn_commande_Click(System::Object^ sender, System::EventArgs^ e) {
		GestionCommande^ gestionCommande = gcnew GestionCommande();

	// Ajoutez la fen�tre gestionPersonnel � MyForm
	this->Controls->Add(gestionCommande);

	// Configurez la position et la taille de gestionPersonnel
	gestionCommande->Location = System::Drawing::Point(0, 0);
	gestionCommande->Size = this->ClientSize;

	// D�finissez la propri�t� AutoSize de MyForm sur true
	this->AutoSize = true;

	// Amenez la fen�tre gestionPersonnel au premier plan
	gestionCommande->BringToFront();

	// Affichez la fen�tre gestionPersonnel
	gestionCommande->Show();
}
};
}
