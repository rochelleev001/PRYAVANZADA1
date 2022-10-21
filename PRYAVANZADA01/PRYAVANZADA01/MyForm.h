#pragma once

namespace PRYAVANZADA01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::DataGridView^ DGVPilas;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
<<<<<<< HEAD
			this->SuspendLayout();
			// 
=======
			this->DGVPilas = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVPilas))->BeginInit();
			this->SuspendLayout();
			// 
			// DGVPilas
			// 
			this->DGVPilas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVPilas->Location = System::Drawing::Point(42, 44);
			this->DGVPilas->Name = L"DGVPilas";
			this->DGVPilas->Size = System::Drawing::Size(308, 104);
			this->DGVPilas->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(161, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(350, 180);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
>>>>>>> cec8157260c554532e5c073e8d3e4446a9d37e54
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
<<<<<<< HEAD
			this->ClientSize = System::Drawing::Size(758, 512);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
=======
			this->ClientSize = System::Drawing::Size(481, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->DGVPilas);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVPilas))->EndInit();
>>>>>>> cec8157260c554532e5c073e8d3e4446a9d37e54
			this->ResumeLayout(false);

		}
#pragma endregion
		
		void Cuadros() {
			DGVPilas->ColumnHeadersVisible = false;
			DGVPilas->RowHeadersVisible = false;
			int mat[3][3]{};
			for (int i = 0; i < 3; i++)
			{
				DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				nuevacolumna->Width =2;

				DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				nuevacolumna->CellTemplate = cellTemplate;

				DGVPilas->Columns->Add(nuevacolumna);
				for (int j = 0; j < 3; j++) {
					DataGridViewRow^ nuevafila = gcnew DataGridViewRow();
					nuevafila->Height = 2;
				}

			}
			DGVPilas->Rows->Add();
		}
		// void mostrar_Matriz() {
			//int mat[4][4]{};
		//	for (int i = 0; i < 4; i++)
			//{

				//for (int j = 0; j < 4; j++)
				//{

				//	DGVPilas->Rows[i]->Cells[j]->Value = mat[i, j];

				//}
			//} //
			
			
	//	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		DGVPilas->ColumnCount = 3;
		DGVPilas->RowCount = 3;
		DGVPilas->ColumnHeadersVisible = false;
		DGVPilas->RowHeadersVisible = false;

		Cuadros();
		button1->Enabled = false;
	}
	};
}
