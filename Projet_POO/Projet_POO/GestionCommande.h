#pragma once
#include "Commande.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjetPOO {

	/// <summary>
	/// Description résumée de GestionCommande
	/// </summary>
	public ref class GestionCommande : public System::Windows::Forms::UserControl
	{
	public:
		GestionCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionCommande()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:











	private: System::Windows::Forms::Button^ btn_suppr;
	private: System::Windows::Forms::Button^ btn_modif;
	private: System::Windows::Forms::Button^ btn_ajouter;
	private: System::Windows::Forms::Button^ btn_refresh;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_menu;
	private: System::Windows::Forms::Label^ Num_client;
	private: System::Windows::Forms::TextBox^ textBox_num_client;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_date_livraison;
	private: System::Windows::Forms::TextBox^ textBox_date_emission;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button_Article;
	private: System::Windows::Forms::Button^ button_recherche;




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
			this->Num_client = (gcnew System::Windows::Forms::Label());
			this->textBox_num_client = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_date_livraison = (gcnew System::Windows::Forms::TextBox());
			this->textBox_date_emission = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_Article = (gcnew System::Windows::Forms::Button());
			this->button_recherche = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_suppr
			// 
			this->btn_suppr->Location = System::Drawing::Point(401, 288);
			this->btn_suppr->Margin = System::Windows::Forms::Padding(4);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(168, 28);
			this->btn_suppr->TabIndex = 48;
			this->btn_suppr->Text = L"Supprimer";
			this->btn_suppr->UseVisualStyleBackColor = true;
			this->btn_suppr->Click += gcnew System::EventHandler(this, &GestionCommande::btn_suppr_Click);
			// 
			// btn_modif
			// 
			this->btn_modif->Location = System::Drawing::Point(211, 288);
			this->btn_modif->Margin = System::Windows::Forms::Padding(4);
			this->btn_modif->Name = L"btn_modif";
			this->btn_modif->Size = System::Drawing::Size(183, 28);
			this->btn_modif->TabIndex = 47;
			this->btn_modif->Text = L"Modifier";
			this->btn_modif->UseVisualStyleBackColor = true;
			this->btn_modif->Click += gcnew System::EventHandler(this, &GestionCommande::btn_modif_Click);
			// 
			// btn_ajouter
			// 
			this->btn_ajouter->Location = System::Drawing::Point(23, 288);
			this->btn_ajouter->Margin = System::Windows::Forms::Padding(4);
			this->btn_ajouter->Name = L"btn_ajouter";
			this->btn_ajouter->Size = System::Drawing::Size(180, 28);
			this->btn_ajouter->TabIndex = 46;
			this->btn_ajouter->Text = L"Ajouter";
			this->btn_ajouter->UseVisualStyleBackColor = true;
			this->btn_ajouter->Click += gcnew System::EventHandler(this, &GestionCommande::btn_ajouter_Click);
			// 
			// btn_refresh
			// 
			this->btn_refresh->AutoSize = true;
			this->btn_refresh->Location = System::Drawing::Point(432, 14);
			this->btn_refresh->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_refresh->Name = L"btn_refresh";
			this->btn_refresh->Size = System::Drawing::Size(93, 28);
			this->btn_refresh->TabIndex = 45;
			this->btn_refresh->Text = L"Rafraichir";
			this->btn_refresh->UseVisualStyleBackColor = true;
			this->btn_refresh->Click += gcnew System::EventHandler(this, &GestionCommande::btn_refresh_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 46);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(547, 236);
			this->dataGridView1->TabIndex = 44;
			// 
			// btn_menu
			// 
			this->btn_menu->AutoSize = true;
			this->btn_menu->Location = System::Drawing::Point(60, 14);
			this->btn_menu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_menu->Name = L"btn_menu";
			this->btn_menu->Size = System::Drawing::Size(127, 28);
			this->btn_menu->TabIndex = 43;
			this->btn_menu->Text = L"Menu précédent";
			this->btn_menu->UseVisualStyleBackColor = true;
			this->btn_menu->Click += gcnew System::EventHandler(this, &GestionCommande::btn_menu_Click);
			// 
			// Num_client
			// 
			this->Num_client->AutoSize = true;
			this->Num_client->Location = System::Drawing::Point(21, 404);
			this->Num_client->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Num_client->Name = L"Num_client";
			this->Num_client->Size = System::Drawing::Size(89, 16);
			this->Num_client->TabIndex = 49;
			this->Num_client->Text = L"Numéro client";
			// 
			// textBox_num_client
			// 
			this->textBox_num_client->Location = System::Drawing::Point(118, 401);
			this->textBox_num_client->Margin = System::Windows::Forms::Padding(4);
			this->textBox_num_client->Name = L"textBox_num_client";
			this->textBox_num_client->Size = System::Drawing::Size(244, 22);
			this->textBox_num_client->TabIndex = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 434);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 16);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Date de livraison";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 467);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 16);
			this->label2->TabIndex = 52;
			this->label2->Text = L"Date d\'émission";
			// 
			// textBox_date_livraison
			// 
			this->textBox_date_livraison->Location = System::Drawing::Point(133, 431);
			this->textBox_date_livraison->Margin = System::Windows::Forms::Padding(4);
			this->textBox_date_livraison->Name = L"textBox_date_livraison";
			this->textBox_date_livraison->Size = System::Drawing::Size(244, 22);
			this->textBox_date_livraison->TabIndex = 53;
			// 
			// textBox_date_emission
			// 
			this->textBox_date_emission->Location = System::Drawing::Point(133, 461);
			this->textBox_date_emission->Margin = System::Windows::Forms::Padding(4);
			this->textBox_date_emission->Name = L"textBox_date_emission";
			this->textBox_date_emission->Size = System::Drawing::Size(244, 22);
			this->textBox_date_emission->TabIndex = 54;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 363);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 16);
			this->label3->TabIndex = 55;
			this->label3->Text = L"Référence commande";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(171, 360);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(244, 22);
			this->textBox1->TabIndex = 56;
			// 
			// button_Article
			// 
			this->button_Article->Location = System::Drawing::Point(435, 405);
			this->button_Article->Margin = System::Windows::Forms::Padding(4);
			this->button_Article->Name = L"button_Article";
			this->button_Article->Size = System::Drawing::Size(135, 75);
			this->button_Article->TabIndex = 57;
			this->button_Article->Text = L"Article";
			this->button_Article->UseVisualStyleBackColor = true;
			// 
			// button_recherche
			// 
			this->button_recherche->Location = System::Drawing::Point(24, 324);
			this->button_recherche->Margin = System::Windows::Forms::Padding(4);
			this->button_recherche->Name = L"button_recherche";
			this->button_recherche->Size = System::Drawing::Size(545, 28);
			this->button_recherche->TabIndex = 58;
			this->button_recherche->Text = L"Recherche";
			this->button_recherche->UseVisualStyleBackColor = true;
			this->button_recherche->Click += gcnew System::EventHandler(this, &GestionCommande::button_recherche_Click);
			// 
			// GestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button_recherche);
			this->Controls->Add(this->button_Article);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_date_emission);
			this->Controls->Add(this->textBox_date_livraison);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_num_client);
			this->Controls->Add(this->Num_client);
			this->Controls->Add(this->btn_suppr);
			this->Controls->Add(this->btn_modif);
			this->Controls->Add(this->btn_ajouter);
			this->Controls->Add(this->btn_refresh);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_menu);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GestionCommande";
			this->Size = System::Drawing::Size(604, 504);
			this->Load += gcnew System::EventHandler(this, &GestionCommande::GestionCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btn_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void btn_refresh_Click(System::Object^ sender, System::EventArgs^ e) {
	Commande^ commande = gcnew Commande();
	commande->rafraichir(dataGridView1);
}
private: System::Void GestionCommande_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	Commande^ commande = gcnew Commande();
	commande->setNumClient(Convert::ToInt32(textBox_num_client->Text));
	commande->setDateLivraison(textBox_date_livraison->Text);
	commande->setDateEmission(textBox_date_emission->Text);
	commande->ajouter();
	commande->rafraichir(dataGridView1);
}
private: System::Void button_recherche_Click(System::Object^ sender, System::EventArgs^ e) {
	Commande^ commande = gcnew Commande();
	commande->setRefCommande(textBox1->Text);
	commande->afficher(dataGridView1);
}
private: System::Void btn_suppr_Click(System::Object^ sender, System::EventArgs^ e) {
	Commande^ commande = gcnew Commande();
	commande->setRefCommande(textBox1->Text);
	commande->supprimer();
	commande->rafraichir(dataGridView1);
}
private: System::Void btn_modif_Click(System::Object^ sender, System::EventArgs^ e) {
	Commande^commande = gcnew Commande();
	commande->setRefCommande(textBox1->Text);
	commande->setNumClient(Convert::ToInt32(textBox_num_client->Text));
	commande->setDateLivraison(textBox_date_livraison->Text);
	commande->setDateEmission(textBox_date_emission->Text);
	commande->modifier();
	commande->rafraichir(dataGridView1);
}
};
}
