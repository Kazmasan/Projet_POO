//Personnel.H*********************************************************************************************
#pragma once
#include "CAD.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Personnel
	/// </summary>
	public ref class Personnel : public System::Windows::Forms::Form
	{
	public:
		Personnel(void)
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
		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:

	//private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::Label^ label_nom;
	private: System::Windows::Forms::Label^ label_date;
	private: System::Windows::Forms::Label^ label_prenom;
	private: System::Windows::Forms::Label^ label_id;
	private: System::Windows::Forms::Button^ btn_affiche;
	private: System::Windows::Forms::TextBox^ txt_date;

	void refresh(System::String^ DB) {
		this->dgv_enr->Refresh();
		this->oDs = oCad->getRows("select * from dbo.Personnel", DB);
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = DB;
	}



	private: System::Data::DataSet^ oDs;
	NS_Comp_Data::CLcad^ oCad = gcnew NS_Comp_Data::CLcad();
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
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_date = (gcnew System::Windows::Forms::TextBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->label_date = (gcnew System::Windows::Forms::Label());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->btn_affiche = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(12, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(472, 150);
			this->dgv_enr->TabIndex = 0;
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(96, 174);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(75, 37);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"INS";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &Personnel::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(299, 174);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 37);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"DEL";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Personnel::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(193, 174);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(75, 37);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"UPD";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &Personnel::btn_update_Click);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(177, 217);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(307, 20);
			this->txt_nom->TabIndex = 5;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(177, 243);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(307, 20);
			this->txt_prenom->TabIndex = 6;
			// 
			// txt_date
			// 
			this->txt_date->Location = System::Drawing::Point(177, 269);
			this->txt_date->Name = L"txt_date";
			this->txt_date->Size = System::Drawing::Size(307, 20);
			this->txt_date->TabIndex = 7;
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(42, 230);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(29, 20);
			this->txt_id->TabIndex = 8;
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Location = System::Drawing::Point(133, 220);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(38, 13);
			this->label_nom->TabIndex = 9;
			this->label_nom->Text = L"Nom : ";
			// 
			// label_date
			// 
			this->label_date->AutoSize = true;
			this->label_date->Location = System::Drawing::Point(71, 272);
			this->label_date->Name = L"label_date";
			this->label_date->Size = System::Drawing::Size(100, 13);
			this->label_date->TabIndex = 10;
			this->label_date->Text = L"Date d\'embauche : ";
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Location = System::Drawing::Point(119, 246);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(52, 13);
			this->label_prenom->TabIndex = 11;
			this->label_prenom->Text = L"Prenom : ";
			// 
			// label_id
			// 
			this->label_id->AutoSize = true;
			this->label_id->Location = System::Drawing::Point(9, 233);
			this->label_id->Name = L"label_id";
			this->label_id->Size = System::Drawing::Size(27, 13);
			this->label_id->TabIndex = 12;
			this->label_id->Text = L"ID : ";
			// 
			// btn_affiche
			// 
			this->btn_affiche->Location = System::Drawing::Point(400, 174);
			this->btn_affiche->Name = L"btn_affiche";
			this->btn_affiche->Size = System::Drawing::Size(75, 37);
			this->btn_affiche->TabIndex = 13;
			this->btn_affiche->Text = L"SHOW";
			this->btn_affiche->UseVisualStyleBackColor = true;
			this->btn_affiche->Click += gcnew System::EventHandler(this, &Personnel::btn_affiche_Click);
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(506, 332);
			this->Controls->Add(this->btn_affiche);
			this->Controls->Add(this->label_id);
			this->Controls->Add(this->label_prenom);
			this->Controls->Add(this->label_date);
			this->Controls->Add(this->label_nom);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->txt_date);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"Personnel";
			this->Text = L"Personnel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		refresh("PIPO");
	}*/
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->txt_nom->Text != "" && this->txt_prenom->Text != "" && this->txt_date->Text != "") {
			oCad->actionRows("insert into dbo.Personnel values('" + this->txt_nom->Text + "','" + this->txt_prenom->Text + "','" + this->txt_date->Text + "')");
			refresh("PIPO");

	}
	};


private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ query = "update dbo.Personnel set ";
	bool hasSetClause = false;

	if (!String::IsNullOrEmpty(this->txt_nom->Text)) {
		query += "Nom = '" + this->txt_nom->Text + "'";
		hasSetClause = true;
	}

	if (!String::IsNullOrEmpty(this->txt_prenom->Text)) {
		if (hasSetClause) {
			query += ", ";
		}
		query += "Prenom = '" + this->txt_prenom->Text + "'";
		hasSetClause = true;
	}

	if (!String::IsNullOrEmpty(this->txt_date->Text)) {
		if (hasSetClause) {
			query += ", ";
		}
		query += "DateEmbauche = '" + this->txt_date->Text + "'";
		hasSetClause = true;
	}

	// Assurez-vous d'ajouter la condition WHERE uniquement si IdPersonnel est fourni
	if (!String::IsNullOrEmpty(this->txt_id->Text)) {
		query += " where IdPersonnel = " + this->txt_id->Text;
		oCad->actionRows(query);
		refresh("PIPO");
	}
	else {
		// Gérer le cas où l'identifiant n'est pas fourni, si nécessaire
		MessageBox::Show("ID non fournit");
	}

}


private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
if (this->txt_id->Text != "") {
		oCad->actionRows("delete from dbo.Personnel where IdPersonnel = " + this->txt_id->Text);
		refresh("PIPO");
	}
}


private: System::Void btn_affiche_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->txt_id->Text != "") {
		this->oDs = oCad->getRows("select * from dbo.Personnel where IdPersonnel = " + this->txt_id->Text, "PIPO");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "PIPO";

}
};

};
}

