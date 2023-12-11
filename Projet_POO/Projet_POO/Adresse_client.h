#pragma once
#include "Adresse.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjetPOO {

	/// <summary>
	/// Description résumée de Adresse_client
	/// </summary>
	public ref class Adresse_client : public System::Windows::Forms::UserControl
	{
	private : Adresse^ adresse = gcnew Adresse;
	public:
		Adresse_client(int Id)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			id = Id;
			Adresse^ adresse = gcnew Adresse;
			adresse->setIdClient(id);
			adresse->rafraichir(dataGridView1);
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Adresse_client()
		{
			if (components)
			{
				delete components;
			}
		}
	private : int id;


	private: System::Windows::Forms::Button^ btn_suppr;
	protected:
	private: System::Windows::Forms::Button^ btn_modif;
	private: System::Windows::Forms::Button^ btn_ajouter;

	private: System::Windows::Forms::Button^ btn_refresh;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_menu;
	private: System::Windows::Forms::TextBox^ txt_idadresse;
	private: System::Windows::Forms::TextBox^ txt_rue;
	private: System::Windows::Forms::TextBox^ txt_ville;
	private: System::Windows::Forms::TextBox^ txt_pays;






	private: System::Windows::Forms::TextBox^ txt_codepostal;
	private: System::Windows::Forms::ComboBox^ type;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label7;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_suppr = (gcnew System::Windows::Forms::Button());
			this->btn_modif = (gcnew System::Windows::Forms::Button());
			this->btn_ajouter = (gcnew System::Windows::Forms::Button());
			this->btn_refresh = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_menu = (gcnew System::Windows::Forms::Button());
			this->txt_idadresse = (gcnew System::Windows::Forms::TextBox());
			this->txt_rue = (gcnew System::Windows::Forms::TextBox());
			this->txt_ville = (gcnew System::Windows::Forms::TextBox());
			this->txt_pays = (gcnew System::Windows::Forms::TextBox());
			this->txt_codepostal = (gcnew System::Windows::Forms::TextBox());
			this->type = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_suppr
			// 
			this->btn_suppr->Location = System::Drawing::Point(287, 235);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(126, 23);
			this->btn_suppr->TabIndex = 28;
			this->btn_suppr->Text = L"Supprimer";
			this->btn_suppr->UseVisualStyleBackColor = true;
			this->btn_suppr->Click += gcnew System::EventHandler(this, &Adresse_client::btn_suppr_Click);
			// 
			// btn_modif
			// 
			this->btn_modif->Location = System::Drawing::Point(144, 235);
			this->btn_modif->Name = L"btn_modif";
			this->btn_modif->Size = System::Drawing::Size(137, 23);
			this->btn_modif->TabIndex = 27;
			this->btn_modif->Text = L"Modifier";
			this->btn_modif->UseVisualStyleBackColor = true;
			this->btn_modif->Click += gcnew System::EventHandler(this, &Adresse_client::btn_modif_Click);
			// 
			// btn_ajouter
			// 
			this->btn_ajouter->Location = System::Drawing::Point(3, 235);
			this->btn_ajouter->Name = L"btn_ajouter";
			this->btn_ajouter->Size = System::Drawing::Size(135, 23);
			this->btn_ajouter->TabIndex = 26;
			this->btn_ajouter->Text = L"Ajouter";
			this->btn_ajouter->UseVisualStyleBackColor = true;
			this->btn_ajouter->Click += gcnew System::EventHandler(this, &Adresse_client::btn_ajouter_Click);
			// 
			// btn_refresh
			// 
			this->btn_refresh->AutoSize = true;
			this->btn_refresh->Location = System::Drawing::Point(310, 12);
			this->btn_refresh->Margin = System::Windows::Forms::Padding(2);
			this->btn_refresh->Name = L"btn_refresh";
			this->btn_refresh->Size = System::Drawing::Size(70, 23);
			this->btn_refresh->TabIndex = 23;
			this->btn_refresh->Text = L"Rafraichir";
			this->btn_refresh->UseVisualStyleBackColor = true;
			this->btn_refresh->Click += gcnew System::EventHandler(this, &Adresse_client::btn_refresh_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 38);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(410, 192);
			this->dataGridView1->TabIndex = 22;
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Adresse_client::dataGridView1_CellContentDoubleClick);
			// 
			// btn_menu
			// 
			this->btn_menu->AutoSize = true;
			this->btn_menu->Location = System::Drawing::Point(31, 12);
			this->btn_menu->Margin = System::Windows::Forms::Padding(2);
			this->btn_menu->Name = L"btn_menu";
			this->btn_menu->Size = System::Drawing::Size(95, 23);
			this->btn_menu->TabIndex = 21;
			this->btn_menu->Text = L"Menu précédent";
			this->btn_menu->UseVisualStyleBackColor = true;
			this->btn_menu->Click += gcnew System::EventHandler(this, &Adresse_client::btn_menu_Click);
			// 
			// txt_idadresse
			// 
			this->txt_idadresse->Location = System::Drawing::Point(125, 279);
			this->txt_idadresse->Name = L"txt_idadresse";
			this->txt_idadresse->Size = System::Drawing::Size(37, 20);
			this->txt_idadresse->TabIndex = 29;
			// 
			// txt_rue
			// 
			this->txt_rue->Location = System::Drawing::Point(106, 305);
			this->txt_rue->Name = L"txt_rue";
			this->txt_rue->Size = System::Drawing::Size(175, 20);
			this->txt_rue->TabIndex = 30;
			// 
			// txt_ville
			// 
			this->txt_ville->Location = System::Drawing::Point(106, 331);
			this->txt_ville->Name = L"txt_ville";
			this->txt_ville->Size = System::Drawing::Size(175, 20);
			this->txt_ville->TabIndex = 31;
			// 
			// txt_pays
			// 
			this->txt_pays->Location = System::Drawing::Point(220, 357);
			this->txt_pays->Name = L"txt_pays";
			this->txt_pays->Size = System::Drawing::Size(61, 20);
			this->txt_pays->TabIndex = 32;
			// 
			// txt_codepostal
			// 
			this->txt_codepostal->Location = System::Drawing::Point(107, 357);
			this->txt_codepostal->Name = L"txt_codepostal";
			this->txt_codepostal->Size = System::Drawing::Size(55, 20);
			this->txt_codepostal->TabIndex = 34;
			// 
			// type
			// 
			this->type->FormattingEnabled = true;
			this->type->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Facturation", L"Livraison" });
			this->type->Location = System::Drawing::Point(324, 304);
			this->type->Name = L"type";
			this->type->Size = System::Drawing::Size(87, 21);
			this->type->TabIndex = 35;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 282);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Id_Adresse";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(73, 308);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Rue";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(74, 334);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Ville";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(184, 360);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 13);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Pays";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 360);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Code_Postal";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(287, 308);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Type";
			// 
			// Adresse_client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->type);
			this->Controls->Add(this->txt_codepostal);
			this->Controls->Add(this->txt_pays);
			this->Controls->Add(this->txt_ville);
			this->Controls->Add(this->txt_rue);
			this->Controls->Add(this->txt_idadresse);
			this->Controls->Add(this->btn_suppr);
			this->Controls->Add(this->btn_modif);
			this->Controls->Add(this->btn_ajouter);
			this->Controls->Add(this->btn_refresh);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_menu);
			this->MinimumSize = System::Drawing::Size(425, 406);
			this->Name = L"Adresse_client";
			this->Size = System::Drawing::Size(425, 406);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		

