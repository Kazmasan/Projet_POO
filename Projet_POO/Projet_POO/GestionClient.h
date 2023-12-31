#pragma once
#include "Client.h"
#include "Adresse_client.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;



namespace ProjetPOO {

	/// <summary>
	/// Description r�sum�e de Gestionclient
	/// </summary>
	public ref class Gestionclient : public System::Windows::Forms::UserControl
	{


	private : Client^ fctn = gcnew Client();
			
	public:
		Gestionclient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		void clear()
		{
			txt_id->Clear();
			txt_nom->Clear();
			txt_prenom->Clear();
			txt_anniv->Clear();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~Gestionclient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_id;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btn_refresh;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_menu;
	private: System::Windows::Forms::Button^ btn_affiche;
	private: System::Windows::Forms::Button^ btn_ajouter;
	private: System::Windows::Forms::Button^ btn_modif;
	private: System::Windows::Forms::Button^ btn_suppr;
	





	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_anniv;


	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::Label^ lbl_id;
	private: System::Windows::Forms::Label^ lbl_nom;
	private: System::Windows::Forms::Label^ lbl_prenom;
	private: System::Windows::Forms::Label^ lbl_anniv;
	private: System::Windows::Forms::Label^ indic_date;
	private: System::Windows::Forms::Button^ btn_adresse;






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
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->btn_refresh = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_menu = (gcnew System::Windows::Forms::Button());
			this->btn_affiche = (gcnew System::Windows::Forms::Button());
			this->btn_ajouter = (gcnew System::Windows::Forms::Button());
			this->btn_modif = (gcnew System::Windows::Forms::Button());
			this->btn_suppr = (gcnew System::Windows::Forms::Button());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_anniv = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->lbl_nom = (gcnew System::Windows::Forms::Label());
			this->lbl_prenom = (gcnew System::Windows::Forms::Label());
			this->lbl_anniv = (gcnew System::Windows::Forms::Label());
			this->indic_date = (gcnew System::Windows::Forms::Label());
			this->btn_adresse = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(65, 288);
			this->txt_id->Margin = System::Windows::Forms::Padding(2);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(56, 20);
			this->txt_id->TabIndex = 7;
			// 
			// btn_refresh
			// 
			this->btn_refresh->AutoSize = true;
			this->btn_refresh->Location = System::Drawing::Point(291, 20);
			this->btn_refresh->Margin = System::Windows::Forms::Padding(2);
			this->btn_refresh->Name = L"btn_refresh";
			this->btn_refresh->Size = System::Drawing::Size(70, 23);
			this->btn_refresh->TabIndex = 6;
			this->btn_refresh->Text = L"Rafraichir";
			this->btn_refresh->UseVisualStyleBackColor = true;
			this->btn_refresh->Click += gcnew System::EventHandler(this, &Gestionclient::btn_refresh_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(44, 46);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(317, 192);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Gestionclient::dataGridView1_CellContentDoubleClick);
			// 
			// btn_menu
			// 
			this->btn_menu->AutoSize = true;
			this->btn_menu->Location = System::Drawing::Point(44, 20);
			this->btn_menu->Margin = System::Windows::Forms::Padding(2);
			this->btn_menu->Name = L"btn_menu";
			this->btn_menu->Size = System::Drawing::Size(77, 23);
			this->btn_menu->TabIndex = 4;
			this->btn_menu->Text = L"Menu";
			this->btn_menu->UseVisualStyleBackColor = true;
			this->btn_menu->Click += gcnew System::EventHandler(this, &Gestionclient::btn_menu_Click);
			// 
			// btn_affiche
			// 
			this->btn_affiche->Location = System::Drawing::Point(44, 241);
			this->btn_affiche->Name = L"btn_affiche";
			this->btn_affiche->Size = System::Drawing::Size(77, 23);
			this->btn_affiche->TabIndex = 8;
			this->btn_affiche->Text = L"Afficher";
			this->btn_affiche->UseVisualStyleBackColor = true;
			this->btn_affiche->Click += gcnew System::EventHandler(this, &Gestionclient::btn_affiche_Click);
			// 
			// btn_ajouter
			// 
			this->btn_ajouter->Location = System::Drawing::Point(128, 241);
			this->btn_ajouter->Name = L"btn_ajouter";
			this->btn_ajouter->Size = System::Drawing::Size(79, 23);
			this->btn_ajouter->TabIndex = 9;
			this->btn_ajouter->Text = L"Ajouter";
			this->btn_ajouter->UseVisualStyleBackColor = true;
			this->btn_ajouter->Click += gcnew System::EventHandler(this, &Gestionclient::btn_ajouter_Click);
			// 
			// btn_modif
			// 
			this->btn_modif->Location = System::Drawing::Point(212, 241);
			this->btn_modif->Name = L"btn_modif";
			this->btn_modif->Size = System::Drawing::Size(74, 23);
			this->btn_modif->TabIndex = 10;
			this->btn_modif->Text = L"Modifier";
			this->btn_modif->UseVisualStyleBackColor = true;
			this->btn_modif->Click += gcnew System::EventHandler(this, &Gestionclient::btn_modif_Click);
			// 
			// btn_suppr
			// 
			this->btn_suppr->Location = System::Drawing::Point(292, 242);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(70, 23);
			this->btn_suppr->TabIndex = 11;
			this->btn_suppr->Text = L"Supprimer";
			this->btn_suppr->UseVisualStyleBackColor = true;
			this->btn_suppr->Click += gcnew System::EventHandler(this, &Gestionclient::btn_suppr_Click);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(106, 316);
			this->txt_nom->Margin = System::Windows::Forms::Padding(2);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(162, 20);
			this->txt_nom->TabIndex = 12;
			// 
			// txt_anniv
			// 
			this->txt_anniv->Location = System::Drawing::Point(106, 364);
			this->txt_anniv->Margin = System::Windows::Forms::Padding(2);
			this->txt_anniv->Name = L"txt_anniv";
			this->txt_anniv->Size = System::Drawing::Size(162, 20);
			this->txt_anniv->TabIndex = 13;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(106, 340);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(2);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(162, 20);
			this->txt_prenom->TabIndex = 14;
			// 
			// lbl_id
			// 
			this->lbl_id->AutoSize = true;
			this->lbl_id->Location = System::Drawing::Point(26, 291);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(24, 13);
			this->lbl_id->TabIndex = 15;
			this->lbl_id->Text = L"ID :";
			// 
			// lbl_nom
			// 
			this->lbl_nom->AutoSize = true;
			this->lbl_nom->Location = System::Drawing::Point(62, 319);
			this->lbl_nom->Name = L"lbl_nom";
			this->lbl_nom->Size = System::Drawing::Size(29, 13);
			this->lbl_nom->TabIndex = 16;
			this->lbl_nom->Text = L"Nom";
			// 
			// lbl_prenom
			// 
			this->lbl_prenom->AutoSize = true;
			this->lbl_prenom->Location = System::Drawing::Point(42, 343);
			this->lbl_prenom->Name = L"lbl_prenom";
			this->lbl_prenom->Size = System::Drawing::Size(49, 13);
			this->lbl_prenom->TabIndex = 17;
			this->lbl_prenom->Text = L"Prenom :";
			// 
			// lbl_anniv
			// 
			this->lbl_anniv->AutoSize = true;
			this->lbl_anniv->Location = System::Drawing::Point(3, 367);
			this->lbl_anniv->Name = L"lbl_anniv";
			this->lbl_anniv->Size = System::Drawing::Size(98, 13);
			this->lbl_anniv->TabIndex = 18;
			this->lbl_anniv->Text = L"Date d\'anniversaire";
			// 
			// indic_date
			// 
			this->indic_date->AutoSize = true;
			this->indic_date->Location = System::Drawing::Point(12, 380);
			this->indic_date->Name = L"indic_date";
			this->indic_date->Size = System::Drawing::Size(69, 13);
			this->indic_date->TabIndex = 19;
			this->indic_date->Text = L"JJ-MM-AAAA";
			// 
			// btn_adresse
			// 
			this->btn_adresse->Location = System::Drawing::Point(281, 316);
			this->btn_adresse->Name = L"btn_adresse";
			this->btn_adresse->Size = System::Drawing::Size(100, 66);
			this->btn_adresse->TabIndex = 20;
			this->btn_adresse->Text = L"Adresse client";
			this->btn_adresse->UseVisualStyleBackColor = true;
			this->btn_adresse->Click += gcnew System::EventHandler(this, &Gestionclient::btn_adresse_Click);
			// 
			// Gestionclient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->Controls->Add(this->btn_adresse);
			this->Controls->Add(this->indic_date);
			this->Controls->Add(this->lbl_anniv);
			this->Controls->Add(this->lbl_prenom);
			this->Controls->Add(this->lbl_nom);
			this->Controls->Add(this->lbl_id);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_anniv);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->btn_suppr);
			this->Controls->Add(this->btn_modif);
			this->Controls->Add(this->btn_ajouter);
			this->Controls->Add(this->btn_affiche);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->btn_refresh);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_menu);
			this->MinimumSize = System::Drawing::Size(425, 406);
			this->Name = L"Gestionclient";
			this->Size = System::Drawing::Size(425, 406);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btn_affiche_Click(System::Object^ sender, System::EventArgs^ e) {


	if (txt_id->Text != "" || txt_nom->Text != "" || txt_prenom->Text != "" || txt_anniv->Text != "")
	{
		fctn->setId(txt_id->Text);
		fctn->setNom(txt_nom->Text);
		fctn->setPrenom(txt_prenom->Text);
		fctn->setNaissance(txt_anniv->Text);
		fctn->afficher(dataGridView1);
		clear();
	}
	else
	{
		MessageBox::Show("Champs requis non-remplis ou incorrect");
	}

}
private: System::Void btn_refresh_Click(System::Object^ sender, System::EventArgs^ e) {
	fctn->rafraichir(dataGridView1);
	clear();
}
private: System::Void btn_ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_id->Text == "" && txt_nom->Text != "" && txt_prenom->Text != "" && txt_anniv->Text != "")
	{ 
		fctn->setNom(txt_nom->Text);
		fctn->setPrenom(txt_prenom->Text);
		fctn->setNaissance(txt_anniv->Text);
		fctn->ajouter();
		clear();
		fctn->rafraichir(dataGridView1);
	}
	else
	{
		MessageBox::Show("Champs requis non-remplis ou incorrect (veuillez laissez ID vide)");
	}
	
}


