#pragma once
#include <stdio.h>
#include <windows.system.h>
#include <iostream>
#include "ErrorForm.h"
#include <string>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Text;


	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>

	const int PLUS = 1;
	const int MINUS = 2;
	const int UMNOGENIE = 3;
	const int DELENIE = 4;


	public ref class MainForm : public System::Windows::Forms::Form
	{

	Image^ bubbleStart;
	Image^ bubbleClick;


	double first, second;
	int oper;
	bool znak = false;
	bool isPoint = false;
	int ss = 10;

	///////////////////////////////////////////////////////////////////////////////////////////////////

	private: System::Windows::Forms::Button^ btnPoint;

	private: System::Windows::Forms::FlowLayoutPanel^ LayoutPanelText2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;

	private: System::Windows::Forms::Label^ textOper;

	private: System::Windows::Forms::Button^ panelText;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;



	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Button^ btnUmnogenie;
	private: System::Windows::Forms::Button^ btnDelenie;
	private: System::Windows::Forms::Button^ btnClear;

	private: System::Windows::Forms::Button^ btnSS_2;
	private: System::Windows::Forms::Button^ btnSS_3;
	private: System::Windows::Forms::Button^ btnSS_8;
	private: System::Windows::Forms::Button^ btnSS_9;
	private: System::Windows::Forms::Button^ btnSS_10;
	private: System::Windows::Forms::Button^ btnSS_16;

	private: System::Windows::Forms::Button^ btnE;
	private: System::Windows::Forms::Button^ btnF;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnD;
	private: System::Windows::Forms::Button^ btnA;
	private: System::Windows::Forms::Button^ btnB;



	private: System::Windows::Forms::Button^ btPlusMinus;


	private: System::Windows::Forms::Button^ btnEnter;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ panelText2;
	private: System::ComponentModel::IContainer^ components;

  


	public:
		MainForm(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));

			ss = 10;
			znak = false;
			bubbleStart = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn5.BackgroundImage")));
			bubbleClick = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn0.BackgroundImage")));

			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}






