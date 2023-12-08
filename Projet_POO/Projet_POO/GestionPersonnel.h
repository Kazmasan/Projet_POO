#pragma once

#include "Personnel.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjetPOO {

	/// <summary>
	/// Description résumée de GestionPersonnel
	/// </summary>
	public ref class GestionPersonnel : public System::Windows::Forms::UserControl
	{
	public:
		GestionPersonnel(void)
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
		~GestionPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_menu;
	protected:

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_refresh;
	private: System::Windows::Forms::TextBox^ textBox_ID;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_Id_Id_superieur;
	private: System::Windows::Forms::TextBox^ textBox_Prenom;



	private: System::Windows::Forms::TextBox^ textBox_Date_Embauche;

	private: System::Windows::Forms::TextBox^ textBox_Nom;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_ajouter;

	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ btn_supprimer;
	private: System::Windows::Forms::Button^ btn_afficher;
	private: System::Windows::Forms::Label^ adresse;
	private: System::Windows::Forms::TextBox^ textBox_adresse;



	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_menu = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_refresh = (gcnew System::Windows::Forms::Button());
			this->textBox_ID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_Id_Id_superieur = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Date_Embauche = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Nom = (gcnew System::Windows::Forms::TextBox());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_ajouter = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer = (gcnew System::Windows::Forms::Button());
			this->btn_afficher = (gcnew System::Windows::Forms::Button());
			this->adresse = (gcnew System::Windows::Forms::Label());
			this->textBox_adresse = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_menu
			// 
			this->btn_menu->AutoSize = true;
			this->btn_menu->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_menu->Location = System::Drawing::Point(24, 28);
			this->btn_menu->Name = L"btn_menu";
			this->btn_menu->Size = System::Drawing::Size(105, 26);
			this->btn_menu->TabIndex = 0;
			this->btn_menu->Text = L"Menu Principal";
			this->btn_menu->UseVisualStyleBackColor = true;
			this->btn_menu->Click += gcnew System::EventHandler(this, &GestionPersonnel::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(21, 60);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(468, 236);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionPersonnel::dataGridView1_CellContentClick);
			// 
			// btn_refresh
			// 
			this->btn_refresh->AutoSize = true;
			this->btn_refresh->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_refresh->Location = System::Drawing::Point(405, 28);
			this->btn_refresh->Name = L"btn_refresh";
			this->btn_refresh->Size = System::Drawing::Size(74, 26);
			this->btn_refresh->TabIndex = 2;
			this->btn_refresh->Text = L"Rafraichir";
			this->btn_refresh->UseVisualStyleBackColor = true;
			this->btn_refresh->Click += gcnew System::EventHandler(this, &GestionPersonnel::btn_refresh_Click);
			// 
			// textBox_ID
			// 
			this->textBox_ID->Location = System::Drawing::Point(53, 302);
			this->textBox_ID->Name = L"textBox_ID";
			this->textBox_ID->Size = System::Drawing::Size(100, 22);
			this->textBox_ID->TabIndex = 3;
			this->textBox_ID->TextChanged += gcnew System::EventHandler(this, &GestionPersonnel::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 305);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"ID :";
			this->label1->Click += gcnew System::EventHandler(this, &GestionPersonnel::label1_Click);
			// 
			// textBox_Id_Id_superieur
			// 
			this->textBox_Id_Id_superieur->Location = System::Drawing::Point(115, 398);
			this->textBox_Id_Id_superieur->Name = L"textBox_Id_Id_superieur";
			this->textBox_Id_Id_superieur->Size = System::Drawing::Size(364, 22);
			this->textBox_Id_Id_superieur->TabIndex = 6;
			// 
			// textBox_Prenom
			// 
			this->textBox_Prenom->Location = System::Drawing::Point(84, 370);
			this->textBox_Prenom->Name = L"textBox_Prenom";
			this->textBox_Prenom->Size = System::Drawing::Size(395, 22);
			this->textBox_Prenom->TabIndex = 7;
			// 
			// textBox_Date_Embauche
			// 
			this->textBox_Date_Embauche->Location = System::Drawing::Point(144, 426);
			this->textBox_Date_Embauche->Name = L"textBox_Date_Embauche";
			this->textBox_Date_Embauche->Size = System::Drawing::Size(335, 22);
			this->textBox_Date_Embauche->TabIndex = 8;
			// 
			// textBox_Nom
			// 
			this->textBox_Nom->Location = System::Drawing::Point(66, 342);
			this->textBox_Nom->Name = L"textBox_Nom";
			this->textBox_Nom->Size = System::Drawing::Size(413, 22);
			this->textBox_Nom->TabIndex = 9;
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Location = System::Drawing::Point(18, 345);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(42, 16);
			this->ID->TabIndex = 10;
			this->ID->Text = L"Nom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 373);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Prénom :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 401);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"ID_Supérieur :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 429);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Date d\'embauche :";
			// 
			// btn_ajouter
			// 
			this->btn_ajouter->Location = System::Drawing::Point(21, 511);
			this->btn_ajouter->Name = L"btn_ajouter";
			this->btn_ajouter->Size = System::Drawing::Size(132, 23);
			this->btn_ajouter->TabIndex = 14;
			this->btn_ajouter->Text = L"Ajouter";
			this->btn_ajouter->UseVisualStyleBackColor = true;
			this->btn_ajouter->Click += gcnew System::EventHandler(this, &GestionPersonnel::btn_ajouter_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->Location = System::Drawing::Point(188, 511);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(132, 23);
			this->btn_modifier->TabIndex = 15;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = true;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &GestionPersonnel::btn_modifier_Click);
			// 
			// btn_supprimer
			// 
			this->btn_supprimer->Location = System::Drawing::Point(357, 511);
			this->btn_supprimer->Name = L"btn_supprimer";
			this->btn_supprimer->Size = System::Drawing::Size(132, 23);
			this->btn_supprimer->TabIndex = 16;
			this->btn_supprimer->Text = L"Supprimer";
			this->btn_supprimer->UseVisualStyleBackColor = true;
			this->btn_supprimer->Click += gcnew System::EventHandler(this, &GestionPersonnel::btn_supprimer_Click);
			// 
			// btn_afficher
			// 
			this->btn_afficher->Location = System::Drawing::Point(21, 482);
			this->btn_afficher->Name = L"btn_afficher";
			this->btn_afficher->Size = System::Drawing::Size(468, 23);
			this->btn_afficher->TabIndex = 17;
			this->btn_afficher->Text = L"Rechercher";
			this->btn_afficher->UseVisualStyleBackColor = true;
			this->btn_afficher->Click += gcnew System::EventHandler(this, &GestionPersonnel::btn_afficher_Click);
			// 
			// adresse
			// 
			this->adresse->AutoSize = true;
			this->adresse->Location = System::Drawing::Point(18, 457);
			this->adresse->Name = L"adresse";
			this->adresse->Size = System::Drawing::Size(64, 16);
			this->adresse->TabIndex = 18;
			this->adresse->Text = L"Adresse :";
			// 
			// textBox_adresse
			// 
			this->textBox_adresse->Location = System::Drawing::Point(84, 454);
			this->textBox_adresse->Name = L"textBox_adresse";
			this->textBox_adresse->Size = System::Drawing::Size(395, 22);
			this->textBox_adresse->TabIndex = 19;
			// 
			// GestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->textBox_adresse);
			this->Controls->Add(this->adresse);
			this->Controls->Add(this->btn_afficher);
			this->Controls->Add(this->btn_supprimer);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->btn_ajouter);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->textBox_Nom);
			this->Controls->Add(this->textBox_Date_Embauche);
			this->Controls->Add(this->textBox_Prenom);
			this->Controls->Add(this->textBox_Id_Id_superieur);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_ID);
			this->Controls->Add(this->btn_refresh);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_menu);
			this->Name = L"GestionPersonnel";
			this->Size = System::Drawing::Size(507, 548);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btn_refresh_Click(System::Object^ sender, System::EventArgs^ e) {
		Personnel^ personnel = gcnew Personnel;
		personnel->rafraichir(dataGridView1);
	}
	private:System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		Personnel^ personnel = gcnew Personnel;
		personnel->setNom(textBox_Nom->Text);
		personnel->setPrenom(textBox_Prenom->Text);
		personnel->setId_superieur(textBox_Id_Id_superieur->Text);
		personnel->setDate_embauche(textBox_Date_Embauche->Text);
		personnel->setAdresse(textBox_adresse->Text);
		personnel->ajouter();
		personnel->rafraichir(dataGridView1);
	}
private: System::Void btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	Personnel^ personnel = gcnew Personnel;
	personnel->setID(textBox_ID->Text);
	personnel->supprimer();
	personnel->rafraichir(dataGridView1);
}
private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	Personnel^ personnel = gcnew Personnel;
	personnel->setID(textBox_ID->Text);
	personnel->setNom(textBox_Nom->Text);
	personnel->setPrenom(textBox_Prenom->Text);
	personnel->setId_superieur(textBox_Id_Id_superieur->Text);
	personnel->setDate_embauche(textBox_Date_Embauche->Text);
	personnel->setAdresse(textBox_adresse->Text);
	personnel->modifier();
	personnel->rafraichir(dataGridView1);
}
private: System::Void btn_afficher_Click(System::Object^ sender, System::EventArgs^ e) {
	Personnel^ personnel = gcnew Personnel;
	personnel->setID(textBox_ID->Text);
	personnel->afficher(dataGridView1);
}
};
}
