#pragma once
#include <string>
#include "Descriere.h"

namespace aplicatie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  electric;
	private: System::Windows::Forms::Button^  spell;
	private: System::Windows::Forms::Button^  rock;
	protected:

	private: System::Windows::Forms::Button^  sunset;

	private: System::Windows::Forms::Button^  summer;

	private: System::Windows::Forms::Button^  padina;
	private: System::Windows::Forms::Button^  art;


	private: System::Windows::Forms::Button^  airfield;
	private: System::Windows::Forms::Button^  blaj;

	private: System::Windows::Forms::Button^  jazz;
	private: System::Windows::Forms::Button^  sun;
	private: System::Windows::Forms::Button^  untold;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  descriereToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  artistiToolStripMenuItem;











	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->electric = (gcnew System::Windows::Forms::Button());
			this->spell = (gcnew System::Windows::Forms::Button());
			this->rock = (gcnew System::Windows::Forms::Button());
			this->sunset = (gcnew System::Windows::Forms::Button());
			this->summer = (gcnew System::Windows::Forms::Button());
			this->padina = (gcnew System::Windows::Forms::Button());
			this->art = (gcnew System::Windows::Forms::Button());
			this->airfield = (gcnew System::Windows::Forms::Button());
			this->blaj = (gcnew System::Windows::Forms::Button());
			this->jazz = (gcnew System::Windows::Forms::Button());
			this->sun = (gcnew System::Windows::Forms::Button());
			this->untold = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->descriereToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->artistiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// electric
			// 
			this->electric->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"electric.BackgroundImage")));
			this->electric->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->electric->Location = System::Drawing::Point(41, 80);
			this->electric->Name = L"electric";
			this->electric->Size = System::Drawing::Size(75, 72);
			this->electric->TabIndex = 0;
			this->electric->UseVisualStyleBackColor = true;
			this->electric->Click += gcnew System::EventHandler(this, &MyForm::electric_Click);
			// 
			// spell
			// 
			this->spell->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spell.BackgroundImage")));
			this->spell->Location = System::Drawing::Point(273, 158);
			this->spell->Name = L"spell";
			this->spell->Size = System::Drawing::Size(77, 76);
			this->spell->TabIndex = 2;
			this->spell->UseVisualStyleBackColor = true;
			this->spell->Click += gcnew System::EventHandler(this, &MyForm::spell_Click);
			// 
			// rock
			// 
			this->rock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rock.BackgroundImage")));
			this->rock->Location = System::Drawing::Point(122, 240);
			this->rock->Name = L"rock";
			this->rock->Size = System::Drawing::Size(70, 72);
			this->rock->TabIndex = 3;
			this->rock->UseVisualStyleBackColor = true;
			this->rock->Click += gcnew System::EventHandler(this, &MyForm::rock_Click);
			// 
			// sunset
			// 
			this->sunset->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sunset.BackgroundImage")));
			this->sunset->Location = System::Drawing::Point(41, 240);
			this->sunset->Name = L"sunset";
			this->sunset->Size = System::Drawing::Size(75, 72);
			this->sunset->TabIndex = 4;
			this->sunset->UseVisualStyleBackColor = true;
			this->sunset->Click += gcnew System::EventHandler(this, &MyForm::sunset_Click);
			// 
			// summer
			// 
			this->summer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"summer.BackgroundImage")));
			this->summer->Location = System::Drawing::Point(121, 158);
			this->summer->Name = L"summer";
			this->summer->Size = System::Drawing::Size(70, 76);
			this->summer->TabIndex = 5;
			this->summer->UseVisualStyleBackColor = true;
			this->summer->Click += gcnew System::EventHandler(this, &MyForm::summer_Click);
			// 
			// padina
			// 
			this->padina->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"padina.BackgroundImage")));
			this->padina->Location = System::Drawing::Point(197, 80);
			this->padina->Name = L"padina";
			this->padina->Size = System::Drawing::Size(70, 72);
			this->padina->TabIndex = 6;
			this->padina->UseVisualStyleBackColor = true;
			this->padina->Click += gcnew System::EventHandler(this, &MyForm::padina_Click);
			// 
			// art
			// 
			this->art->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"art.BackgroundImage")));
			this->art->Location = System::Drawing::Point(41, 158);
			this->art->Name = L"art";
			this->art->Size = System::Drawing::Size(75, 76);
			this->art->TabIndex = 7;
			this->art->UseVisualStyleBackColor = true;
			this->art->Click += gcnew System::EventHandler(this, &MyForm::art_Click);
			// 
			// airfield
			// 
			this->airfield->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"airfield.BackgroundImage")));
			this->airfield->Location = System::Drawing::Point(273, 80);
			this->airfield->Name = L"airfield";
			this->airfield->Size = System::Drawing::Size(77, 72);
			this->airfield->TabIndex = 8;
			this->airfield->UseVisualStyleBackColor = true;
			this->airfield->Click += gcnew System::EventHandler(this, &MyForm::airfield_Click);
			// 
			// blaj
			// 
			this->blaj->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blaj.BackgroundImage")));
			this->blaj->Location = System::Drawing::Point(197, 158);
			this->blaj->Name = L"blaj";
			this->blaj->Size = System::Drawing::Size(70, 76);
			this->blaj->TabIndex = 9;
			this->blaj->UseVisualStyleBackColor = true;
			this->blaj->Click += gcnew System::EventHandler(this, &MyForm::blaj_Click);
			// 
			// jazz
			// 
			this->jazz->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jazz.BackgroundImage")));
			this->jazz->Location = System::Drawing::Point(122, 80);
			this->jazz->Name = L"jazz";
			this->jazz->Size = System::Drawing::Size(70, 72);
			this->jazz->TabIndex = 10;
			this->jazz->UseVisualStyleBackColor = true;
			this->jazz->Click += gcnew System::EventHandler(this, &MyForm::jazz_Click);
			// 
			// sun
			// 
			this->sun->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sun.BackgroundImage")));
			this->sun->Location = System::Drawing::Point(198, 240);
			this->sun->Name = L"sun";
			this->sun->Size = System::Drawing::Size(70, 72);
			this->sun->TabIndex = 11;
			this->sun->UseVisualStyleBackColor = true;
			this->sun->Click += gcnew System::EventHandler(this, &MyForm::sun_Click);
			// 
			// untold
			// 
			this->untold->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"untold.BackgroundImage")));
			this->untold->Location = System::Drawing::Point(274, 240);
			this->untold->Name = L"untold";
			this->untold->Size = System::Drawing::Size(77, 72);
			this->untold->TabIndex = 12;
			this->untold->UseVisualStyleBackColor = true;
			this->untold->Click += gcnew System::EventHandler(this, &MyForm::untold_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::MediumBlue;
			this->textBox1->Location = System::Drawing::Point(95, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 34);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"Evenimente";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->descriereToolStripMenuItem,
					this->artistiToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(153, 70);
			this->contextMenuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::contextMenuStrip1_ItemClicked);
			// 
			// descriereToolStripMenuItem
			// 
			this->descriereToolStripMenuItem->Name = L"descriereToolStripMenuItem";
			this->descriereToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->descriereToolStripMenuItem->Text = L"Descriere";
			// 
			// artistiToolStripMenuItem
			// 
			this->artistiToolStripMenuItem->Name = L"artistiToolStripMenuItem";
			this->artistiToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->artistiToolStripMenuItem->Text = L"Artisti";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(621, 346);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->untold);
			this->Controls->Add(this->sun);
			this->Controls->Add(this->jazz);
			this->Controls->Add(this->blaj);
			this->Controls->Add(this->airfield);
			this->Controls->Add(this->art);
			this->Controls->Add(this->padina);
			this->Controls->Add(this->summer);
			this->Controls->Add(this->sunset);
			this->Controls->Add(this->rock);
			this->Controls->Add(this->spell);
			this->Controls->Add(this->electric);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		String^ eveniment;
		System::Void electric_Click(System::Object^  sender, System::EventArgs^  e)
		{
			eveniment = "electric";
			contextMenuStrip1->Show(this, electric->Location);
		}

		System::Void spell_Click(System::Object^  sender, System::EventArgs^  e) {
			eveniment = "spell";
			contextMenuStrip1->Show(this, spell->Location);
		}

		System::Void airfield_Click(System::Object^  sender, System::EventArgs^  e) {

		}

		System::Void jazz_Click(System::Object^  sender, System::EventArgs^  e) {

		}

		System::Void padina_Click(System::Object^  sender, System::EventArgs^  e) {

		}

		System::Void art_Click(System::Object^  sender, System::EventArgs^  e) {

		}

		System::Void summer_Click(System::Object^  sender, System::EventArgs^  e) {

		}

		System::Void blaj_Click(System::Object^  sender, System::EventArgs^  e) {

		}

		System::Void sunset_Click(System::Object^  sender, System::EventArgs^  e) {

		}

		System::Void rock_Click(System::Object^  sender, System::EventArgs^  e) {

		}

		System::Void sun_Click(System::Object^  sender, System::EventArgs^  e) {

		}

		System::Void untold_Click(System::Object^  sender, System::EventArgs^  e) {

		}


		System::Void contextMenuStrip1_Click(System::Object^  sender, System::EventArgs^  e) {

		}

		System::Void contextMenuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			if (e->ClickedItem == descriereToolStripMenuItem){
					Descriere^ descriere = gcnew Descriere(eveniment);
					descriere->Show();
			}
		}
};
}