private: System::Void btn_suppr_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txt_id->Text != "")
	{
		fctn->setId(txt_id->Text);
		fctn->supprimer();
		clear();
		fctn->rafraichir(dataGridView1);
	}
	else
	{
		MessageBox::Show("Veuillez remplir le champ ID");
	}
}

private: System::Void btn_modif_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_id->Text != "" && ( txt_nom->Text != "" || txt_prenom->Text != "" || txt_anniv->Text != ""))
	{
		fctn->setId(txt_id->Text);
		fctn->setNom(txt_nom->Text);
		fctn->setPrenom(txt_prenom->Text);
		fctn->setNaissance(txt_anniv->Text);
		fctn->modifier();
		clear();
		fctn->rafraichir(dataGridView1);
	}
	else
	{
		MessageBox::Show("Champs requis non-remplis ou incorrect");
	}
}
private: System::Void btn_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}

private: System::Void dataGridView1_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// V�rifiez si l'indice de la ligne est valide
	if (e->RowIndex >= 0) {
		// R�cup�rez la ligne enti�re
		DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];

		// Acc�dez aux valeurs de chaque cellule de la ligne
		txt_id->Text = selectedRow->Cells["Num_Client"]->Value->ToString();  // Remplacez "Num_Client" par le nom de la colonne
		txt_nom->Text = selectedRow->Cells["Nom"]->Value->ToString();  // Remplacez "Nom" par le nom de la colonne
		txt_prenom->Text = selectedRow->Cells["Prenom"]->Value->ToString();  // Remplacez "Prenom" par le nom de la colonne
		String^ date = selectedRow->Cells["Date_naissance"]->Value->ToString();  // Remplacez "Date_naissance" par le nom de la colonne
		String^ texteTronque = date->Substring(0, date->Length - 9);
		txt_anniv->Text = texteTronque;
	}
}

	private: System::Void btn_adresse_Click(System::Object^ sender, System::EventArgs^ e) {

		int id = Convert::ToInt32(txt_id->Text);
		Adresse_client^ adresse = gcnew Adresse_client(id);
		// Ajoutez la fen�tre gestionPersonnel � MyForm
		this->Controls->Add(adresse);

		// Configurez la position et la taille de gestionPersonnel
		adresse->Location = System::Drawing::Point(0, 0);
		adresse->Size = this->ClientSize;

		// D�finissez la propri�t� AutoSize de MyForm sur true
		this->AutoSize = true;

		// Amenez la fen�tre gestionPersonnel au premier plan
		adresse->BringToFront();

		// Affichez la fen�tre gestionPersonnel
		adresse->Show();

	}

};
}
