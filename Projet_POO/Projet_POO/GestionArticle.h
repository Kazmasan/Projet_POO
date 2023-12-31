#pragma once
#include "Article.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjetPOO {

	/// <summary>
	/// Description résumée de GestionArticle
	/// </summary>
	public ref class GestionArticle : public System::Windows::Forms::UserControl
	{

	private: Article^ fctn = gcnew Article();

	public:
		GestionArticle(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		void clear()
		{
			txt_ref_article->Clear();
			txt_nom->Clear();
			txt_quantite_article->Clear();
			txt_nature->Clear();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_quantite_article;
	protected:


	private: System::Windows::Forms::Label^ lbl_nom;


	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::Button^ btn_suppr;
	private: System::Windows::Forms::Button^ btn_modif;
	private: System::Windows::Forms::Button^ btn_ajouter;
	private: System::Windows::Forms::Button^ btn_affiche;
	private: System::Windows::Forms::Button^ btn_refresh;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_menu;
	private: System::Windows::Forms::TextBox^ txt_quantite_article;
	private: System::Windows::Forms::Label^ lbl_nature;
	private: System::Windows::Forms::TextBox^ txt_nature;
	private: System::Windows::Forms::Label^ lbl_ref_article;

	private: System::Windows::Forms::TextBox^ txt_ref_article;




	protected:

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
			this->lbl_quantite_article = (gcnew System::Windows::Forms::Label());
			this->lbl_nom = (gcnew System::Windows::Forms::Label());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->btn_suppr = (gcnew System::Windows::Forms::Button());
			this->btn_modif = (gcnew System::Windows::Forms::Button());
			this->btn_ajouter = (gcnew System::Windows::Forms::Button());
			this->btn_affiche = (gcnew System::Windows::Forms::Button());
			this->btn_refresh = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_menu = (gcnew System::Windows::Forms::Button());
			this->txt_quantite_article = (gcnew System::Windows::Forms::TextBox());
			this->lbl_nature = (gcnew System::Windows::Forms::Label());
			this->txt_nature = (gcnew System::Windows::Forms::TextBox());
			this->lbl_ref_article = (gcnew System::Windows::Forms::Label());
			this->txt_ref_article = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_quantite_article
			// 
			this->lbl_quantite_article->AutoSize = true;
			this->lbl_quantite_article->Location = System::Drawing::Point(24, 521);
			this->lbl_quantite_article->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_quantite_article->Name = L"lbl_quantite_article";
			this->lbl_quantite_article->Size = System::Drawing::Size(152, 20);
			this->lbl_quantite_article->TabIndex = 47;
			this->lbl_quantite_article->Text = L"Quantité de l\'article :";
			// 
			// lbl_nom
			// 
			this->lbl_nom->AutoSize = true;
			this->lbl_nom->Location = System::Drawing::Point(24, 471);
			this->lbl_nom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_nom->Name = L"lbl_nom";
			this->lbl_nom->Size = System::Drawing::Size(42, 20);
			this->lbl_nom->TabIndex = 46;
			this->lbl_nom->Text = L"Nom";
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(88, 471);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(377, 26);
			this->txt_nom->TabIndex = 42;
			// 
			// btn_suppr
			// 
			this->btn_suppr->Location = System::Drawing::Point(424, 358);
			this->btn_suppr->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(108, 35);
			this->btn_suppr->TabIndex = 41;
			this->btn_suppr->Text = L"Supprimer";
			this->btn_suppr->UseVisualStyleBackColor = true;
			this->btn_suppr->Click += gcnew System::EventHandler(this, &GestionArticle::btn_suppr_Click);
			// 
			// btn_modif
			// 
			this->btn_modif->Location = System::Drawing::Point(297, 358);
			this->btn_modif->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_modif->Name = L"btn_modif";
			this->btn_modif->Size = System::Drawing::Size(110, 35);
			this->btn_modif->TabIndex = 40;
			this->btn_modif->Text = L"Modifier";
			this->btn_modif->UseVisualStyleBackColor = true;
			this->btn_modif->Click += gcnew System::EventHandler(this, &GestionArticle::btn_modif_Click);
			// 
			// btn_ajouter
			// 
			this->btn_ajouter->Location = System::Drawing::Point(162, 358);
			this->btn_ajouter->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_ajouter->Name = L"btn_ajouter";
			this->btn_ajouter->Size = System::Drawing::Size(118, 35);
			this->btn_ajouter->TabIndex = 39;
			this->btn_ajouter->Text = L"Ajouter";
			this->btn_ajouter->UseVisualStyleBackColor = true;
			this->btn_ajouter->Click += gcnew System::EventHandler(this, &GestionArticle::btn_ajouter_Click);
			// 
			// btn_affiche
			// 
			this->btn_affiche->Location = System::Drawing::Point(28, 358);
			this->btn_affiche->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_affiche->Name = L"btn_affiche";
			this->btn_affiche->Size = System::Drawing::Size(116, 35);
			this->btn_affiche->TabIndex = 38;
			this->btn_affiche->Text = L"Afficher";
			this->btn_affiche->UseVisualStyleBackColor = true;
			this->btn_affiche->Click += gcnew System::EventHandler(this, &GestionArticle::btn_affiche_Click);
			// 
			// btn_refresh
			// 
			this->btn_refresh->AutoSize = true;
			this->btn_refresh->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_refresh->Location = System::Drawing::Point(447, 13);
			this->btn_refresh->Name = L"btn_refresh";
			this->btn_refresh->Size = System::Drawing::Size(76, 30);
			this->btn_refresh->TabIndex = 36;
			this->btn_refresh->Text = L"Refresh";
			this->btn_refresh->UseVisualStyleBackColor = true;
			this->btn_refresh->Click += gcnew System::EventHandler(this, &GestionArticle::btn_refresh_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 53);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(504, 296);
			this->dataGridView1->TabIndex = 35;
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionArticle::dataGridView1_CellContentDoubleClick);
			// 
			// btn_menu
			// 
			this->btn_menu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_menu->AutoSize = true;
			this->btn_menu->Location = System::Drawing::Point(26, 13);
			this->btn_menu->Name = L"btn_menu";
			this->btn_menu->Size = System::Drawing::Size(84, 35);
			this->btn_menu->TabIndex = 34;
			this->btn_menu->Text = L"Menu";
			this->btn_menu->UseVisualStyleBackColor = true;
			this->btn_menu->Click += gcnew System::EventHandler(this, &GestionArticle::btn_menu_Click);
			// 
			// txt_quantite_article
			// 
			this->txt_quantite_article->Location = System::Drawing::Point(214, 521);
			this->txt_quantite_article->Name = L"txt_quantite_article";
			this->txt_quantite_article->Size = System::Drawing::Size(251, 26);
			this->txt_quantite_article->TabIndex = 44;
			// 
			// lbl_nature
			// 
			this->lbl_nature->AutoSize = true;
			this->lbl_nature->Location = System::Drawing::Point(24, 571);
			this->lbl_nature->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_nature->Name = L"lbl_nature";
			this->lbl_nature->Size = System::Drawing::Size(65, 20);
			this->lbl_nature->TabIndex = 51;
			this->lbl_nature->Text = L"Nature :";
			// 
			// txt_nature
			// 
			this->txt_nature->Location = System::Drawing::Point(114, 571);
			this->txt_nature->Name = L"txt_nature";
			this->txt_nature->Size = System::Drawing::Size(351, 26);
			this->txt_nature->TabIndex = 49;
			// 
			// lbl_ref_article
			// 
			this->lbl_ref_article->AutoSize = true;
			this->lbl_ref_article->Location = System::Drawing::Point(24, 421);
			this->lbl_ref_article->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_ref_article->Name = L"lbl_ref_article";
			this->lbl_ref_article->Size = System::Drawing::Size(166, 20);
			this->lbl_ref_article->TabIndex = 53;
			this->lbl_ref_article->Text = L"Référence de l\'article :";
			// 
			// txt_ref_article
			// 
			this->txt_ref_article->Location = System::Drawing::Point(214, 421);
			this->txt_ref_article->Name = L"txt_ref_article";
			this->txt_ref_article->Size = System::Drawing::Size(82, 26);
			this->txt_ref_article->TabIndex = 52;
			// 
			// GestionArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lbl_ref_article);
			this->Controls->Add(this->txt_ref_article);
			this->Controls->Add(this->lbl_nature);
			this->Controls->Add(this->txt_nature);
			this->Controls->Add(this->lbl_quantite_article);
			this->Controls->Add(this->lbl_nom);
			this->Controls->Add(this->txt_quantite_article);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->btn_suppr);
			this->Controls->Add(this->btn_modif);
			this->Controls->Add(this->btn_ajouter);
			this->Controls->Add(this->btn_affiche);
			this->Controls->Add(this->btn_refresh);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_menu);
			this->MaximumSize = System::Drawing::Size(582, 640);
			this->MinimumSize = System::Drawing::Size(582, 640);
			this->Name = L"GestionArticle";
			this->Size = System::Drawing::Size(582, 640);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btn_affiche_Click(System::Object^ sender, System::EventArgs^ e) {


	if (txt_ref_article->Text != "" || txt_nom->Text != "" || txt_quantite_article->Text != "" || txt_nature->Text != "")
	{
		fctn->setRef_article(txt_ref_article->Text);
		fctn->setNom(txt_nom->Text);
		fctn->setQuantite_article(txt_quantite_article->Text);
		fctn->setNature(txt_nature->Text);
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
	if (txt_ref_article->Text != "" && txt_nom->Text != "" && txt_quantite_article->Text != "" && txt_nature->Text != "")
	{
		fctn->setNom(txt_nom->Text);
		fctn->setQuantite_article(txt_quantite_article->Text);
		fctn->setNature(txt_nature->Text);
		fctn->setRef_article(txt_ref_article->Text);
		fctn->ajouter();
		clear();
	}
	else
	{
		MessageBox::Show("Champs requis non-remplis ou incorrect");
	}

}


private: System::Void btn_suppr_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txt_ref_article->Text != "")
	{
		fctn->setRef_article(txt_ref_article->Text);
		fctn->supprimer();
		clear();
	}
	else
	{
		MessageBox::Show("Veuillez remplir le champ reference");
	}
}

private: System::Void btn_modif_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_ref_article->Text != "" && (txt_nom->Text != "" || txt_quantite_article->Text != ""))
	{
		fctn->setRef_article(txt_ref_article->Text);
		fctn->setNom(txt_nom->Text);
		fctn->setQuantite_article(txt_quantite_article->Text);
		fctn->modifier();
		clear();
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
	// Vйrifiez si l'indice de la ligne est valide
	if (e->RowIndex >= 0) {
		// Rйcupйrez la ligne entiиre
		DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];

		// Accйdez aux valeurs de chaque cellule de la ligne
		txt_ref_article->Text = selectedRow->Cells["Ref_produit"]->Value->ToString();  // Remplacez "Num_Client" par le nom de la colonne
		txt_nom->Text = selectedRow->Cells["Nom"]->Value->ToString();  // Remplacez "Nom" par le nom de la colonne
		txt_quantite_article->Text = selectedRow->Cells["Quantite_article"]->Value->ToString();  // Remplacez "Prenom" par le nom de la colonne
		txt_nature->Text = selectedRow->Cells["Nature"]->Value->ToString();  // Remplacez "Date_naissance" par le nom de la colonne
	}
	};
};
}