private: System::Void btn_refresh_Click(System::Object^ sender, System::EventArgs^ e) {
	adresse->setIdClient(id);
	adresse->rafraichir(dataGridView1);
}
private: System::Void btn_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}


	   private: System::Void dataGridView1_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		   // Vérifiez si l'indice de la ligne est valide
		   if (e->RowIndex >= 0) {
			   // Récupérez la ligne entière
			   DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];

			   // Accédez aux valeurs de chaque cellule de la ligne
				txt_idadresse->Text = selectedRow->Cells["ID_Adresse"]->Value->ToString();  // Remplacez "ID" par le nom de la colonne
				txt_rue->Text = selectedRow->Cells["Adresse"]->Value->ToString();  // Remplacez "Adresse" par le nom de la colonne
				txt_ville->Text = selectedRow->Cells["Ville"]->Value->ToString();  
				txt_codepostal->Text = selectedRow->Cells["Code_Postal"]->Value->ToString();  
				txt_pays->Text = selectedRow->Cells["Pays"]->Value->ToString();
				type->Text = selectedRow->Cells["Type"]->Value->ToString();

		   }
	   }



private: System::Void btn_affiche_Click(System::Object^ sender, System::EventArgs^ e) {
	adresse->setIdClient(id);
	adresse->afficher(dataGridView1);
}


private: System::Void btn_ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_ville->Text == "" || txt_codepostal->Text == "" || txt_pays->Text == "" || txt_rue->Text == "" || type->Text == "") {
		MessageBox::Show("Veuillez remplir tous les champs");
		return;
	}
	adresse->setVille(txt_ville->Text);
	adresse->setCodePostal(txt_codepostal->Text);
	adresse->setPays(txt_pays->Text);
	adresse->setRue(txt_rue->Text);
	adresse->setType(type->Text);

	adresse->setIdClient(id);
	adresse->ajouter();
	adresse->rafraichir(dataGridView1);

}
private: System::Void btn_modif_Click(System::Object^ sender, System::EventArgs^ e) {
	adresse->setIdAdresse(Convert::ToInt32(txt_idadresse->Text));
	adresse->setVille(txt_ville->Text);
	adresse->setCodePostal(txt_codepostal->Text);
	adresse->setPays(txt_pays->Text);
	adresse->setRue(txt_rue->Text);
	adresse->setType(type->Text);
	adresse->setIdClient(id);
	adresse->modifier();
	adresse->rafraichir(dataGridView1);
}
private: System::Void btn_suppr_Click(System::Object^ sender, System::EventArgs^ e) {
	adresse->setIdAdresse(Convert::ToInt32(txt_idadresse->Text));
	adresse->supprimer();
	adresse->rafraichir(dataGridView1);
}
};
}
