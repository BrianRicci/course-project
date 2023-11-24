#pragma once

namespace Project {

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
	private: System::Windows::Forms::Button^ restart_btn;
	protected:

	private: System::Windows::Forms::Button^ roll_Btn;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ result_comp;
	private: System::Windows::Forms::Label^ result_user;


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
			this->restart_btn = (gcnew System::Windows::Forms::Button());
			this->roll_Btn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->result_comp = (gcnew System::Windows::Forms::Label());
			this->result_user = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// restart_btn
			// 
			this->restart_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->restart_btn->Location = System::Drawing::Point(269, 12);
			this->restart_btn->Name = L"restart_btn";
			this->restart_btn->Size = System::Drawing::Size(154, 56);
			this->restart_btn->TabIndex = 0;
			this->restart_btn->Text = L"Начать/переиграть партию";
			this->restart_btn->UseVisualStyleBackColor = true;
			this->restart_btn->Click += gcnew System::EventHandler(this, &MyForm::restart_Click);
			// 
			// roll_Btn
			// 
			this->roll_Btn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->roll_Btn->Location = System::Drawing::Point(269, 74);
			this->roll_Btn->Name = L"roll_Btn";
			this->roll_Btn->Size = System::Drawing::Size(154, 56);
			this->roll_Btn->TabIndex = 1;
			this->roll_Btn->Text = L"Кинуть кости";
			this->roll_Btn->UseVisualStyleBackColor = true;
			this->roll_Btn->Click += gcnew System::EventHandler(this, &MyForm::rollDice_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(41, 170);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(96, 96);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(147, 170);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(96, 96);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(442, 170);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(96, 96);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(548, 170);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(96, 96);
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 385);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(666, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Правила игры: По результатам 3 бросков определяется победитель. У кого больше очк"
				L"ов, тот выиграл!";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(37, 308);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 21);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Счёт компьютера:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(438, 308);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 21);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Ваш счёт:";
			// 
			// result_comp
			// 
			this->result_comp->AutoSize = true;
			this->result_comp->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_comp->Location = System::Drawing::Point(191, 308);
			this->result_comp->Name = L"result_comp";
			this->result_comp->Size = System::Drawing::Size(0, 21);
			this->result_comp->TabIndex = 9;
			// 
			// result_user
			// 
			this->result_user->AutoSize = true;
			this->result_user->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_user->Location = System::Drawing::Point(526, 308);
			this->result_user->Name = L"result_user";
			this->result_user->Size = System::Drawing::Size(0, 21);
			this->result_user->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 411);
			this->Controls->Add(this->result_user);
			this->Controls->Add(this->result_comp);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->roll_Btn);
			this->Controls->Add(this->restart_btn);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   
	int count, comp_score, user_score;

	// Функция сброса результата
	private: System::Void restart_Click(System::Object^ sender, System::EventArgs^ e) {
		count = 0;
		comp_score = 0;
		user_score = 0;

		result_comp->Text = comp_score.ToString();
		result_user->Text = user_score.ToString();
		roll_Btn->Enabled = true;

		pictureBox1->Image = nullptr;
		pictureBox2->Image = nullptr;
		pictureBox3->Image = nullptr;
		pictureBox4->Image = nullptr;
	}

	private: System::Void rollDice_Click(System::Object^ sender, System::EventArgs^ e) {
		if (count < 3) {
			Random^ ran = gcnew Random();
		
			// Инициализация массивов
			array<int>^ RollResult_Comp = gcnew array<int>(2);
			array<int>^ RollResult_User = gcnew array<int>(2);
			array<String^>^ images = gcnew array<String^>(6);
		
			// Генерация бросков костей
			RollResult_Comp[0] = ran->Next(1, 6); //Генератор числа
			RollResult_Comp[1] = ran->Next(1, 6); 
			RollResult_User[0] = ran->Next(1, 6); 
			RollResult_User[1] = ran->Next(1, 6); 

			// Заполнение массива картинок костей
			images[0] = "images/dice_1.png";
			images[1] = "images/dice_2.png";
			images[2] = "images/dice_3.png";
			images[3] = "images/dice_4.png";
			images[4] = "images/dice_5.png";
			images[5] = "images/dice_6.png";


			pictureBox1->Load(images[RollResult_Comp[0] - 1]);
			pictureBox2->Load(images[RollResult_Comp[1] - 1]);
			pictureBox3->Load(images[RollResult_User[0] - 1]);
			pictureBox4->Load(images[RollResult_User[1] - 1]);
			
			comp_score += RollResult_Comp[0] + RollResult_Comp[1];
			user_score += RollResult_User[0] + RollResult_User[1];
			
			result_comp->Text = comp_score.ToString();
			result_user->Text = user_score.ToString();
		}
		

		count++;

		if (count == 3) {
			roll_Btn->Enabled = false;
			if (user_score > comp_score)
				MessageBox::Show(L"Вы выиграли партию!", L"Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
			else if (user_score < comp_score)
				MessageBox::Show(L"Компьютер выиграл партию!", L"Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
			else
				MessageBox::Show(L"Ничья!", L"Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
};
}