#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnUmnogenie = (gcnew System::Windows::Forms::Button());
			this->btnDelenie = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnSS_2 = (gcnew System::Windows::Forms::Button());
			this->btnSS_3 = (gcnew System::Windows::Forms::Button());
			this->btnSS_8 = (gcnew System::Windows::Forms::Button());
			this->btnSS_9 = (gcnew System::Windows::Forms::Button());
			this->btnSS_10 = (gcnew System::Windows::Forms::Button());
			this->btnSS_16 = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnF = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnD = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnPoint = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panelText = (gcnew System::Windows::Forms::Button());
			this->textOper = (gcnew System::Windows::Forms::Label());
			this->LayoutPanelText2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panelText2 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->LayoutPanelText2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnEnter
			// 
			this->btnEnter->BackColor = System::Drawing::Color::Transparent;
			this->btnEnter->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEnter.BackgroundImage")));
			this->btnEnter->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnEnter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEnter->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btnEnter->FlatAppearance->BorderSize = 0;
			this->btnEnter->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnEnter->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnEnter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnter->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnter->ForeColor = System::Drawing::Color::Black;
			this->btnEnter->Location = System::Drawing::Point(373, 46);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(60, 60);
			this->btnEnter->TabIndex = 30;
			this->btnEnter->Text = L"=";
			this->btnEnter->UseMnemonic = false;
			this->btnEnter->UseVisualStyleBackColor = false;
			this->btnEnter->Click += gcnew System::EventHandler(this, &MainForm::BtnEnter_Click);
			this->btnEnter->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnEnter->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btnPlus
			// 
			this->btnPlus->BackColor = System::Drawing::Color::Transparent;
			this->btnPlus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlus.BackgroundImage")));
			this->btnPlus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlus->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnPlus->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btnPlus->FlatAppearance->BorderSize = 0;
			this->btnPlus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnPlus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->ForeColor = System::Drawing::Color::Black;
			this->btnPlus->Location = System::Drawing::Point(373, 152);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(60, 60);
			this->btnPlus->TabIndex = 28;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseMnemonic = false;
			this->btnPlus->UseVisualStyleBackColor = false;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MainForm::BtnPlus_Click);
			this->btnPlus->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnPlus->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Transparent;
			this->btn7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn7.BackgroundImage")));
			this->btn7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn7->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn7->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btn7->FlatAppearance->BorderSize = 0;
			this->btn7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::Color::Black;
			this->btn7->Location = System::Drawing::Point(12, 152);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(60, 60);
			this->btn7->TabIndex = 27;
			this->btn7->Text = L"7";
			this->btn7->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn7->UseMnemonic = false;
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btn7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btn7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Transparent;
			this->btn8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn8.BackgroundImage")));
			this->btn8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn8->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn8->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btn8->FlatAppearance->BorderSize = 0;
			this->btn8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::Color::Black;
			this->btn8->Location = System::Drawing::Point(78, 152);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(60, 60);
			this->btn8->TabIndex = 26;
			this->btn8->Text = L"8";
			this->btn8->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn8->UseMnemonic = false;
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btn8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btn8->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::Transparent;
			this->btn9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn9.BackgroundImage")));
			this->btn9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn9->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn9->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btn9->FlatAppearance->BorderSize = 0;
			this->btn9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::Color::Black;
			this->btn9->Location = System::Drawing::Point(144, 152);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(60, 60);
			this->btn9->TabIndex = 25;
			this->btn9->Text = L"9";
			this->btn9->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn9->UseMnemonic = false;
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btn9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btn9->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Transparent;
			this->btn4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn4.BackgroundImage")));
			this->btn4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn4->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn4->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btn4->FlatAppearance->BorderSize = 0;
			this->btn4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::Color::Black;
			this->btn4->Location = System::Drawing::Point(12, 218);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(60, 60);
			this->btn4->TabIndex = 24;
			this->btn4->Text = L"4";
			this->btn4->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn4->UseMnemonic = false;
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btn4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btn4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Transparent;
			this->btn1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1.BackgroundImage")));
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn1->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btn1->FlatAppearance->BorderSize = 0;
			this->btn1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::Color::Black;
			this->btn1->Location = System::Drawing::Point(12, 284);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(60, 60);
			this->btn1->TabIndex = 23;
			this->btn1->Text = L"1";
			this->btn1->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn1->UseMnemonic = false;
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btn1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btn1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Transparent;
			this->btn5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn5.BackgroundImage")));
			this->btn5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn5->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn5->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btn5->FlatAppearance->BorderSize = 0;
			this->btn5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::Color::Black;
			this->btn5->Location = System::Drawing::Point(78, 218);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(60, 60);
			this->btn5->TabIndex = 22;
			this->btn5->Text = L"5";
			this->btn5->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn5->UseMnemonic = false;
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btn5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btn5->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Transparent;
			this->btn2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn2.BackgroundImage")));
			this->btn2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn2->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btn2->FlatAppearance->BorderSize = 0;
			this->btn2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::Color::Black;
			this->btn2->Location = System::Drawing::Point(78, 284);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(60, 60);
			this->btn2->TabIndex = 21;
			this->btn2->Text = L"2";
			this->btn2->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn2->UseMnemonic = false;
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btn2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btn2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Transparent;
			this->btn3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn3.BackgroundImage")));
			this->btn3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn3->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btn3->FlatAppearance->BorderSize = 0;
			this->btn3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::Color::Black;
			this->btn3->Location = System::Drawing::Point(144, 284);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(60, 60);
			this->btn3->TabIndex = 20;
			this->btn3->Text = L"3";
			this->btn3->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn3->UseMnemonic = false;
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btn3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btn3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Transparent;
			this->btn6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn6.BackgroundImage")));
			this->btn6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn6->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn6->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btn6->FlatAppearance->BorderSize = 0;
			this->btn6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::Color::Black;
			this->btn6->Location = System::Drawing::Point(144, 218);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(60, 60);
			this->btn6->TabIndex = 19;
			this->btn6->Text = L"6";
			this->btn6->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn6->UseMnemonic = false;
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btn6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btn6->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::Transparent;
			this->btn0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn0.BackgroundImage")));
			this->btn0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn0->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn0->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btn0->FlatAppearance->BorderSize = 0;
			this->btn0->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn0->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn0->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::Color::Black;
			this->btn0->Location = System::Drawing::Point(78, 350);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(60, 60);
			this->btn0->TabIndex = 18;
			this->btn0->Text = L"0";
			this->btn0->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn0->UseMnemonic = false;
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btn0->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btn0->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btPlusMinus
			// 
			this->btPlusMinus->BackColor = System::Drawing::Color::Transparent;
			this->btPlusMinus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btPlusMinus.BackgroundImage")));
			this->btPlusMinus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btPlusMinus->Cursor = System::Windows::Forms::Cursors::Default;
			this->btPlusMinus->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btPlusMinus->FlatAppearance->BorderSize = 0;
			this->btPlusMinus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btPlusMinus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btPlusMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btPlusMinus->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btPlusMinus->ForeColor = System::Drawing::Color::Black;
			this->btPlusMinus->Location = System::Drawing::Point(12, 350);
			this->btPlusMinus->Name = L"btPlusMinus";
			this->btPlusMinus->Size = System::Drawing::Size(60, 60);
			this->btPlusMinus->TabIndex = 17;
			this->btPlusMinus->Text = L"+/-";
			this->btPlusMinus->UseMnemonic = false;
			this->btPlusMinus->UseVisualStyleBackColor = false;
			this->btPlusMinus->Click += gcnew System::EventHandler(this, &MainForm::btPlusMinus_Click);
			this->btPlusMinus->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btPlusMinus->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btnMinus
			// 
			this->btnMinus->BackColor = System::Drawing::Color::Transparent;
			this->btnMinus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinus.BackgroundImage")));
			this->btnMinus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnMinus->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnMinus->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btnMinus->FlatAppearance->BorderSize = 0;
			this->btnMinus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnMinus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinus->ForeColor = System::Drawing::Color::Black;
			this->btnMinus->Location = System::Drawing::Point(373, 218);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(60, 60);
			this->btnMinus->TabIndex = 16;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseMnemonic = false;
			this->btnMinus->UseVisualStyleBackColor = false;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MainForm::BtnMinus_Click);
			this->btnMinus->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnMinus->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btnUmnogenie
			// 
			this->btnUmnogenie->BackColor = System::Drawing::Color::Transparent;
			this->btnUmnogenie->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnUmnogenie.BackgroundImage")));
			this->btnUmnogenie->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnUmnogenie->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnUmnogenie->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btnUmnogenie->FlatAppearance->BorderSize = 0;
			this->btnUmnogenie->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnUmnogenie->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnUmnogenie->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUmnogenie->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUmnogenie->ForeColor = System::Drawing::Color::Black;
			this->btnUmnogenie->Location = System::Drawing::Point(373, 284);
			this->btnUmnogenie->Name = L"btnUmnogenie";
			this->btnUmnogenie->Size = System::Drawing::Size(60, 60);
			this->btnUmnogenie->TabIndex = 15;
			this->btnUmnogenie->Text = L"*";
			this->btnUmnogenie->UseMnemonic = false;
			this->btnUmnogenie->UseVisualStyleBackColor = false;
			this->btnUmnogenie->Click += gcnew System::EventHandler(this, &MainForm::BtnUmnogenie_Click);
			this->btnUmnogenie->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnUmnogenie->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btnDelenie
			// 
			this->btnDelenie->BackColor = System::Drawing::Color::Transparent;
			this->btnDelenie->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelenie.BackgroundImage")));
			this->btnDelenie->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnDelenie->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnDelenie->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btnDelenie->FlatAppearance->BorderSize = 0;
			this->btnDelenie->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnDelenie->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnDelenie->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelenie->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelenie->ForeColor = System::Drawing::Color::Black;
			this->btnDelenie->Location = System::Drawing::Point(373, 350);
			this->btnDelenie->Name = L"btnDelenie";
			this->btnDelenie->Size = System::Drawing::Size(60, 60);
			this->btnDelenie->TabIndex = 14;
			this->btnDelenie->Text = L"/";
			this->btnDelenie->UseMnemonic = false;
			this->btnDelenie->UseVisualStyleBackColor = false;
			this->btnDelenie->Click += gcnew System::EventHandler(this, &MainForm::BtnDelenie_Click);
			this->btnDelenie->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnDelenie->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::Transparent;
			this->btnClear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClear.BackgroundImage")));
			this->btnClear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnClear->FlatAppearance->BorderSize = 0;
			this->btnClear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnClear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 23, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(227, 350);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(126, 60);
			this->btnClear->TabIndex = 13;
			this->btnClear->Text = L"CLEAR";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainForm::BtnClear_Click);
			this->btnClear->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnClear->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btnSS_2
			// 
			this->btnSS_2->BackColor = System::Drawing::Color::Transparent;
			this->btnSS_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSS_2.BackgroundImage")));
			this->btnSS_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSS_2->CausesValidation = false;
			this->btnSS_2->FlatAppearance->BorderSize = 0;
			this->btnSS_2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnSS_2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnSS_2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnSS_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSS_2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSS_2->Location = System::Drawing::Point(12, 12);
			this->btnSS_2->Margin = System::Windows::Forms::Padding(0);
			this->btnSS_2->Name = L"btnSS_2";
			this->btnSS_2->Size = System::Drawing::Size(57, 25);
			this->btnSS_2->TabIndex = 12;
			this->btnSS_2->Text = L"2";
			this->btnSS_2->UseVisualStyleBackColor = false;
			this->btnSS_2->Click += gcnew System::EventHandler(this, &MainForm::BtnSystemClick);
			// 
			// btnSS_3
			// 
			this->btnSS_3->BackColor = System::Drawing::Color::Transparent;
			this->btnSS_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSS_3.BackgroundImage")));
			this->btnSS_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSS_3->CausesValidation = false;
			this->btnSS_3->FlatAppearance->BorderSize = 0;
			this->btnSS_3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnSS_3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnSS_3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnSS_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSS_3->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSS_3->Location = System::Drawing::Point(69, 12);
			this->btnSS_3->Margin = System::Windows::Forms::Padding(0);
			this->btnSS_3->Name = L"btnSS_3";
			this->btnSS_3->Size = System::Drawing::Size(57, 25);
			this->btnSS_3->TabIndex = 11;
			this->btnSS_3->Text = L"3";
			this->btnSS_3->UseVisualStyleBackColor = false;
			this->btnSS_3->Click += gcnew System::EventHandler(this, &MainForm::BtnSystemClick);
			// 
			// btnSS_8
			// 
			this->btnSS_8->BackColor = System::Drawing::Color::Transparent;
			this->btnSS_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSS_8.BackgroundImage")));
			this->btnSS_8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSS_8->CausesValidation = false;
			this->btnSS_8->FlatAppearance->BorderSize = 0;
			this->btnSS_8->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnSS_8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnSS_8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnSS_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSS_8->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSS_8->Location = System::Drawing::Point(126, 12);
			this->btnSS_8->Margin = System::Windows::Forms::Padding(0);
			this->btnSS_8->Name = L"btnSS_8";
			this->btnSS_8->Size = System::Drawing::Size(57, 25);
			this->btnSS_8->TabIndex = 10;
			this->btnSS_8->Text = L"8";
			this->btnSS_8->UseVisualStyleBackColor = false;
			this->btnSS_8->Click += gcnew System::EventHandler(this, &MainForm::BtnSystemClick);
			// 
			// btnSS_9
			// 
			this->btnSS_9->BackColor = System::Drawing::Color::Transparent;
			this->btnSS_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSS_9.BackgroundImage")));
			this->btnSS_9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSS_9->CausesValidation = false;
			this->btnSS_9->FlatAppearance->BorderSize = 0;
			this->btnSS_9->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnSS_9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnSS_9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnSS_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSS_9->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSS_9->Location = System::Drawing::Point(183, 12);
			this->btnSS_9->Margin = System::Windows::Forms::Padding(0);
			this->btnSS_9->Name = L"btnSS_9";
			this->btnSS_9->Size = System::Drawing::Size(57, 25);
			this->btnSS_9->TabIndex = 9;
			this->btnSS_9->Text = L"9";
			this->btnSS_9->UseVisualStyleBackColor = false;
			this->btnSS_9->Click += gcnew System::EventHandler(this, &MainForm::BtnSystemClick);
			// 
			// btnSS_10
			// 
			this->btnSS_10->BackColor = System::Drawing::Color::Transparent;
			this->btnSS_10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSS_10.BackgroundImage")));
			this->btnSS_10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSS_10->CausesValidation = false;
			this->btnSS_10->FlatAppearance->BorderSize = 0;
			this->btnSS_10->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnSS_10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnSS_10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnSS_10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSS_10->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSS_10->ForeColor = System::Drawing::SystemColors::Control;
			this->btnSS_10->Location = System::Drawing::Point(240, 12);
			this->btnSS_10->Margin = System::Windows::Forms::Padding(0);
			this->btnSS_10->Name = L"btnSS_10";
			this->btnSS_10->Size = System::Drawing::Size(57, 25);
			this->btnSS_10->TabIndex = 8;
			this->btnSS_10->Text = L"10";
			this->btnSS_10->UseVisualStyleBackColor = false;
			this->btnSS_10->Click += gcnew System::EventHandler(this, &MainForm::BtnSystemClick);
			// 
			// btnSS_16
			// 
			this->btnSS_16->BackColor = System::Drawing::Color::Transparent;
			this->btnSS_16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSS_16.BackgroundImage")));
			this->btnSS_16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSS_16->CausesValidation = false;
			this->btnSS_16->FlatAppearance->BorderSize = 0;
			this->btnSS_16->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnSS_16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnSS_16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnSS_16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSS_16->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSS_16->Location = System::Drawing::Point(296, 12);
			this->btnSS_16->Margin = System::Windows::Forms::Padding(0);
			this->btnSS_16->Name = L"btnSS_16";
			this->btnSS_16->Size = System::Drawing::Size(57, 25);
			this->btnSS_16->TabIndex = 7;
			this->btnSS_16->Text = L"16";
			this->btnSS_16->UseVisualStyleBackColor = false;
			this->btnSS_16->Click += gcnew System::EventHandler(this, &MainForm::BtnSystemClick);
			// 
			// btnE
			// 
			this->btnE->BackColor = System::Drawing::Color::Transparent;
			this->btnE->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnE.BackgroundImage")));
			this->btnE->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnE->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnE->Enabled = false;
			this->btnE->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btnE->FlatAppearance->BorderSize = 0;
			this->btnE->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnE->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnE->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnE->ForeColor = System::Drawing::Color::Black;
			this->btnE->Location = System::Drawing::Point(227, 152);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(60, 60);
			this->btnE->TabIndex = 6;
			this->btnE->Text = L"E";
			this->btnE->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnE->UseMnemonic = false;
			this->btnE->UseVisualStyleBackColor = false;
			this->btnE->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btnE->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnE->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btnF
			// 
			this->btnF->BackColor = System::Drawing::Color::Transparent;
			this->btnF->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnF.BackgroundImage")));
			this->btnF->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnF->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnF->Enabled = false;
			this->btnF->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btnF->FlatAppearance->BorderSize = 0;
			this->btnF->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnF->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnF->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnF->ForeColor = System::Drawing::Color::Black;
			this->btnF->Location = System::Drawing::Point(293, 152);
			this->btnF->Name = L"btnF";
			this->btnF->Size = System::Drawing::Size(60, 60);
			this->btnF->TabIndex = 5;
			this->btnF->Text = L"F";
			this->btnF->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnF->UseMnemonic = false;
			this->btnF->UseVisualStyleBackColor = false;
			this->btnF->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btnF->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnF->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::Transparent;
			this->btnC->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnC.BackgroundImage")));
			this->btnC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnC->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnC->Enabled = false;
			this->btnC->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btnC->FlatAppearance->BorderSize = 0;
			this->btnC->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnC->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->ForeColor = System::Drawing::Color::Black;
			this->btnC->Location = System::Drawing::Point(227, 218);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(60, 60);
			this->btnC->TabIndex = 4;
			this->btnC->Text = L"C";
			this->btnC->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnC->UseMnemonic = false;
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btnC->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnC->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btnD
			// 
			this->btnD->BackColor = System::Drawing::Color::Transparent;
			this->btnD->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnD.BackgroundImage")));
			this->btnD->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnD->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnD->Enabled = false;
			this->btnD->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btnD->FlatAppearance->BorderSize = 0;
			this->btnD->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnD->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnD->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnD->ForeColor = System::Drawing::Color::Black;
			this->btnD->Location = System::Drawing::Point(293, 218);
			this->btnD->Name = L"btnD";
			this->btnD->Size = System::Drawing::Size(60, 60);
			this->btnD->TabIndex = 3;
			this->btnD->Text = L"D";
			this->btnD->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnD->UseMnemonic = false;
			this->btnD->UseVisualStyleBackColor = false;
			this->btnD->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btnD->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnD->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btnA
			// 
			this->btnA->BackColor = System::Drawing::Color::Transparent;
			this->btnA->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnA.BackgroundImage")));
			this->btnA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnA->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnA->Enabled = false;
			this->btnA->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btnA->FlatAppearance->BorderSize = 0;
			this->btnA->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnA->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnA->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA->ForeColor = System::Drawing::Color::Black;
			this->btnA->Location = System::Drawing::Point(227, 284);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(60, 60);
			this->btnA->TabIndex = 2;
			this->btnA->Text = L"A";
			this->btnA->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnA->UseMnemonic = false;
			this->btnA->UseVisualStyleBackColor = false;
			this->btnA->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btnA->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnA->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btnB
			// 
			this->btnB->BackColor = System::Drawing::Color::Transparent;
			this->btnB->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnB.BackgroundImage")));
			this->btnB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnB->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnB->Enabled = false;
			this->btnB->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btnB->FlatAppearance->BorderSize = 0;
			this->btnB->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnB->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnB->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB->ForeColor = System::Drawing::Color::Black;
			this->btnB->Location = System::Drawing::Point(293, 284);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(60, 60);
			this->btnB->TabIndex = 1;
			this->btnB->Text = L"B";
			this->btnB->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnB->UseMnemonic = false;
			this->btnB->UseVisualStyleBackColor = false;
			this->btnB->Click += gcnew System::EventHandler(this, &MainForm::BtnsNambersClick);
			this->btnB->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnB->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// btnPoint
			// 
			this->btnPoint->BackColor = System::Drawing::Color::Transparent;
			this->btnPoint->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPoint.BackgroundImage")));
			this->btnPoint->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPoint->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnPoint->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->btnPoint->FlatAppearance->BorderSize = 0;
			this->btnPoint->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnPoint->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnPoint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPoint->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 32, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPoint->ForeColor = System::Drawing::Color::Black;
			this->btnPoint->Location = System::Drawing::Point(144, 350);
			this->btnPoint->Name = L"btnPoint";
			this->btnPoint->Size = System::Drawing::Size(60, 60);
			this->btnPoint->TabIndex = 32;
			this->btnPoint->Text = L",";
			this->btnPoint->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnPoint->UseMnemonic = false;
			this->btnPoint->UseVisualStyleBackColor = false;
			this->btnPoint->Click += gcnew System::EventHandler(this, &MainForm::btnPoint_Click);
			this->btnPoint->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsDown);
			this->btnPoint->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::allButtonsUp);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowLayoutPanel1.BackgroundImage")));
			this->flowLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->flowLayoutPanel1->Controls->Add(this->flowLayoutPanel2);
			this->flowLayoutPanel1->Controls->Add(this->textOper);
			this->flowLayoutPanel1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 37);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->flowLayoutPanel1->Size = System::Drawing::Size(341, 47);
			this->flowLayoutPanel1->TabIndex = 36;
			this->flowLayoutPanel1->WrapContents = false;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel2->Controls->Add(this->panelText);
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel2->Location = System::Drawing::Point(57, 0);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->flowLayoutPanel2->Size = System::Drawing::Size(284, 41);
			this->flowLayoutPanel2->TabIndex = 0;
			// 
			// panelText
			// 
			this->panelText->FlatAppearance->BorderSize = 0;
			this->panelText->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->panelText->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->panelText->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->panelText->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelText->Location = System::Drawing::Point(0, 0);
			this->panelText->Margin = System::Windows::Forms::Padding(0);
			this->panelText->Name = L"panelText";
			this->panelText->Size = System::Drawing::Size(290, 50);
			this->panelText->TabIndex = 40;
			this->panelText->Text = L"0";
			this->panelText->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->panelText->UseVisualStyleBackColor = true;
			this->panelText->TextChanged += gcnew System::EventHandler(this, &MainForm::panelText_TextChanged_1);
			// 
			// textOper
			// 
			this->textOper->AutoSize = true;
			this->textOper->BackColor = System::Drawing::Color::Transparent;
			this->textOper->Location = System::Drawing::Point(49, 0);
			this->textOper->Margin = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->textOper->Name = L"textOper";
			this->textOper->Size = System::Drawing::Size(0, 41);
			this->textOper->TabIndex = 1;
			// 
			// LayoutPanelText2
			// 
			this->LayoutPanelText2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LayoutPanelText2.BackgroundImage")));
			this->LayoutPanelText2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->LayoutPanelText2->Controls->Add(this->panelText2);
			this->LayoutPanelText2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 19, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LayoutPanelText2->Location = System::Drawing::Point(144, 82);
			this->LayoutPanelText2->Margin = System::Windows::Forms::Padding(0);
			this->LayoutPanelText2->Name = L"LayoutPanelText2";
			this->LayoutPanelText2->Size = System::Drawing::Size(209, 43);
			this->LayoutPanelText2->TabIndex = 38;
			// 
			// panelText2
			// 
			this->panelText2->BackColor = System::Drawing::Color::Transparent;
			this->panelText2->FlatAppearance->BorderSize = 0;
			this->panelText2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->panelText2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->panelText2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->panelText2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelText2->Location = System::Drawing::Point(3, 3);
			this->panelText2->Name = L"panelText2";
			this->panelText2->Size = System::Drawing::Size(206, 40);
			this->panelText2->TabIndex = 0;
			this->panelText2->Text = L"0";
			this->panelText2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->panelText2->UseVisualStyleBackColor = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(443, 422);
			this->Controls->Add(this->LayoutPanelText2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->btnPoint);
			this->Controls->Add(this->btnB);
			this->Controls->Add(this->btnA);
			this->Controls->Add(this->btnD);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnF);
			this->Controls->Add(this->btnE);
			this->Controls->Add(this->btnSS_16);
			this->Controls->Add(this->btnSS_10);
			this->Controls->Add(this->btnSS_9);
			this->Controls->Add(this->btnSS_8);
			this->Controls->Add(this->btnSS_3);
			this->Controls->Add(this->btnSS_2);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDelenie);
			this->Controls->Add(this->btnUmnogenie);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btPlusMinus);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnEnter);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(0);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TransparencyKey = System::Drawing::Color::White;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->LayoutPanelText2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));

		btn0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnE.BackgroundImage")));
	}

