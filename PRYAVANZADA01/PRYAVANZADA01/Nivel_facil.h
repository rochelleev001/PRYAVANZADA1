#pragma once
#include "Colas.h"
namespace PRYAVANZADA01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;

	/// <summary>
	/// Resumen de Nivel_facil
	/// </summary>
	public ref class Nivel_facil : public System::Windows::Forms::Form
	{
	public:
		Nivel_facil(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Nivel_facil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCargar;
	private: System::Windows::Forms::OpenFileDialog^ ofdSubirDatos;
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnCargar = (gcnew System::Windows::Forms::Button());
			this->ofdSubirDatos = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// btnCargar
			// 
			this->btnCargar->Font = (gcnew System::Drawing::Font(L"Calisto MT", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCargar->Location = System::Drawing::Point(13, 24);
			this->btnCargar->Name = L"btnCargar";
			this->btnCargar->Size = System::Drawing::Size(91, 25);
			this->btnCargar->TabIndex = 0;
			this->btnCargar->Text = L"Cargar Datos";
			this->btnCargar->UseVisualStyleBackColor = true;
			this->btnCargar->Click += gcnew System::EventHandler(this, &Nivel_facil::btnCargar_Click);
			// 
			// ofdSubirDatos
			// 
			this->ofdSubirDatos->FileName = L"openFileDialog1";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Calisto MT", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(13, 93);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(136, 89);
			this->listBox1->TabIndex = 1;
			// 
			// Nivel_facil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->btnCargar);
			this->Name = L"Nivel_facil";
			this->Text = L"Nivel_facil";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCargar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::OK == ofdSubirDatos->ShowDialog()) {
			StreamReader^ inputStream = gcnew StreamReader(ofdSubirDatos->FileName);
			if (inputStream != nullptr) {
				array<String^>^ linea_array;
				String^ linea = inputStream->ReadLine();
				linea_array = linea->Split(',');

				for (int i = 0; i < sizeof(linea_array); i++)
				{
					Colas* miCola = new Colas();
					linea_array[i];
					//miCola->insertarCola(Convert::ToChar(linea_array[i]));

					linea = inputStream->ReadLine();
				}

			}
		}
	}
	};
}
