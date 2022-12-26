#pragma once

namespace Sudoku
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ easy;
	protected:
	private: System::Windows::Forms::Label^ difficulty;
	private: System::Windows::Forms::Button^ normal;
	private: System::Windows::Forms::Button^ Hard;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->easy = (gcnew System::Windows::Forms::Button());
			this->difficulty = (gcnew System::Windows::Forms::Label());
			this->normal = (gcnew System::Windows::Forms::Button());
			this->Hard = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// easy
			// 
			this->easy->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->easy->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->easy->Location = System::Drawing::Point(126, 104);
			this->easy->Name = L"easy";
			this->easy->Size = System::Drawing::Size(75, 23);
			this->easy->TabIndex = 0;
			this->easy->Text = L"Легкий";
			this->easy->UseVisualStyleBackColor = true;
			this->easy->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// difficulty
			// 
			this->difficulty->AutoSize = true;
			this->difficulty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->difficulty->ForeColor = System::Drawing::Color::White;
			this->difficulty->Location = System::Drawing::Point(88, 20);
			this->difficulty->Name = L"difficulty";
			this->difficulty->Size = System::Drawing::Size(172, 24);
			this->difficulty->TabIndex = 1;
			this->difficulty->Text = L"Рівень складності";
			// 
			// normal
			// 
			this->normal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->normal->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->normal->Location = System::Drawing::Point(126, 151);
			this->normal->Name = L"normal";
			this->normal->Size = System::Drawing::Size(75, 23);
			this->normal->TabIndex = 2;
			this->normal->Text = L"Середній";
			this->normal->UseVisualStyleBackColor = true;
			this->normal->Click += gcnew System::EventHandler(this, &MyForm::normal_Click);
			// 
			// Hard
			// 
			this->Hard->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Hard->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Hard->Location = System::Drawing::Point(126, 200);
			this->Hard->Name = L"Hard";
			this->Hard->Size = System::Drawing::Size(75, 23);
			this->Hard->TabIndex = 3;
			this->Hard->Text = L"Важкий";
			this->Hard->UseVisualStyleBackColor = true;
			this->Hard->Click += gcnew System::EventHandler(this, &MyForm::Hard_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(324, 461);
			this->Controls->Add(this->Hard);
			this->Controls->Add(this->normal);
			this->Controls->Add(this->difficulty);
			this->Controls->Add(this->easy);
			this->MinimumSize = System::Drawing::Size(340, 500);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sudoku";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MyForm::difficulty->Text = "Легкий";
	}
	private: System::Void normal_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MyForm::difficulty->Text = "Середній";
	}
	private: System::Void Hard_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MyForm::difficulty->Text = "Важкий";
	}
	};
}