//////////////////////////////////ÔÓÍÊÖÈß ÑÌÅÍÛ ÇÍÀÊÀ////////////////////////////////////////
	private: System::Void btPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (znak == false)
		{
			String^ s = "-" + panelText->Text;
			panelText->Text = s;
			znak = false;
		}
		else if (znak == true)
		{
			panelText->Text = panelText->Text->Replace("-", "");
			znak = true;
		}
	}

//////////////////ÔÓÍÊÖÈß ÄËß ÏÅ×ÀÒÈ ÇÀÏßÒÎÉ, ÅÑËÈ ÎÍÀ ÅÙÅ ÍÅ ÍÀÏÅ×ÀÒÀÍÀ///////////////////////
	private: System::Void btnPoint_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isPoint) {
			panelText->Text = panelText->Text + ",";
		}
		isPoint = true;
		
	}

///////////////////---ÔÓÍÊÖÈß ÂÂÎÄÀ ÖÈÔÐ---------////////////////////////////


	System::Void BtnsNambersClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ number = safe_cast<Button^>(sender);
		if (panelText->Text == "ERROR" || panelText->Text == "0") {
			panelText->Text = "";
		}
		else if (panelText->Text == "-0") {
			panelText->Text = "-";
		}
		if (panelText->Text->Length <= 15) {
			panelText->Text = panelText->Text + number->Text;
		}
				
	}		   

