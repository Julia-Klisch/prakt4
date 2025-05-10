#pragma once
#using<Microsoft.VisualBasic.dll>
#include <cstdlib>
#include<ctime>
#include<random>
int a[100]; 
int n, i, j, dop, min;
namespace Pr4 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Button^ button6;






	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ ооооо;



	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;





	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;



	private: System::Windows::Forms::DataGridView^ dataGridView8;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridView^ dataGridView7;
	private: System::Windows::Forms::DataGridView^ dataGridView6;

	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
private: System::Windows::Forms::Label^ label6;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button14;


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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ооооо = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(992, 498);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(984, 469);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(397, 338);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(28, 335);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Добуток парних елементів";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(400, 46);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(189, 259);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(82, 151);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 59);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(51, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 56);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Заповнити масив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(984, 469);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(451, 354);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(54, 354);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(304, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Кількість парних елементів масиву";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(246, 271);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(246, 187);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(253, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(246, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(253, 22);
			this->textBox2->TabIndex = 5;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(57, 247);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(153, 76);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Сума не парних елементів масиву";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(57, 170);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 55);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Сортувати";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(57, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 55);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Заповнити масив";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(451, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(54, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(341, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Введіть кількість елементів масиву  n=";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button14);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(984, 469);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Завдання 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(724, 177);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(99, 40);
			this->button14->TabIndex = 5;
			this->button14->Text = L"Сума";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(746, 261);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 4;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(724, 101);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(114, 44);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Сортувати";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column2 });
			this->dataGridView2->Location = System::Drawing::Point(404, 67);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(240, 288);
			this->dataGridView2->TabIndex = 1;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(33, 67);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(240, 288);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView4);
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Controls->Add(this->button9);
			this->tabPage4->Controls->Add(this->button8);
			this->tabPage4->Controls->Add(this->button7);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(984, 469);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Завдання 4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->ColumnHeadersVisible = false;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column8,
					this->Column9, this->Column10, this->Column11, this->Column12
			});
			this->dataGridView4->Location = System::Drawing::Point(27, 275);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(674, 83);
			this->dataGridView4->TabIndex = 4;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Column8";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Column9";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Column10";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Column11";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 125;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Column12";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 125;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column3,
					this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView3->Location = System::Drawing::Point(27, 59);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(680, 80);
			this->dataGridView3->TabIndex = 3;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Column7";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(517, 199);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(132, 44);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Очищення";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(331, 199);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(111, 44);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Обчислення";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(142, 199);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(114, 44);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Заповнити";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->dataGridView7);
			this->tabPage5->Controls->Add(this->dataGridView6);
			this->tabPage5->Controls->Add(this->dataGridView5);
			this->tabPage5->Controls->Add(this->ооооо);
			this->tabPage5->Controls->Add(this->button11);
			this->tabPage5->Controls->Add(this->button10);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(984, 469);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Завдання 5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// dataGridView7
			// 
			this->dataGridView7->AllowUserToAddRows = false;
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->ColumnHeadersVisible = false;
			this->dataGridView7->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column25 });
			this->dataGridView7->Location = System::Drawing::Point(79, 370);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->RowHeadersVisible = false;
			this->dataGridView7->RowHeadersWidth = 51;
			this->dataGridView7->RowTemplate->Height = 24;
			this->dataGridView7->Size = System::Drawing::Size(581, 70);
			this->dataGridView7->TabIndex = 8;
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"Column25";
			this->Column25->MinimumWidth = 6;
			this->Column25->Name = L"Column25";
			this->Column25->Width = 125;
			// 
			// dataGridView6
			// 
			this->dataGridView6->AllowUserToAddRows = false;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->ColumnHeadersVisible = false;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column24 });
			this->dataGridView6->Location = System::Drawing::Point(79, 210);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersVisible = false;
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->Size = System::Drawing::Size(579, 69);
			this->dataGridView6->TabIndex = 7;
			// 
			// Column24
			// 
			this->Column24->HeaderText = L"Column24";
			this->Column24->MinimumWidth = 6;
			this->Column24->Name = L"Column24";
			this->Column24->Width = 125;
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->ColumnHeadersVisible = false;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column23 });
			this->dataGridView5->Location = System::Drawing::Point(79, 48);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersVisible = false;
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(580, 75);
			this->dataGridView5->TabIndex = 6;
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"Column23";
			this->Column23->MinimumWidth = 6;
			this->Column23->Name = L"Column23";
			this->Column23->Width = 125;
			// 
			// ооооо
			// 
			this->ооооо->AutoSize = true;
			this->ооооо->Location = System::Drawing::Point(285, 20);
			this->ооооо->Name = L"ооооо";
			this->ооооо->Size = System::Drawing::Size(209, 16);
			this->ооооо->TabIndex = 5;
			this->ооооо->Text = L"Запивнити масив з клавіатури";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(341, 303);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(112, 34);
			this->button11->TabIndex = 4;
			this->button11->Text = L"Сортувати";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(314, 149);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(156, 32);
			this->button10->TabIndex = 3;
			this->button10->Text = L"До квадрату";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->button13);
			this->tabPage6->Controls->Add(this->button12);
			this->tabPage6->Controls->Add(this->label5);
			this->tabPage6->Controls->Add(this->dataGridView8);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(984, 469);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Завдання 6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(290, 265);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(104, 37);
			this->button13->TabIndex = 5;
			this->button13->Text = L"Обчислити";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(110, 265);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(101, 37);
			this->button12->TabIndex = 4;
			this->button12->Text = L"Заповнити";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(128, 362);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 16);
			this->label5->TabIndex = 3;
			// 
			// dataGridView8
			// 
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView8->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column13,
					this->Column14, this->Column15, this->Column16, this->Column17, this->Column18, this->Column19, this->Column20, this->Column21,
					this->Column22
			});
			this->dataGridView8->Location = System::Drawing::Point(88, 73);
			this->dataGridView8->Name = L"dataGridView8";
			this->dataGridView8->RowHeadersWidth = 51;
			this->dataGridView8->RowTemplate->Height = 24;
			this->dataGridView8->Size = System::Drawing::Size(713, 147);
			this->dataGridView8->TabIndex = 0;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Column13";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->Width = 125;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Column14";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->Width = 125;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Column15";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			this->Column15->Width = 125;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Column16";
			this->Column16->MinimumWidth = 6;
			this->Column16->Name = L"Column16";
			this->Column16->Width = 125;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Column17";
			this->Column17->MinimumWidth = 6;
			this->Column17->Name = L"Column17";
			this->Column17->Width = 125;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Column18";
			this->Column18->MinimumWidth = 6;
			this->Column18->Name = L"Column18";
			this->Column18->Width = 125;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Column19";
			this->Column19->MinimumWidth = 6;
			this->Column19->Name = L"Column19";
			this->Column19->Width = 125;
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"Column20";
			this->Column20->MinimumWidth = 6;
			this->Column20->Name = L"Column20";
			this->Column20->Width = 125;
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"Column21";
			this->Column21->MinimumWidth = 6;
			this->Column21->Name = L"Column21";
			this->Column21->Width = 125;
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"Column22";
			this->Column22->MinimumWidth = 6;
			this->Column22->Name = L"Column22";
			this->Column22->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(992, 498);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int i;
		richTextBox1->Clear();
		n = Convert::ToInt32(Microsoft::VisualBasic::Interaction::InputBox("n=", " Введіть розмірність масиву", "",10,10));
			for (i = 0; i < n; i++)
			{
				a[i] = Convert::ToInt32(Microsoft::VisualBasic::Interaction::InputBox("Введення значенння"+Convert::ToString(i)+" елемента масиву", "Заповнити масив", " ", 10, 10));
					richTextBox1->AppendText(Convert::ToString(a[i]) + "\n");

			}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int d, i;
	d = 1;
	for (i = 0; i < n; i++)
	{
		a[i] = Convert::ToInt32(richTextBox1->Lines[i]);
		if (a[i] % 2 == 0)
			d *= a[i];
	}
	label2->Text = Convert::ToString(d);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	srand(time(NULL));
	n = Convert::ToDouble(textBox1->Text);
	textBox2->Clear();
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 50;
		textBox2->AppendText(a[i] + " ");
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	for (j = 0; j < n - 1; j++)
	{
		min = j;
		for (i = j + 1; i < n; i++)

		{
			if (a[i] > a[min])
			{
				dop = a[min];
				a[min] = a[i];
				a[i] = dop;
			}

		}
	}

	textBox3->Clear();

	for (i = 0; i < n; i++)
		textBox3->AppendText(Convert::ToString(a[i]) + " ");
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int k = 0; int s = 0;
	textBox4->Clear();
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1)
		{
			s += a[i];
		}
		else { k += 1; }
	}

	textBox4->AppendText(Convert::ToString(s));
	textBox5->Clear();
	textBox5->AppendText(Convert::ToString(k));

}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add(10);
	dataGridView2->Rows->Add(10);
	dataGridView3->Rows->Add(5);
	dataGridView4->Rows->Add();
	dataGridView5->ColumnCount = 10;
	dataGridView5->Rows->Add(1);
	dataGridView6->ColumnCount = 10;
	dataGridView6->Rows->Add(1);
	dataGridView7->ColumnCount = 10;
	dataGridView7->Rows->Add(1);
	dataGridView8->ColumnCount = 10;
	dataGridView8->Rows->Add(1);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	const int n = 10;
	int a[n], i, j, dop;
	for (i = 0; i < n; i++)
		a[i] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
	for (j = 0; j < n - 1; j++)
		for (i = 0; i < n - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				dop = a[i + 1];
				a[i + 1] = a[i];
				a[i] = dop;
			}
		}
	for (i = 0; i < n; i++)
	dataGridView2->Rows[i]->Cells[0]->Value = a[i].ToString();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Random^ rnd = gcnew Random();
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			dataGridView3[j, i]->Value = rnd->Next(50);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	int a[5][5], x[5];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			a[i][j] = Convert::ToInt32(dataGridView3->Rows[i]->Cells[j]->Value);
	for (int j = 0; j < 5; j++)
	{
		x[j] = a[0][j];
		for (int i = 0; i < 5; i++)
			if (x[j] < a[i][j]) x[j] = a[i][j];
		dataGridView4->Rows[0]->Cells[j]->Value = Convert::ToString(x[j]);
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) dataGridView3[j, i]->Value = "";
	for (int j = 0; j < 5; j++) dataGridView4[j, 0]->Value = "";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	int a[10], i;
	for (i = 0; i < 10; i++)
	{
		a[i] = Convert::ToInt32(dataGridView5->Rows[0]->Cells[i]->Value);
	}
	for (i = 0; i < 10; i++)
	{
		a[i] = a[i] * a[i];
		dataGridView6->Rows[0]->Cells[i]->Value = Convert::ToString(a[i]);
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	int a[10], i, j, dop;
	for (i = 0; i < 10; i++)
	{
		a[i] = Convert::ToInt32(dataGridView6->Rows[0]->Cells[i]->Value);
	}
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 9 - j; i++)
		{
			if (a[i] < a[i + 1])
			{
				dop = a[i + 1];
				a[i + 1] = a[i];
				a[i] = dop;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		dataGridView7->Rows[0]->Cells[i]->Value = Convert::ToString(a[i]);
	}
}


private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	const int n = 10;
	int a[n];
	Random^ rnd = gcnew Random(); // Генератор випадкових чисел

	// Заповнюємо масив і таблицю випадковими числами
	for (int i = 0; i < n; i++) {
		a[i] = rnd->Next(-50, 51);
		dataGridView8->Rows[0]->Cells[i]->Value = a[i];
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	const int n = 10;
	int a[n];

	for (int i = 0; i < n; i++) {
		a[i] = System::Convert::ToInt32(dataGridView8->Rows[0]->Cells[i]->Value);
	}

	double sum = 0;
	int count = 0;
	for (int i = 0; i < n; i += 2) {
		sum += a[i];
		count++;
	}

	double avg = (count > 0) ? sum / count : 0;

	label5->Text = "Середнє арифметичне (парні індекси): " + avg.ToString("F2");
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	const int n = 10;
	int a[n];
	int sum = 0;

	for (int i = 0; i < n; i++) {
		if (dataGridView1->Rows[i]->Cells[0]->Value != nullptr) {
			a[i] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
			sum += a[i];
		}
	}

	label6->Text = "Сума: " + sum.ToString();
}
};
}
