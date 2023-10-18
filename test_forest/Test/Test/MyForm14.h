#pragma once

#include "Res_test.h"
#include <iostream>
#include <string.h>
#include "File.h"

namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm14
	/// </summary>
	public ref class MyForm14 : public System::Windows::Forms::Form
	{
	public:
		MyForm14(void)
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
		~MyForm14()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	public:

	public:

	private:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm14::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(250, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Поздравляю, вы прошли тест!";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm14::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 411);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Выйти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm14::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(316, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Результат";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm14::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(178, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 21);
			this->label3->TabIndex = 5;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(178, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 21);
			this->label4->TabIndex = 6;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(275, 411);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(226, 40);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Сохранить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm14::button3_Click);
			// 
			// MyForm14
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(767, 463);
			this->ControlBox = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm14";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm14";
			this->Load += gcnew System::EventHandler(this, &MyForm14::MyForm14_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int a = 0;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (a == 0) {
			label3->Text = "Вы ответили правильно на " + RES + " из 10 вопросов!\n";
			if (RES == 0) { label4->Text = "Не расстраивайтесь, 0\n это еще не страшно."; }
			else if (RES > 0 && RES < 4) { label4->Text = "Это довольно низкий показатель, стоит\n почитать больше литературы."; }
			else if (RES > 3 && RES < 8) { label4->Text = "Средний показатель. Вы много знаете,\n но не достаточно."; }
			else if (RES > 7 && RES < 10) { label4->Text = "Вы очень хорошо знаете природу\n собственного края!"; }
			else if (RES == 10) { label4->Text = "Промастер!"; }
			a++;
			button2->Hide(); button3->Show(); button1->Show();
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a >= 1) { this->Close(); }
	else { label3->Text = "Вы не узнали свой результат!"; }
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a == 1) {
		File_save(RES);
		button3->Text = "Сохранено"; button1->Show();
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm14_Load(System::Object^ sender, System::EventArgs^ e) {
	button1->Hide(); button3->Hide();
}
};
}