////////////////////_______-____ÎÏÅÐÀÖÈÈ______________///////////////////////////

		   void operation(int c) {
			   first = perevod_v_double((panelText->Text));//×ÈÑËÎ ÇÀÏÎÌÈÍÀÅÒÑß
			   panelText->Text = "0";//ÊÎÍÑÎËÜ Î×ÈÙÀÅÒÑß
			   panelText2->Text =  perevod_v_string(first);//×ÈÑËÎ ÇÀÏÈÑÛÂÀÅÒÑß ÂÎ
														//ÂÑÏÎÌÎÃÀÒÅËÜÍÓÞ ÏÀÍÅËÜ
			   
			   switch (c) {
			   case PLUS:
				   oper = PLUS;
				   textOper->Text = "+";
				   break;
			   case MINUS:
				   oper = MINUS;
				   textOper->Text = "-";
				   break;
			   case UMNOGENIE:
				   oper = UMNOGENIE;
				   textOper->Text = "*";
				   break;
			   case DELENIE:
				   oper = DELENIE;
				   textOper->Text = "/";
				   break;
			   }
			   isPoint = false;
		   }

		   String^ perevod_v_string(double p) {
			   bool minus = false;
			   if (p < 0) {
				   minus = true;
				   p *= -1;
			   }
			   char s[15] = {};
			   int k;
			   long long int left;
			   double right = 0;
			   left = p;//öåëàÿ ÷àñòü
			   right = round((p - (int)p) * 10000000000000) / 10000000000000;///ìàíòèññà
			   _i64toa(left, s, ss);
			   k = 0;
			   while (s[k]) {
				   k++;
			   }

			   if (right) {//åñëè òî÷êà òî êîë-âî çíàêîâ ìåíüøå íà îäèí
				   s[k] = ',';
				   k++;
				   int a = 15;
				   while (k < 15 && right > 0) {
					   right *= ss;
					   a = (int)(right);
					   switch (a) {
					   
					   case 0:
						   s[k] = '0';
						   break;
					   case 1:
						   s[k] = '1';
						   break;
					   case 2:
						   s[k] = '2';
						   break;
					   case 3:
						   s[k] = '3';
						   break;
					   case 4:
						   s[k] = '4';
						   break;
					   case 5:
						   s[k] = '5';
						   break;
					   case 6:
						   s[k] = '6';
						   break;
					   case 7:
						   s[k] = '7';
						   break;
					   case 8:
						   s[k] = '8';
						   break;
					   case 9:
						   s[k] = '9';
						   break;
					   case 10:
						   s[k] = 'A';
						   break;
					   case 11:
						   s[k] = 'B';
						   break;
					   case 12:
						   s[k] = 'C';
						   break;
					   case 13:
						   s[k] = 'D';
						   break;
					   case 14:
						   s[k] = 'E';
						   break;
					   case 15:
						   s[k] = 'F';
						   break;
					   }
					   k++;
					   right -= a;
					   right = round(right * pow(10, 15 - k))/ pow(10, 15 - k);///ìàíòèññà
				   }
				   int i = 11;
				   while (s[i] == '0') {
					   s[i] = '\0';
				   }
			   }
			   for (int i = 0; i < 15; i++) {
				   if (s[i] > 96) {
					   s[i] -= 32;
				   }
			   }//ÇÀÅÌÍÀ ÐÅÃÈÑÒÐÀ ÁÓÊÂ
			  
			   String^ str = gcnew String(s);
			   if (minus) {
				   str = "-" + str;
			   }
			   return str;
		   }


		   double perevod_v_double(String^ str) {
			   double res = 0;
			   int point = 0;
			   int i = 0;
			   int j = str->Length;
			   int temp;
			   bool minus = false;
			   if (str[0] == '-') {
				   minus = true;
			   }
			   while (j) {
				   switch (str[j - 1]) {
				   case '0':
					   temp = 0; break;
				   case '1':
					   temp = 1; break;
				   case '2':
					   temp = 2; break;
				   case '3':
					   temp = 3; break;
				   case '4':
					   temp = 4; break;
				   case '5':
					   temp = 5; break;
				   case '6':
					   temp = 6; break;
				   case '7':
					   temp = 7; break;
				   case '8':
					   temp = 8; break;
				   case '9':
					   temp = 9; break;
				   case 'A':
					   temp = 10; break;
				   case 'B':
					   temp = 11; break;
				   case 'C':
					   temp = 12; break;
				   case 'D':
					   temp = 13; break;
				   case 'E':
					   temp = 14; break;
				   case 'F':
					   temp = 15; break;
				   case ',':
					   point = i;
				   }
				   if (str[j - 1] != ',' && str[j-1] != '-') {
					   res += temp * pow(ss, i);
					   i++;
				   }				   
				   j--;
			   }
			   res = (double)res / pow(ss, point);
			   if (minus) {
				   res *= -1;
			   }
			   return res;
		   }


		  
