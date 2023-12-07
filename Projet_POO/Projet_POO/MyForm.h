#pragma once
#include "GestionPersonnel.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
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
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_personnel;
	protected:


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
			this->btn_personnel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_personnel
			// 
			this->btn_personnel->Location = System::Drawing::Point(184, 104);
			this->btn_personnel->Name = L"btn_personnel";
			this->btn_personnel->Size = System::Drawing::Size(75, 23);
			this->btn_personnel->TabIndex = 0;
			this->btn_personnel->Text = L"Gestion du personnel";
			this->btn_personnel->UseVisualStyleBackColor = true;
			this->btn_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_personnel_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 424);
			this->Controls->Add(this->btn_personnel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
	private: System::Void btn_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		GestionPersonnel^ gestionPersonnel = gcnew GestionPersonnel();
		this->Controls->Add(gestionPersonnel);
		gestionPersonnel->BringToFront();
		gestionPersonnel->Location = System::Drawing::Point(0, 0);
		gestionPersonnel->Size = this->ClientSize;
		gestionPersonnel->Show();
	}
	};
}