//--------------ÍÀÆÀÒÈÅ ÍÀ ÊÍÎÏÊÓ "ÏÎÊÀÇÀÒÜ ÐÅÇÓËÜÒÀÒ"--------------
	private: System::Void BtnEnter_Click(System::Object^ sender, System::EventArgs^ e) {
		second = perevod_v_double((panelText->Text));
		double res;
		char* s = new char[15];
		switch (oper) {
		case PLUS:
			res = first + second;
			break;
		case MINUS:
			res = first - second;
			break;
		case UMNOGENIE:
			res = first * second;
			break;
		case DELENIE:
			if (second) {
				res = first / second;
			}
			else {
				ErrorForm^ erform = gcnew ErrorForm();
				erform->Show();
				res = 0;
			}
			break;
		}
		if (res < pow(ss,15)) {
			panelText->Text = perevod_v_string(res);
		}
		else {
			panelText->Text = "ERROR";
		}
		panelText2->Text = "0";
		textOper->Text = "";
		first = 0;
		second = 0;
	}

	private: System::Void BtnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		operation(PLUS);
	}

	private: System::Void BtnMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		operation(MINUS);
	}

	private: System::Void BtnUmnogenie_Click(System::Object^ sender, System::EventArgs^ e) {
		operation(UMNOGENIE);
	}

	private: System::Void BtnDelenie_Click(System::Object^ sender, System::EventArgs^ e) {
		operation(DELENIE);
	}


	/////////////////////////////////////////////////////////////

	


		   ///____î÷èñòèòü ïàíåëü
	private: System::Void BtnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		panelText->Text = "0";
		panelText2->Text = "0";
		textOper->Text = "";
		isPoint = false;
	}

	/////////////////////////____________ñìåíà ñèñòåìû ñ÷èñëåíèÿ      ///////////////////////////////////////////   

	private: System::Void BtnSystemClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = safe_cast<Button^>(sender);
		first = perevod_v_double(panelText2->Text);
		second = perevod_v_double(panelText->Text);
		ss = Int16::Parse(btn->Text);

		panelText2->Text = perevod_v_string(first);
		panelText->Text = perevod_v_string(second);
		btnSS_2->ForeColor = Color::Black;
		btnSS_3->ForeColor = Color::Black;
		btnSS_8->ForeColor = Color::Black;
		btnSS_9->ForeColor = Color::Black;
		btnSS_10->ForeColor = Color::Black;
		btnSS_16->ForeColor = Color::Black;

		btn2->Enabled = false;
		btn3->Enabled = false;
		btn4->Enabled = false;
		btn5->Enabled = false;
		btn6->Enabled = false;
		btn7->Enabled = false;
		btn8->Enabled = false;
		btn9->Enabled = false;
		btnA->Enabled = false;
		btnB->Enabled = false;
		btnC->Enabled = false;
		btnD->Enabled = false;
		btnE->Enabled = false;
		btnF->Enabled = false;

		switch (ss) {
		case 2:
			btnSS_2->ForeColor = System::Drawing::SystemColors::Control;
			break;
		case 3:
			btnSS_3->ForeColor = System::Drawing::SystemColors::Control;
			btn2->Enabled = true;
			break;
		case 8:
			btnSS_8->ForeColor = System::Drawing::SystemColors::Control;
			btn2->Enabled = true;
			btn3->Enabled = true;
			btn4->Enabled = true;
			btn5->Enabled = true;
			btn6->Enabled = true;
			btn7->Enabled = true;
			break;
		case 9:
			btnSS_9->ForeColor = System::Drawing::SystemColors::Control;
			btn2->Enabled = true;
			btn3->Enabled = true;
			btn4->Enabled = true;
			btn5->Enabled = true;
			btn6->Enabled = true;
			btn7->Enabled = true;
			btn8->Enabled = true;
			break;		
		case 10:
			btnSS_10->ForeColor = System::Drawing::SystemColors::Control;
			btn2->Enabled = true;
			btn3->Enabled = true;
			btn4->Enabled = true;
			btn5->Enabled = true;
			btn6->Enabled = true;
			btn7->Enabled = true;
			btn8->Enabled = true;
			btn9->Enabled = true;
			break;
		case 16:
			btnSS_16->ForeColor = System::Drawing::SystemColors::Control;
			btn2->Enabled = true;
			btn3->Enabled = true;
			btn4->Enabled = true;
			btn5->Enabled = true;
			btn6->Enabled = true;
			btn7->Enabled = true;
			btn8->Enabled = true;
			btn9->Enabled = true;
			btnA->Enabled = true;
			btnB->Enabled = true;
			btnC->Enabled = true;
			btnD->Enabled = true;
			btnE->Enabled = true;
			btnF->Enabled = true;
			break;
		}
	}

 ///////////////////////////////////////////////////////////////////////////////////////////////////

private: System::Void FlowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

	   
	   
/////////////////////---ÎÒÑËÅÆÈÂÀÍÈÅ ÈÇÌÅÍÅÍÈÉ ÒÅÊÑÒÀ--////////////////////////////////////////////////////
	   

private: System::Void panelText_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (panelText->Text->Length == 15) {//15 çíàêîâ
		this->panelText->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 21.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	} 
	else if (panelText->Text->Length == 14) {//14 çíàêîâ
		this->panelText->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 22.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	else if (panelText->Text->Length == 13) {//13 çíàêîâ
		this->panelText->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 24.7F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	else if (panelText->Text->Length == 12) {//12 çíàêîâ
		this->panelText->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 26.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	else if (panelText->Text->Length == 11) {//11 çíàêîâ
		this->panelText->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 28.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	else if (panelText->Text->Length < 11) {//ìåíüøå 11 çíàêîâ
		this->panelText->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 30.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}

private: System::Void panelText2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (panelText2->Text->Length == 15) {//15 çíàêîâ
		this->panelText2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 15.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	else if (panelText2->Text->Length == 14) {//14 çíàêîâ
		this->panelText2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 16.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	else if (panelText2->Text->Length == 13) {//13 çíàêîâ
		this->panelText2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 18.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	else if (panelText2->Text->Length == 12) {//12 çíàêîâ
		this->panelText2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 18.7F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	else if (panelText2->Text->Length == 11) {//11 çíàêîâ
		this->panelText2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 21.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	else if (panelText2->Text->Length < 11) {//ìåíüøå 11 çíàêîâ
		this->panelText2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 22.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}


	
/////////////////---ÎÒÑËÅÆÈÂÀÍÈÅ ÍÀÆÀÒÈÉ ÊÍÎÏÎÊ----//////////////////////
		private: System::Void allButtonsDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			Button^ btn = safe_cast<Button^>(sender);
			btn->BackgroundImage = bubbleClick;
			btn->Font = (gcnew System::Drawing::Font(L"OCR A Extended", btn->Font->Size - 3, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			btn->Padding = System::Windows::Forms::Padding(3);
		}
		private: System::Void allButtonsUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			Button^ btn = safe_cast<Button^>(sender);
			btn->BackgroundImage = bubbleStart;
			btn->Font = (gcnew System::Drawing::Font(L"OCR A Extended", btn->Font->Size + 3, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			btn->Padding = System::Windows::Forms::Padding(0);
		}

	};
}


