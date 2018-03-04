#pragma once
#include <iostream>
#include <string>
#include "Executive.h"
#include "Event.h"
#include "User.h"
#include <msclr\marshal_cppstd.h>

Executive exec;

namespace Project1 {

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

	private: System::Windows::Forms::GroupBox^  grpAdmin;
	private: System::Windows::Forms::Button^  btnCreateEvent;
	private: System::Windows::Forms::Button^  btnEditEvents;
	private: System::Windows::Forms::Label^  lblAdmin;
	private: System::Windows::Forms::GroupBox^  grpCreateEvent;
	private: System::Windows::Forms::Label^  lblDate;


	private: System::Windows::Forms::Button^  btnSubmitEvent;

	private: System::Windows::Forms::Label^  lblCreateEvent;


	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  lblName;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;


	private: System::Windows::Forms::GroupBox^  grpLogin;
	private: System::Windows::Forms::Label^  lblUser;
	private: System::Windows::Forms::Button^  btnLogin;
	private: System::Windows::Forms::TextBox^  txtUser;
	private: System::Windows::Forms::GroupBox^  grpMode;
	private: System::Windows::Forms::Button^  btnAdmin;
	private: System::Windows::Forms::Button^  btnUser;


	private: System::Windows::Forms::GroupBox^  grpAvailability;
	private: System::Windows::Forms::Button^  btnSubmitTimes;
	private: System::Windows::Forms::Label^  label7;

















































































































	private: System::Windows::Forms::GroupBox^  grpViewYourEvents;
	private: System::Windows::Forms::ListBox^  lstYourEvents;
	private: System::Windows::Forms::Label^  lblViewEvent;
private: System::Windows::Forms::Button^  btnViewEvent;


	private: System::Windows::Forms::GroupBox^  grpEventInfo;
	private: System::Windows::Forms::Label^  lblEventDate;

	private: System::Windows::Forms::Button^  btnEditAvailability;
	private: System::Windows::Forms::Label^  lblEventName;
private: System::Windows::Forms::Button^  btnEventInfoBack;
private: System::Windows::Forms::Button^  btnModeBack;
private: System::Windows::Forms::Button^  btnAdminBack;
private: System::Windows::Forms::Button^  btnUserBack;
private: System::Windows::Forms::Button^  btnViewEventsBack;
private: System::Windows::Forms::Button^  btnCreateEventBack;
private: System::Windows::Forms::TextBox^  textBox4;

private: System::Windows::Forms::TextBox^  textBox5;























































private: System::Windows::Forms::Button^  btnAttendees;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;

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
			this->grpCreateEvent = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btnCreateEventBack = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->btnSubmitEvent = (gcnew System::Windows::Forms::Button());
			this->lblCreateEvent = (gcnew System::Windows::Forms::Label());
			this->grpAdmin = (gcnew System::Windows::Forms::GroupBox());
			this->btnAdminBack = (gcnew System::Windows::Forms::Button());
			this->btnCreateEvent = (gcnew System::Windows::Forms::Button());
			this->btnEditEvents = (gcnew System::Windows::Forms::Button());
			this->lblAdmin = (gcnew System::Windows::Forms::Label());
			this->grpLogin = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->grpMode = (gcnew System::Windows::Forms::GroupBox());
			this->btnModeBack = (gcnew System::Windows::Forms::Button());
			this->btnAdmin = (gcnew System::Windows::Forms::Button());
			this->btnUser = (gcnew System::Windows::Forms::Button());
			this->grpAvailability = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnSubmitTimes = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->grpViewYourEvents = (gcnew System::Windows::Forms::GroupBox());
			this->btnViewEvent = (gcnew System::Windows::Forms::Button());
			this->lstYourEvents = (gcnew System::Windows::Forms::ListBox());
			this->btnUserBack = (gcnew System::Windows::Forms::Button());
			this->lblViewEvent = (gcnew System::Windows::Forms::Label());
			this->btnViewEventsBack = (gcnew System::Windows::Forms::Button());
			this->grpEventInfo = (gcnew System::Windows::Forms::GroupBox());
			this->btnAttendees = (gcnew System::Windows::Forms::Button());
			this->btnEventInfoBack = (gcnew System::Windows::Forms::Button());
			this->lblEventDate = (gcnew System::Windows::Forms::Label());
			this->btnEditAvailability = (gcnew System::Windows::Forms::Button());
			this->lblEventName = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->grpCreateEvent->SuspendLayout();
			this->grpAdmin->SuspendLayout();
			this->grpLogin->SuspendLayout();
			this->grpMode->SuspendLayout();
			this->grpAvailability->SuspendLayout();
			this->grpViewYourEvents->SuspendLayout();
			this->grpEventInfo->SuspendLayout();
			this->SuspendLayout();
			// 
			// grpCreateEvent
			// 
			this->grpCreateEvent->Controls->Add(this->textBox4);
			this->grpCreateEvent->Controls->Add(this->btnCreateEventBack);
			this->grpCreateEvent->Controls->Add(this->monthCalendar1);
			this->grpCreateEvent->Controls->Add(this->textBox1);
			this->grpCreateEvent->Controls->Add(this->lblName);
			this->grpCreateEvent->Controls->Add(this->lblDate);
			this->grpCreateEvent->Controls->Add(this->btnSubmitEvent);
			this->grpCreateEvent->Controls->Add(this->lblCreateEvent);
			this->grpCreateEvent->Location = System::Drawing::Point(236, 111);
			this->grpCreateEvent->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpCreateEvent->Name = L"grpCreateEvent";
			this->grpCreateEvent->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpCreateEvent->Size = System::Drawing::Size(542, 588);
			this->grpCreateEvent->TabIndex = 8;
			this->grpCreateEvent->TabStop = false;
			this->grpCreateEvent->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(94, 423);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(148, 26);
			this->textBox4->TabIndex = 13;
			this->textBox4->Visible = false;
			// 
			// btnCreateEventBack
			// 
			this->btnCreateEventBack->Location = System::Drawing::Point(225, 508);
			this->btnCreateEventBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnCreateEventBack->Name = L"btnCreateEventBack";
			this->btnCreateEventBack->Size = System::Drawing::Size(154, 35);
			this->btnCreateEventBack->TabIndex = 10;
			this->btnCreateEventBack->Text = L"Back";
			this->btnCreateEventBack->UseVisualStyleBackColor = true;
			this->btnCreateEventBack->Click += gcnew System::EventHandler(this, &MyForm::btnCreateEventBack_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(128, 154);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(14);
			this->monthCalendar1->MaximumSize = System::Drawing::Size(750, 769);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 11;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(128, 92);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(338, 26);
			this->textBox1->TabIndex = 10;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(22, 97);
			this->lblName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(55, 20);
			this->lblName->TabIndex = 9;
			this->lblName->Text = L"Name:";
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->Location = System::Drawing::Point(22, 154);
			this->lblDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(48, 20);
			this->lblDate->TabIndex = 6;
			this->lblDate->Text = L"Date:";
			// 
			// btnSubmitEvent
			// 
			this->btnSubmitEvent->Location = System::Drawing::Point(225, 463);
			this->btnSubmitEvent->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSubmitEvent->Name = L"btnSubmitEvent";
			this->btnSubmitEvent->Size = System::Drawing::Size(154, 35);
			this->btnSubmitEvent->TabIndex = 0;
			this->btnSubmitEvent->Text = L"Submit";
			this->btnSubmitEvent->UseVisualStyleBackColor = true;
			this->btnSubmitEvent->Click += gcnew System::EventHandler(this, &MyForm::btnSubmitEvent_Click);
			// 
			// lblCreateEvent
			// 
			this->lblCreateEvent->AutoSize = true;
			this->lblCreateEvent->Location = System::Drawing::Point(196, 40);
			this->lblCreateEvent->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCreateEvent->Name = L"lblCreateEvent";
			this->lblCreateEvent->Size = System::Drawing::Size(106, 20);
			this->lblCreateEvent->TabIndex = 2;
			this->lblCreateEvent->Text = L"Create Event:";
			// 
			// grpAdmin
			// 
			this->grpAdmin->Controls->Add(this->btnAdminBack);
			this->grpAdmin->Controls->Add(this->btnCreateEvent);
			this->grpAdmin->Controls->Add(this->btnEditEvents);
			this->grpAdmin->Controls->Add(this->lblAdmin);
			this->grpAdmin->Location = System::Drawing::Point(387, 111);
			this->grpAdmin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpAdmin->Name = L"grpAdmin";
			this->grpAdmin->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpAdmin->Size = System::Drawing::Size(237, 252);
			this->grpAdmin->TabIndex = 7;
			this->grpAdmin->TabStop = false;
			this->grpAdmin->Visible = false;
			// 
			// btnAdminBack
			// 
			this->btnAdminBack->Location = System::Drawing::Point(45, 188);
			this->btnAdminBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnAdminBack->Name = L"btnAdminBack";
			this->btnAdminBack->Size = System::Drawing::Size(154, 35);
			this->btnAdminBack->TabIndex = 10;
			this->btnAdminBack->Text = L"Back";
			this->btnAdminBack->UseVisualStyleBackColor = true;
			this->btnAdminBack->Click += gcnew System::EventHandler(this, &MyForm::btnAdminBack_Click);
			// 
			// btnCreateEvent
			// 
			this->btnCreateEvent->Location = System::Drawing::Point(45, 98);
			this->btnCreateEvent->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnCreateEvent->Name = L"btnCreateEvent";
			this->btnCreateEvent->Size = System::Drawing::Size(154, 35);
			this->btnCreateEvent->TabIndex = 5;
			this->btnCreateEvent->Text = L"Create Event";
			this->btnCreateEvent->UseVisualStyleBackColor = true;
			this->btnCreateEvent->Click += gcnew System::EventHandler(this, &MyForm::btnCreateEvent_Click);
			// 
			// btnEditEvents
			// 
			this->btnEditEvents->Location = System::Drawing::Point(45, 143);
			this->btnEditEvents->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEditEvents->Name = L"btnEditEvents";
			this->btnEditEvents->Size = System::Drawing::Size(154, 35);
			this->btnEditEvents->TabIndex = 3;
			this->btnEditEvents->Text = L"View Your Events";
			this->btnEditEvents->UseVisualStyleBackColor = true;
			this->btnEditEvents->Click += gcnew System::EventHandler(this, &MyForm::btnEditEvents_Click);
			// 
			// lblAdmin
			// 
			this->lblAdmin->AutoSize = true;
			this->lblAdmin->Location = System::Drawing::Point(51, 49);
			this->lblAdmin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAdmin->Name = L"lblAdmin";
			this->lblAdmin->Size = System::Drawing::Size(135, 20);
			this->lblAdmin->TabIndex = 2;
			this->lblAdmin->Text = L"Make a Selection:";
			// 
			// grpLogin
			// 
			this->grpLogin->Controls->Add(this->button2);
			this->grpLogin->Controls->Add(this->lblUser);
			this->grpLogin->Controls->Add(this->btnLogin);
			this->grpLogin->Controls->Add(this->txtUser);
			this->grpLogin->Location = System::Drawing::Point(356, 111);
			this->grpLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpLogin->Name = L"grpLogin";
			this->grpLogin->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpLogin->Size = System::Drawing::Size(300, 228);
			this->grpLogin->TabIndex = 7;
			this->grpLogin->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(88, 183);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Save/Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Location = System::Drawing::Point(88, 60);
			this->lblUser->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(136, 20);
			this->lblUser->TabIndex = 6;
			this->lblUser->Text = L"Enter Your Name:";
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(88, 145);
			this->btnLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(112, 35);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &MyForm::btnLogin_Click);
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(74, 108);
			this->txtUser->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(148, 26);
			this->txtUser->TabIndex = 1;
			// 
			// grpMode
			// 
			this->grpMode->Controls->Add(this->btnModeBack);
			this->grpMode->Controls->Add(this->btnAdmin);
			this->grpMode->Controls->Add(this->btnUser);
			this->grpMode->Location = System::Drawing::Point(196, 91);
			this->grpMode->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpMode->Name = L"grpMode";
			this->grpMode->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpMode->Size = System::Drawing::Size(300, 228);
			this->grpMode->TabIndex = 8;
			this->grpMode->TabStop = false;
			this->grpMode->Visible = false;
			// 
			// btnModeBack
			// 
			this->btnModeBack->Location = System::Drawing::Point(88, 160);
			this->btnModeBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnModeBack->Name = L"btnModeBack";
			this->btnModeBack->Size = System::Drawing::Size(112, 35);
			this->btnModeBack->TabIndex = 2;
			this->btnModeBack->Text = L"Logout";
			this->btnModeBack->UseVisualStyleBackColor = true;
			this->btnModeBack->Click += gcnew System::EventHandler(this, &MyForm::btnModeBack_Click);
			// 
			// btnAdmin
			// 
			this->btnAdmin->Location = System::Drawing::Point(88, 54);
			this->btnAdmin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnAdmin->Name = L"btnAdmin";
			this->btnAdmin->Size = System::Drawing::Size(112, 35);
			this->btnAdmin->TabIndex = 1;
			this->btnAdmin->Text = L"Admin Mode";
			this->btnAdmin->UseVisualStyleBackColor = true;
			this->btnAdmin->Click += gcnew System::EventHandler(this, &MyForm::btnAdmin_Click);
			// 
			// btnUser
			// 
			this->btnUser->Location = System::Drawing::Point(88, 102);
			this->btnUser->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnUser->Name = L"btnUser";
			this->btnUser->Size = System::Drawing::Size(112, 35);
			this->btnUser->TabIndex = 0;
			this->btnUser->Text = L"User Mode";
			this->btnUser->UseVisualStyleBackColor = true;
			this->btnUser->Click += gcnew System::EventHandler(this, &MyForm::btnUser_Click);
			// 
			// grpAvailability
			// 
			this->grpAvailability->Controls->Add(this->label2);
			this->grpAvailability->Controls->Add(this->dateTimePicker2);
			this->grpAvailability->Controls->Add(this->grpMode);
			this->grpAvailability->Controls->Add(this->label1);
			this->grpAvailability->Controls->Add(this->dateTimePicker1);
			this->grpAvailability->Controls->Add(this->btnSubmitTimes);
			this->grpAvailability->Controls->Add(this->label7);
			this->grpAvailability->Location = System::Drawing::Point(152, 111);
			this->grpAvailability->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpAvailability->Name = L"grpAvailability";
			this->grpAvailability->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpAvailability->Size = System::Drawing::Size(708, 678);
			this->grpAvailability->TabIndex = 13;
			this->grpAvailability->TabStop = false;
			this->grpAvailability->Visible = false;
			this->grpAvailability->Enter += gcnew System::EventHandler(this, &MyForm::grpAvailability_Enter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 254);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"End Time";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker2->Location = System::Drawing::Point(84, 293);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->ShowUpDown = true;
			this->dateTimePicker2->Size = System::Drawing::Size(517, 26);
			this->dateTimePicker2->TabIndex = 5;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker2_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(78, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Start Time";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->AllowDrop = true;
			this->dateTimePicker1->CustomFormat = L"";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(84, 120);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(517, 26);
			this->dateTimePicker1->TabIndex = 3;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// btnSubmitTimes
			// 
			this->btnSubmitTimes->Location = System::Drawing::Point(284, 598);
			this->btnSubmitTimes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSubmitTimes->Name = L"btnSubmitTimes";
			this->btnSubmitTimes->Size = System::Drawing::Size(154, 35);
			this->btnSubmitTimes->TabIndex = 0;
			this->btnSubmitTimes->Text = L"Submit";
			this->btnSubmitTimes->UseVisualStyleBackColor = true;
			this->btnSubmitTimes->Click += gcnew System::EventHandler(this, &MyForm::btnSubmitTimes_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(274, 34);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 20);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Create Event:";
			// 
			// grpViewYourEvents
			// 
			this->grpViewYourEvents->Controls->Add(this->btnViewEvent);
			this->grpViewYourEvents->Controls->Add(this->lstYourEvents);
			this->grpViewYourEvents->Controls->Add(this->btnUserBack);
			this->grpViewYourEvents->Controls->Add(this->lblViewEvent);
			this->grpViewYourEvents->Controls->Add(this->btnViewEventsBack);
			this->grpViewYourEvents->Location = System::Drawing::Point(356, 111);
			this->grpViewYourEvents->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpViewYourEvents->Name = L"grpViewYourEvents";
			this->grpViewYourEvents->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpViewYourEvents->Size = System::Drawing::Size(300, 555);
			this->grpViewYourEvents->TabIndex = 9;
			this->grpViewYourEvents->TabStop = false;
			this->grpViewYourEvents->Visible = false;
			// 
			// btnViewEvent
			// 
			this->btnViewEvent->Location = System::Drawing::Point(66, 445);
			this->btnViewEvent->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnViewEvent->Name = L"btnViewEvent";
			this->btnViewEvent->Size = System::Drawing::Size(154, 35);
			this->btnViewEvent->TabIndex = 4;
			this->btnViewEvent->Text = L"View Event";
			this->btnViewEvent->UseVisualStyleBackColor = true;
			this->btnViewEvent->Click += gcnew System::EventHandler(this, &MyForm::btnViewEvent_Click);
			// 
			// lstYourEvents
			// 
			this->lstYourEvents->FormattingEnabled = true;
			this->lstYourEvents->ItemHeight = 20;
			this->lstYourEvents->Location = System::Drawing::Point(9, 71);
			this->lstYourEvents->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->lstYourEvents->Name = L"lstYourEvents";
			this->lstYourEvents->Size = System::Drawing::Size(280, 344);
			this->lstYourEvents->TabIndex = 3;
			// 
			// btnUserBack
			// 
			this->btnUserBack->Location = System::Drawing::Point(66, 489);
			this->btnUserBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnUserBack->Name = L"btnUserBack";
			this->btnUserBack->Size = System::Drawing::Size(154, 35);
			this->btnUserBack->TabIndex = 12;
			this->btnUserBack->Text = L"Back";
			this->btnUserBack->UseVisualStyleBackColor = true;
			this->btnUserBack->Click += gcnew System::EventHandler(this, &MyForm::btnUserBack_Click);
			// 
			// lblViewEvent
			// 
			this->lblViewEvent->AutoSize = true;
			this->lblViewEvent->Location = System::Drawing::Point(82, 38);
			this->lblViewEvent->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblViewEvent->Name = L"lblViewEvent";
			this->lblViewEvent->Size = System::Drawing::Size(103, 20);
			this->lblViewEvent->TabIndex = 2;
			this->lblViewEvent->Text = L"Select Event:";
			// 
			// btnViewEventsBack
			// 
			this->btnViewEventsBack->Location = System::Drawing::Point(66, 489);
			this->btnViewEventsBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnViewEventsBack->Name = L"btnViewEventsBack";
			this->btnViewEventsBack->Size = System::Drawing::Size(154, 35);
			this->btnViewEventsBack->TabIndex = 11;
			this->btnViewEventsBack->Text = L"Back";
			this->btnViewEventsBack->UseVisualStyleBackColor = true;
			this->btnViewEventsBack->Click += gcnew System::EventHandler(this, &MyForm::btnViewEventsBack_Click);
			// 
			// grpEventInfo
			// 
			this->grpEventInfo->Controls->Add(this->btnAttendees);
			this->grpEventInfo->Controls->Add(this->btnEventInfoBack);
			this->grpEventInfo->Controls->Add(this->lblEventDate);
			this->grpEventInfo->Controls->Add(this->btnEditAvailability);
			this->grpEventInfo->Controls->Add(this->lblEventName);
			this->grpEventInfo->Location = System::Drawing::Point(356, 111);
			this->grpEventInfo->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpEventInfo->Name = L"grpEventInfo";
			this->grpEventInfo->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpEventInfo->Size = System::Drawing::Size(300, 285);
			this->grpEventInfo->TabIndex = 9;
			this->grpEventInfo->TabStop = false;
			this->grpEventInfo->Visible = false;
			// 
			// btnAttendees
			// 
			this->btnAttendees->Location = System::Drawing::Point(76, 140);
			this->btnAttendees->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnAttendees->Name = L"btnAttendees";
			this->btnAttendees->Size = System::Drawing::Size(154, 35);
			this->btnAttendees->TabIndex = 10;
			this->btnAttendees->Text = L"View Attendees";
			this->btnAttendees->UseVisualStyleBackColor = true;
			this->btnAttendees->Visible = false;
			this->btnAttendees->Click += gcnew System::EventHandler(this, &MyForm::btnAttendees_Click);
			// 
			// btnEventInfoBack
			// 
			this->btnEventInfoBack->Location = System::Drawing::Point(76, 223);
			this->btnEventInfoBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEventInfoBack->Name = L"btnEventInfoBack";
			this->btnEventInfoBack->Size = System::Drawing::Size(154, 35);
			this->btnEventInfoBack->TabIndex = 9;
			this->btnEventInfoBack->Text = L"Back";
			this->btnEventInfoBack->UseVisualStyleBackColor = true;
			this->btnEventInfoBack->Click += gcnew System::EventHandler(this, &MyForm::btnEventInfoBack_Click);
			// 
			// lblEventDate
			// 
			this->lblEventDate->Location = System::Drawing::Point(0, 88);
			this->lblEventDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEventDate->Name = L"lblEventDate";
			this->lblEventDate->Size = System::Drawing::Size(300, 20);
			this->lblEventDate->TabIndex = 8;
			this->lblEventDate->Text = L"EVENTDATE";
			this->lblEventDate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblEventDate->Click += gcnew System::EventHandler(this, &MyForm::lblEventDate_Click);
			// 
			// btnEditAvailability
			// 
			this->btnEditAvailability->Location = System::Drawing::Point(76, 182);
			this->btnEditAvailability->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEditAvailability->Name = L"btnEditAvailability";
			this->btnEditAvailability->Size = System::Drawing::Size(154, 35);
			this->btnEditAvailability->TabIndex = 6;
			this->btnEditAvailability->Text = L"Edit Availability";
			this->btnEditAvailability->UseVisualStyleBackColor = true;
			this->btnEditAvailability->Click += gcnew System::EventHandler(this, &MyForm::btnEditAvailability_Click);
			// 
			// lblEventName
			// 
			this->lblEventName->Location = System::Drawing::Point(2, 26);
			this->lblEventName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEventName->Name = L"lblEventName";
			this->lblEventName->Size = System::Drawing::Size(298, 26);
			this->lblEventName->TabIndex = 2;
			this->lblEventName->Text = L"EVENTNAME";
			this->lblEventName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblEventName->Click += gcnew System::EventHandler(this, &MyForm::lblEventName_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(662, 5);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(148, 26);
			this->textBox5->TabIndex = 14;
			this->textBox5->Visible = false;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(428, 46);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(148, 26);
			this->textBox6->TabIndex = 40;
			this->textBox6->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 866);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->grpAvailability);
			this->Controls->Add(this->grpCreateEvent);
			this->Controls->Add(this->grpViewYourEvents);
			this->Controls->Add(this->grpAdmin);
			this->Controls->Add(this->grpEventInfo);
			this->Controls->Add(this->grpLogin);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"Doodle Scheduler";
			this->grpCreateEvent->ResumeLayout(false);
			this->grpCreateEvent->PerformLayout();
			this->grpAdmin->ResumeLayout(false);
			this->grpAdmin->PerformLayout();
			this->grpLogin->ResumeLayout(false);
			this->grpLogin->PerformLayout();
			this->grpMode->ResumeLayout(false);
			this->grpAvailability->ResumeLayout(false);
			this->grpAvailability->PerformLayout();
			this->grpViewYourEvents->ResumeLayout(false);
			this->grpViewYourEvents->PerformLayout();
			this->grpEventInfo->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#include <string>
		//TODO: focus on txtUser on startup

	private: System::Void btnCreateEvent_Click(System::Object^  sender, System::EventArgs^  e) {
		grpCreateEvent->Visible = true;
		grpAdmin->Visible = false;
		label2->Text = "Select Available Times:";
	}

	private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
		//Display the dates for selected range
		Label1.Text = "Dates Selected from :" + (MonthCalendar1.SelectionRange.Start() + " to " + MonthCalendar1.SelectionRange.End());
		std::cout>>Label1.text;

		//To display single selected of date
		//MonthCalendar1.MaxSelectionCount = 1;

		//To display single selected of date use MonthCalendar1.SelectionRange.Start/ MonthCalendarSelectionRange.End
		Label2.Text = "Date Selected :" + MonthCalendar1.SelectionRange.Start;

		OutputDebugString(Label1.text);
		OutputDebugString("HERE");

		std::string date = msclr::interop::marshal_as<std::string>(textBox4->Text);
		//std::string newstr = gcnew String(date.c_str());

		std::string newDate;// = date.substr(0, 4);
		
		int count = 0;
		for (int i = 1; i < 6; i++)
		{
			if (date[i] == '/')
			{
				count++;
			}
			if (count == 2)
			{
				newDate = date.substr(0, i);
				i = 5;
			}
		}

		//TODO create a check that wont let you create a date in the past

		//std::string christmas "12/25";
		textBox5->Text = gcnew String(newDate.c_str());
		if (newDate == "12/25" || newDate == "7/4" || newDate == "1/1")
		{
			MessageBox::Show("You may not schedule an event on this date.");
			textBox4->Clear();
		}
	}

private: bool currentlyAdmin;

private: System::Void btnViewSchedule_Click(System::Object^  sender, System::EventArgs^  e) {
	grpAdmin->Visible = false;
}
private: System::Void btnSubmitEvent_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox4->Text == "")
	{
		MessageBox::Show("Please enter an event name");
	}
	else
	{
		grpAvailability->Visible = true;
		grpCreateEvent->Visible = false;
		std::string name = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::string date = msclr::interop::marshal_as<std::string>(textBox4->Text);
		//Event myEvent(name, date);
		//exec.currentEvent = myEvent;
		Event myEvent;
		myEvent.setEventName(name);
		myEvent.setEventDate(date);

		std::string adminName = msclr::interop::marshal_as<std::string>(txtUser->Text);
		myEvent.setAdmin(adminName);

		textBox6->Text = gcnew String(myEvent.getAdmin().c_str());
		exec.AddEvent(myEvent);
	}
	textBox1->Clear();

	lbl500_520AMQuantity->Visible = false;
	lbl520_540AMQuantity->Visible = false;
	lbl540_600AMQuantity->Visible = false;

	lbl600_620AMQuantity->Visible = false;
	lbl620_640AMQuantity->Visible = false;
	lbl640_700AMQuantity->Visible = false;

	lbl700_720AMQuantity->Visible = false;
	lbl720_740AMQuantity->Visible = false;
	lbl740_800AMQuantity->Visible = false;

	lbl800_820AMQuantity->Visible = false;
	lbl820_840AMQuantity->Visible = false;
	lbl840_900AMQuantity->Visible = false;

	lbl900_920AMQuantity->Visible = false;
	lbl920_940AMQuantity->Visible = false;
	lbl940_1000AM7Quantity->Visible = false;

	lbl1000_1020AMQuantity->Visible = false;
	lbl1020_1040AMQuantity->Visible = false;
	lbl1040_1100AMQuantity->Visible = false;

	lbl1100_1120AMQuantity->Visible = false;
	lbl1120_1140AMQuantity->Visible = false;
	lbl1140_1200PMQuantity->Visible = false;

	lbl100_120PMQuantity->Visible = false;
	lbl120_140PMQuantity->Visible = false;
	lbl140_200PMQuantity->Visible = false;

	lbl200_220PMQuantity->Visible = false;
	lbl220_240PMQuantity->Visible = false;
	lbl240_300PMQuantity->Visible = false;

	lbl300_320PMQuantity->Visible = false;
	lbl320_340PMQuantity->Visible = false;
	lbl340_400PMQuantity->Visible = false;

	lbl400_420PMQuantity->Visible = false;
	lbl420_440PMQuantity->Visible = false;
	lbl440_500PMQuantity->Visible = false;

	lbl500_520PMQuantity->Visible = false;
	lbl520_540PMQuantity->Visible = false;
	lbl540_600PMQuantity->Visible = false;

	lbl600_620PMQuantity->Visible = false;
	lbl620_640PMQuantity->Visible = false;
	lbl640_700PMQuantity->Visible = false;

	lbl700_720PMQuantity->Visible = false;
	lbl720_740PMQuantity->Visible = false;
	lbl740_800PMQuantity->Visible = false;

	lbl800_820PMQuantity->Visible = false;
	lbl820_840PMQuantity->Visible = false;
	lbl840_900PMQuantity->Visible = false;

	lbl900_920PMQuantity->Visible = false;
	lbl920_940PMQuantity->Visible = false;
	lbl940_1000PMQuantity->Visible = false;

	lbl1000_1020PMQuantity->Visible = false;
	lbl1020_1040PMQuantity->Visible = false;
	lbl1040_1100PMQuantity->Visible = false;

	lbl1100_1120PMQuantity->Visible = false;
	lbl1120_1140PMQuantity->Visible = false;
	lbl1140_1200AMQuantity->Visible = false;


	///
	///
	///
	chk500_520AM->Visible = true;
	chk520_540AM->Visible = true;
	chk540_600AM->Visible = true;

	chk600_620AM->Visible = true;
	chk620_640AM->Visible = true;
	chk640_700AM->Visible = true;

	chk700_720AM->Visible = true;
	chk720_740AM->Visible = true;
	chk740_800AM->Visible = true;

	chk800_820AM->Visible = true;
	chk820_840AM->Visible = true;
	chk840_900AM->Visible = true;

	chk900_920AM->Visible = true;
	chk920_940AM->Visible = true;
	chk940_10000AM->Visible = true;

	chk1000_1020AM->Visible = true;
	chk1020_1040AM->Visible = true;
	chk1040_1100AM->Visible = true;

	chk1100_1120AM->Visible = true;
	chk1120_1140AM->Visible = true;
	chk1140_1200PM->Visible = true;

	chk100_120PM->Visible = true;
	chk120_140PM->Visible = true;
	chk140_200PM->Visible = true;

	chk200_220PM->Visible = true;
	chk220_240PM->Visible = true;
	chk240_300PM->Visible = true;

	chk300_320PM->Visible = true;
	chk320_340PM->Visible = true;
	chk340_400PM->Visible = true;

	chk400_420PM->Visible = true;
	chk420_440PM->Visible = true;
	chk440_500PM->Visible = true;

	chk500_520PM->Visible = true;
	chk520_540PM->Visible = true;
	chk540_600PM->Visible = true;

	chk600_620PM->Visible = true;
	chk620_640PM->Visible = true;
	chk640_700PM->Visible = true;

	chk700_720PM->Visible = true;
	chk720_740PM->Visible = true;
	chk740_800PM->Visible = true;

	chk800_820PM->Visible = true;
	chk820_840PM->Visible = true;
	chk840_900PM->Visible = true;

	chk900_920PM->Visible = true;
	chk920_940PM->Visible = true;
	chk940_1000PM->Visible = true;

	chk1000_1020PM->Visible = true;
	chk1020_1040PM->Visible = true;
	chk1040_1100PM->Visible = true;

	chk1100_1120PM->Visible = true;
	chk1120_1140PM->Visible = true;
	chk1140_1200AM->Visible = true;

}

private: System::Void btnAdmin_Click(System::Object^  sender, System::EventArgs^  e) {
	grpAdmin->Visible = true;
	grpMode->Visible = false;
	currentlyAdmin = true;
}

private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {
	grpLogin->Visible = false;
	grpMode->Visible = true;
}

private: System::Void rbtn12Hr_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	chk500_520AM->Text = "5:00 AM - 5:20 AM";
	chk520_540AM->Text = "5:20 AM - 5:40 AM";
	chk540_600AM->Text = "5:40 AM - 6:00 AM";

	chk600_620AM->Text = "6:00 AM - 6:20 AM";
	chk620_640AM->Text = "6:20 AM - 6:40 AM";
	chk640_700AM->Text = "6:40 AM - 7:00 AM";

	chk700_720AM->Text = "7:00 AM - 7:20 AM";
	chk720_740AM->Text = "7:20 AM - 7:40 AM";
	chk740_800AM->Text = "7:40 AM - 8:00 AM";

	chk800_820AM->Text = "8:00 AM - 8:20 AM";
	chk820_840AM->Text = "8:20 AM - 8:40 AM";
	chk840_900AM->Text = "8:40 AM - 9:00 AM";

	chk900_920AM->Text = "9:00 AM - 9:20 AM";
	chk920_940AM->Text = "9:20 AM - 9:40 AM";
	chk940_10000AM->Text = "9:40 AM - 10:00 AM";

	chk1000_1020AM->Text = "10:00 AM - 10:20 AM";
	chk1020_1040AM->Text = "10:20 AM - 10:40 AM";
	chk1040_1100AM->Text = "10:40 AM - 11:00 AM";

	chk1100_1120AM->Text = "11:00 AM - 11:20 AM";
	chk1120_1140AM->Text = "11:20 AM - 11:40 AM";
	chk1140_1200PM->Text = "11:40 AM - 12:00 PM";

	chk100_120PM->Text = "1:00 PM - 1:20 PM";
	chk120_140PM->Text = "1:20 PM - 1:40 PM";
	chk140_200PM->Text = "1:40 PM - 2:00 PM";

	chk200_220PM->Text = "2:00 PM - 2:20 PM";
	chk220_240PM->Text = "2:20 PM - 2:40 PM";
	chk240_300PM->Text = "2:40 PM - 3:00 PM";

	chk300_320PM->Text = "3:00 PM - 3:20 PM";
	chk320_340PM->Text = "3:20 PM - 3:40 PM";
	chk340_400PM->Text = "3:40 PM - 4:00 PM";

	chk400_420PM->Text = "4:00 PM - 4:20 PM";
	chk420_440PM->Text = "4:20 PM - 4:40 PM";
	chk440_500PM->Text = "4:40 PM - 5:00 PM";

	chk500_520PM->Text = "5:00 PM - 5:20 PM";
	chk520_540PM->Text = "5:20 PM - 5:40 PM";
	chk540_600PM->Text = "5:40 PM - 6:00 PM";

	chk600_620PM->Text = "6:00 PM - 6:20 PM";
	chk620_640PM->Text = "6:20 PM - 6:40 PM";
	chk640_700PM->Text = "6:40 PM - 7:00 PM";

	chk700_720PM->Text = "7:00 PM - 7:20 PM";
	chk720_740PM->Text = "7:20 PM - 7:40 PM";
	chk740_800PM->Text = "7:40 PM - 8:00 PM";

	chk800_820PM->Text = "8:00 PM - 8:20 PM";
	chk820_840PM->Text = "8:20 PM - 8:40 PM";
	chk840_900PM->Text = "8:40 PM - 9:00 PM";

	chk900_920PM->Text = "9:00 PM - 9:20 PM";
	chk920_940PM->Text = "9:20 PM - 9:40 PM";
	chk940_1000PM->Text = "9:40 PM - 10:00 PM";

	chk1000_1020PM->Text = "10:00 PM - 10:20 PM";
	chk1020_1040PM->Text = "10:20 PM - 10:40 PM";
	chk1040_1100PM->Text = "10:40 PM - 11:00 PM";

	chk1100_1120PM->Text = "11:00 PM - 11:20 PM";
	chk1120_1140PM->Text = "11:20 PM - 11:40 PM";
	chk1140_1200AM->Text = "11:40 PM - 12:00 AM";

	if (rbtn5_6AM->Checked)
	{
		rbtn05_06->Checked = true;
	}
	else if (rbtn6_7AM->Checked)
	{
		rbtn06_07->Checked = true;
	}
	else if (rbtn7_8AM->Checked)
	{
		rbtn07_08->Checked = true;
	}
	else if (rbtn8_9AM->Checked)
	{
		rbtn08_09->Checked = true;
	}
	else if (rbtn9_10AM->Checked)
	{
		rbtn09_10->Checked = true;
	}
	else if (rbtn10_11AM->Checked)
	{
		rbtn10_11->Checked = true;
	}
	else if (rbtn11_12PM->Checked)
	{
		rbtn11_12->Checked = true;
	}
	else if (rbtn1_2PM->Checked)
	{
		rbtn13_14->Checked = true;
	}
	else if (rbtn2_3PM->Checked)
	{
		rbtn14_15->Checked = true;
	}
	else if (rbtn3_4PM->Checked)
	{
		rbtn15_16->Checked = true;
	}
	else if (rbtn4_5PM->Checked)
	{
		rbtn16_17->Checked = true;
	}
	else if (rbtn5_6PM->Checked)
	{
		rbtn17_18->Checked = true;
	}
	else if (rbtn6_7PM->Checked)
	{
		rbtn18_19->Checked = true;
	}
	else if (rbtn7_8PM->Checked)
	{
		rbtn19_20->Checked = true;
	}
	else if (rbtn8_9PM->Checked)
	{
		rbtn20_21->Checked = true;
	}
	else if (rbtn9_10PM->Checked)
	{
		rbtn21_22->Checked = true;
	}
	else if (rbtn10_11PM->Checked)
	{
		rbtn22_23->Checked = true;
	}
	else if (rbtn11_12AM->Checked)
	{
		rbtn23_00->Checked = true;
	}

	pnl12Hr->BringToFront();
	pnl24Hr->SendToBack();
}
private: System::Void rbtn24Hr_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	chk500_520AM->Text = "05:00 - 05:20";
	chk520_540AM->Text = "05:20 - 05:40";
	chk540_600AM->Text = "05:40 - 06:00";

	chk600_620AM->Text = "06:00 - 06:20";
	chk620_640AM->Text = "06:20 - 06:40";
	chk640_700AM->Text = "06:40 - 07:00";

	chk700_720AM->Text = "07:00 - 07:20";
	chk720_740AM->Text = "07:20 - 07:40";
	chk740_800AM->Text = "07:40 - 08:00";

	chk800_820AM->Text = "08:00 - 08:20";
	chk820_840AM->Text = "08:20 - 08:40";
	chk840_900AM->Text = "08:40 - 09:00";

	chk900_920AM->Text = "09:00 - 09:20";
	chk920_940AM->Text = "09:20 - 09:40";
	chk940_10000AM->Text = "09:40 - 10:00";

	chk1000_1020AM->Text = "10:00 - 10:20";
	chk1020_1040AM->Text = "10:20 - 10:40";
	chk1040_1100AM->Text = "10:40 - 11:00";

	chk1100_1120AM->Text = "11:00 - 11:20";
	chk1120_1140AM->Text = "11:20 - 11:40";
	chk1140_1200PM->Text = "11:40 - 12:00";

	chk100_120PM->Text = "13:00 - 13:20";
	chk120_140PM->Text = "13:20 - 13:40";
	chk140_200PM->Text = "13:40 - 14:00";

	chk200_220PM->Text = "14:00 - 14:20";
	chk220_240PM->Text = "14:20 - 14:40";
	chk240_300PM->Text = "14:40 - 15:00";

	chk300_320PM->Text = "15:00 - 15:20";
	chk320_340PM->Text = "15:20 - 15:40";
	chk340_400PM->Text = "15:40 - 16:00";

	chk400_420PM->Text = "16:00 - 16:20";
	chk420_440PM->Text = "16:20 - 16:40";
	chk440_500PM->Text = "16:40 - 17:00";

	chk500_520PM->Text = "17:00 - 17:20";
	chk520_540PM->Text = "17:20 - 17:40";
	chk540_600PM->Text = "17:40 - 18:00";

	chk600_620PM->Text = "18:00 - 18:20";
	chk620_640PM->Text = "18:20 - 18:40";
	chk640_700PM->Text = "18:40 - 19:00";

	chk700_720PM->Text = "19:00 - 19:20";
	chk720_740PM->Text = "19:20 - 19:40";
	chk740_800PM->Text = "19:40 - 20:00";

	chk800_820PM->Text = "20:00 - 20:20";
	chk820_840PM->Text = "20:20 - 20:40";
	chk840_900PM->Text = "20:40 - 21:00";

	chk900_920PM->Text = "21:00 - 21:20";
	chk920_940PM->Text = "21:20 - 21:40";
	chk940_1000PM->Text = "21:40 - 22:00";

	chk1000_1020PM->Text = "22:00 - 22:20";
	chk1020_1040PM->Text = "22:20 - 22:40";
	chk1040_1100PM->Text = "22:40 - 23:00";

	chk1100_1120PM->Text = "23:00 - 23:20";
	chk1120_1140PM->Text = "23:20 - 23:40";
	chk1140_1200AM->Text = "23:40 - 00:00";

	if (rbtn05_06->Checked)
	{
		rbtn5_6AM->Checked = true;
	}
	else if (rbtn06_07->Checked)
	{
		rbtn6_7AM->Checked = true;
	}
	else if (rbtn07_08->Checked)
	{
		rbtn7_8AM->Checked = true;
	}
	else if (rbtn08_09->Checked)
	{
		rbtn8_9AM->Checked = true;
	}
	else if (rbtn09_10->Checked)
	{
		rbtn9_10AM->Checked = true;
	}
	else if (rbtn10_11->Checked)
	{
		rbtn10_11AM->Checked = true;
	}
	else if (rbtn11_12->Checked)
	{
		rbtn11_12PM->Checked = true;
	}
	else if (rbtn13_14->Checked)
	{
		rbtn1_2PM->Checked = true;
	}
	else if (rbtn14_15->Checked)
	{
		rbtn2_3PM->Checked = true;
	}
	else if (rbtn15_16->Checked)
	{
		rbtn3_4PM->Checked = true;
	}
	else if (rbtn16_17->Checked)
	{
		rbtn4_5PM->Checked = true;
	}
	else if (rbtn17_18->Checked)
	{
		rbtn5_6PM->Checked = true;
	}
	else if (rbtn18_19->Checked)
	{
		rbtn6_7PM->Checked = true;
	}
	else if (rbtn19_20->Checked)
	{
		rbtn7_8PM->Checked = true;
	}
	else if (rbtn20_21->Checked)
	{
		rbtn8_9PM->Checked = true;
	}
	else if (rbtn21_22->Checked)
	{
		rbtn9_10PM->Checked = true;
	}
	else if (rbtn22_23->Checked)
	{
		rbtn10_11PM->Checked = true;
	}
	else if (rbtn23_00->Checked)
	{
		rbtn11_12AM->Checked = true;
	}

	pnl24Hr->BringToFront();
	pnl12Hr->SendToBack();	
}



public: System::Void btnSubmitTimes_Click(System::Object^  sender, System::EventArgs^  e) {
	grpAvailability->Visible = false;
	grpMode->Visible = true;

	/*
	* TODO: Add user to event
	*/

	//textBox4->Text = gcnew String(date.c_str());
	//textBox1->Text = gcnew String(name.c_str());

	//String^ eventName = gcnew String(test.c_str());
	
	User u;
	u.setName(msclr::interop::marshal_as<std::string>(txtUser->Text));
//	u.setisAdmin(currentlyAdmin);


	/*
	* TODO: Add user availability
	*/
	/*if (currentlyAdmin)
		exec.AddEvent(exec.currentEvent);

	for (int i = 0; i < exec.getEventSize(); i++) {
		if(exec.currentEvent.getName() == exec.events[i].getName())
			exec.events[i].addUser(u);
	}*/
	//
	//
	//
	
	

	if (chk500_520AM->Checked) 
	{ 
		u.AddTime(0); 
	}
	if(chk520_540AM->Checked){ u.AddTime(1); }
	if(chk540_600AM->Checked){ u.AddTime(2); }

	if(chk600_620AM->Checked){ u.AddTime(3); }
	if(chk620_640AM->Checked){ u.AddTime(4); }
	if(chk640_700AM->Checked){ u.AddTime(5); }

	if(chk700_720AM->Checked){ u.AddTime(6); }
	if(chk720_740AM->Checked){ u.AddTime(7); }
	if(chk740_800AM->Checked){ u.AddTime(8); }

	if(chk800_820AM->Checked){ u.AddTime(9); }
	if(chk820_840AM->Checked){ u.AddTime(10); }
	if(chk840_900AM->Checked){ u.AddTime(11); }

	if(chk900_920AM->Checked){ u.AddTime(12); }
	if(chk920_940AM->Checked){ u.AddTime(13); }
	if(chk940_10000AM->Checked){ u.AddTime(14); }

	if(chk1000_1020AM->Checked){ u.AddTime(15); }
	if(chk1020_1040AM->Checked){ u.AddTime(16); }
	if(chk1040_1100AM->Checked){ u.AddTime(17); }

	if(chk1100_1120AM->Checked){ u.AddTime(18); }
	if(chk1120_1140AM->Checked){ u.AddTime(19); }
	if(chk1140_1200PM->Checked){ u.AddTime(20); }

	if(chk100_120PM->Checked){ u.AddTime(21); }
	if(chk120_140PM->Checked){ u.AddTime(22); }
	if(chk140_200PM->Checked){ u.AddTime(23); }

	if(chk200_220PM->Checked){ u.AddTime(24); }
	if(chk220_240PM->Checked){ u.AddTime(25); }
	if(chk240_300PM->Checked){ u.AddTime(26); }

	if(chk300_320PM->Checked){ u.AddTime(27); }
	if(chk320_340PM->Checked){ u.AddTime(28); }
	if(chk340_400PM->Checked){ u.AddTime(29); }

	if(chk400_420PM->Checked){ u.AddTime(30); }
	if(chk420_440PM->Checked){ u.AddTime(31); }
	if(chk440_500PM->Checked){ u.AddTime(32); }

	if(chk500_520PM->Checked){ u.AddTime(33); }
	if(chk520_540PM->Checked){ u.AddTime(34); }
	if(chk540_600PM->Checked){ u.AddTime(35); }

	if(chk600_620PM->Checked){ u.AddTime(36); }
	if(chk620_640PM->Checked){ u.AddTime(37); }
	if(chk640_700PM->Checked){ u.AddTime(38); }

	if(chk700_720PM->Checked){ u.AddTime(39); }
	if(chk720_740PM->Checked){ u.AddTime(40); }
	if(chk740_800PM->Checked){ u.AddTime(41); }

	if(chk800_820PM->Checked){ u.AddTime(42); }
	if(chk820_840PM->Checked){ u.AddTime(43); }
	if(chk840_900PM->Checked){ u.AddTime(44); }

	if(chk900_920PM->Checked){ u.AddTime(45); }
	if(chk920_940PM->Checked){ u.AddTime(46); }
	if(chk940_1000PM->Checked){ u.AddTime(47); }

	if(chk1000_1020PM->Checked){ u.AddTime(48); }
	if(chk1020_1040PM->Checked){ u.AddTime(49); }
	if(chk1040_1100PM->Checked){ u.AddTime(50); }

	if(chk1100_1120PM->Checked){ u.AddTime(51); }
	if(chk1120_1140PM->Checked){ u.AddTime(52); }
	if(chk1140_1200AM->Checked){ u.AddTime(53); }

	//int newestEvent = exec.getEventSize()-1;

	std::string* eventList = exec.getAllEvents();
	System::String^ tempString = textBox1->Text;//lstYourEvents->SelectedItem->ToString();
	std::string eventName = msclr::interop::marshal_as<std::string>(tempString);
	//search eventlist for eventname
	int index = 0;
	bool run = true;
	while (run)
	{
		for (int i = 0; i < exec.events.size(); i++)
		{
			if (eventName == eventList[i])
			{
				index = i;
			}
			//break;
			run = false;
		}
	}
	exec.events[index].addUser(u);
	//
	//
	//
	chk500_520AM->Checked = false;
	chk520_540AM->Checked = false;
	chk540_600AM->Checked = false;

	chk600_620AM->Checked = false;
	chk620_640AM->Checked = false;
	chk640_700AM->Checked = false;

	chk700_720AM->Checked = false;
	chk720_740AM->Checked = false;
	chk740_800AM->Checked = false;

	chk800_820AM->Checked = false;
	chk820_840AM->Checked = false;
	chk840_900AM->Checked = false;

	chk900_920AM->Checked = false;
	chk920_940AM->Checked = false;
	chk940_10000AM->Checked = false;

	chk1000_1020AM->Checked = false;
	chk1020_1040AM->Checked = false;
	chk1040_1100AM->Checked = false;

	chk1100_1120AM->Checked = false;
	chk1120_1140AM->Checked = false;
	chk1140_1200PM->Checked = false;

	chk100_120PM->Checked = false;
	chk120_140PM->Checked = false;
	chk140_200PM->Checked = false;

	chk200_220PM->Checked = false;
	chk220_240PM->Checked = false;
	chk240_300PM->Checked = false;

	chk300_320PM->Checked = false;
	chk320_340PM->Checked = false;
	chk340_400PM->Checked = false;

	chk400_420PM->Checked = false;
	chk420_440PM->Checked = false;
	chk440_500PM->Checked = false;

	chk500_520PM->Checked = false;
	chk520_540PM->Checked = false;
	chk540_600PM->Checked = false;

	chk600_620PM->Checked = false;
	chk620_640PM->Checked = false;
	chk640_700PM->Checked = false;

	chk700_720PM->Checked = false;
	chk720_740PM->Checked = false;
	chk740_800PM->Checked = false;

	chk800_820PM->Checked = false;
	chk820_840PM->Checked = false;
	chk840_900PM->Checked = false;

	chk900_920PM->Checked = false;
	chk920_940PM->Checked = false;
	chk940_1000PM->Checked = false;

	chk1000_1020PM->Checked = false;
	chk1020_1040PM->Checked = false;
	chk1040_1100PM->Checked = false;

	chk1100_1120PM->Checked = false;
	chk1120_1140PM->Checked = false;
	chk1140_1200AM->Checked = false;
	
}

private: System::Void chk500_520AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk520_540AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk540_600AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk600_620AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk620_640AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk640_700AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk700_720AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk720_740AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk740_800AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk800_820AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk820_840AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk840_900AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk900_920AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk920_940AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk940_10000AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk1000_1020AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk1020_1040AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk1040_1100AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk1100_1120AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk1120_1140AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk1140_1200PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk100_120PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rbtn5_6AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = true;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;

}
private: System::Void rbtn6_7AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = true;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;

}
private: System::Void rbtn7_8AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = true;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;

}
private: System::Void rbtn8_9AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = true;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn9_10AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = true;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn10_11AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = true;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn11_12PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = true;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn1_2PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = true;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn2_3PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = true;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn3_4PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = true;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn4_5PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = true;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn5_6PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = true;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn6_7PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = true;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn7_8PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = true;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn8_9PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = true;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn9_10PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = true;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn10_11PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = true;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn11_12AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = true;
}

private: System::Void rbtn05_06_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = true;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;

}
private: System::Void rbtn06_07_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = true;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;

}
private: System::Void rbtn07_08_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = true;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;

}
private: System::Void rbtn08_09_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = true;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;

}
private: System::Void rbtn09_10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = true;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn10_11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = true;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn11_12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = true;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn13_14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = true;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn14_15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = true;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn15_16_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = true;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn16_17_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = true;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn17_18_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = true;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn18_19_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = true;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn19_20_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = true;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn20_21_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = true;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn21_22_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = true;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn22_23_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = true;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn23_00_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = true;
}
private: System::Void btnEditEvents_Click(System::Object^  sender, System::EventArgs^  e) {
	grpViewYourEvents->Visible = true;
	/*
	* TODO: search list of events for those with admin = name in txtUser?
	*/

	std::string name = msclr::interop::marshal_as<std::string>(txtUser->Text);

	//exec.checkAval

	//Get vector of event names
	//add each event to listbox

	textBox6->Text = exec.events.size().ToString();
	std::vector<std::string> temp = exec.checkAval(name);

	textBox5->Text = temp.size().ToString();
	for (int i = 0; i < temp.size(); i++)
	{
		lstYourEvents->Items->Add(gcnew String(temp[i].c_str()));
	}


	/*

	lstYourEvents->Items->Clear();
	for (int i = 0; i < exec.getEventSize(); i++) {
		textBox5->Text = gcnew String(exec.events[i].getAdmin().c_str());
		if(exec.events[i].getAdmin() == msclr::interop::marshal_as<std::string>(txtUser->Text))
			lstYourEvents->Items->Add(gcnew String(exec.events[i].getName().c_str()));
	}*/
	//TODO: replace with ADMINS event names
	grpAdmin->Visible = false;
	btnViewEventsBack->Visible = true;
	btnUserBack->Visible = false;
	btnAttendees->Visible = true;
}
private: System::Void btnViewEvent_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ eventName = "";

	//TODO Convert all incoming std::string to System::string

	//std::string test = "test";
	//String^ eventName = gcnew String(test.c_str());


	if (lstYourEvents->SelectedItems->Count > 0)
	{
		eventName = lstYourEvents->SelectedItem->ToString();
		textBox5->Text = eventName;
		textBox1->Text = eventName;
		Event myEvent;
		int index = lstYourEvents->SelectedIndex;
		for (int i = 0; i < exec.getEventSize(); i++) {
			if (gcnew String(exec.events[i].getName().c_str()) == eventName) {
				myEvent = exec.events[i];
				break;
			}
		}
		/*
		* TODO: Use eventName to search for a specific even. isFound = true if event is found
		* Event information and option to modify availability will be displayed on the next page
		*/
		lblEventName->Text = gcnew String(myEvent.getName().c_str());
<<<<<<< HEAD
<<<<<<< HEAD
		std::string date = std::to_string(myEvent.getStartDay().getMonth()) + "/" + std::to_string(myEvent.getStartDay().getDay()) + "/" + std::to_string(myEvent.getStartDay().getYear());
		lblEventDate->Text = gcnew String(date.c_str());
=======
		lblEventDate->Text = gcnew String(myEvent.getDate().c_str());
>>>>>>> parent of c8f42a8... Tried fixing myForm.h
=======
		lblEventDate->Text = gcnew String(myEvent.getDate().c_str());
>>>>>>> parent of c8f42a8... Tried fixing myForm.h
		grpViewYourEvents->Visible = false;
		grpEventInfo->Visible = true;
		lstYourEvents->Items->Clear();

	}
	else
	{
		MessageBox::Show("Please select an event","Error");
	}
}
private: System::Void btnEditAvailability_Click(System::Object^  sender, System::EventArgs^  e) {
	grpEventInfo->Visible = false;
	grpAvailability->Visible = true;
	label2->Text = "Select Available Times:";

	lbl500_520AMQuantity->Visible = false;
	lbl520_540AMQuantity->Visible = false;
	lbl540_600AMQuantity->Visible = false;

	lbl600_620AMQuantity->Visible = false;
	lbl620_640AMQuantity->Visible = false;
	lbl640_700AMQuantity->Visible = false;

	lbl700_720AMQuantity->Visible = false;
	lbl720_740AMQuantity->Visible = false;
	lbl740_800AMQuantity->Visible = false;

	lbl800_820AMQuantity->Visible = false;
	lbl820_840AMQuantity->Visible = false;
	lbl840_900AMQuantity->Visible = false;

	lbl900_920AMQuantity->Visible = false;
	lbl920_940AMQuantity->Visible = false;
	lbl940_1000AM7Quantity->Visible = false;

	lbl1000_1020AMQuantity->Visible = false;
	lbl1020_1040AMQuantity->Visible = false;
	lbl1040_1100AMQuantity->Visible = false;

	lbl1100_1120AMQuantity->Visible = false;
	lbl1120_1140AMQuantity->Visible = false;
	lbl1140_1200PMQuantity->Visible = false;

	lbl100_120PMQuantity->Visible = false;
	lbl120_140PMQuantity->Visible = false;
	lbl140_200PMQuantity->Visible = false;

	lbl200_220PMQuantity->Visible = false;
	lbl220_240PMQuantity->Visible = false;
	lbl240_300PMQuantity->Visible = false;

	lbl300_320PMQuantity->Visible = false;
	lbl320_340PMQuantity->Visible = false;
	lbl340_400PMQuantity->Visible = false;

	lbl400_420PMQuantity->Visible = false;
	lbl420_440PMQuantity->Visible = false;
	lbl440_500PMQuantity->Visible = false;

	lbl500_520PMQuantity->Visible = false;
	lbl520_540PMQuantity->Visible = false;
	lbl540_600PMQuantity->Visible = false;

	lbl600_620PMQuantity->Visible = false;
	lbl620_640PMQuantity->Visible = false;
	lbl640_700PMQuantity->Visible = false;

	lbl700_720PMQuantity->Visible = false;
	lbl720_740PMQuantity->Visible = false;
	lbl740_800PMQuantity->Visible = false;

	lbl800_820PMQuantity->Visible = false;
	lbl820_840PMQuantity->Visible = false;
	lbl840_900PMQuantity->Visible = false;

	lbl900_920PMQuantity->Visible = false;
	lbl920_940PMQuantity->Visible = false;
	lbl940_1000PMQuantity->Visible = false;

	lbl1000_1020PMQuantity->Visible = false;
	lbl1020_1040PMQuantity->Visible = false;
	lbl1040_1100PMQuantity->Visible = false;

	lbl1100_1120PMQuantity->Visible = false;
	lbl1120_1140PMQuantity->Visible = false;
	lbl1140_1200AMQuantity->Visible = false;


	///
	///
	///
	chk500_520AM->Visible = true;
	chk520_540AM->Visible = true;
	chk540_600AM->Visible = true;

	chk600_620AM->Visible = true;
	chk620_640AM->Visible = true;
	chk640_700AM->Visible = true;

	chk700_720AM->Visible = true;
	chk720_740AM->Visible = true;
	chk740_800AM->Visible = true;

	chk800_820AM->Visible = true;
	chk820_840AM->Visible = true;
	chk840_900AM->Visible = true;

	chk900_920AM->Visible = true;
	chk920_940AM->Visible = true;
	chk940_10000AM->Visible = true;

	chk1000_1020AM->Visible = true;
	chk1020_1040AM->Visible = true;
	chk1040_1100AM->Visible = true;

	chk1100_1120AM->Visible = true;
	chk1120_1140AM->Visible = true;
	chk1140_1200PM->Visible = true;

	chk100_120PM->Visible = true;
	chk120_140PM->Visible = true;
	chk140_200PM->Visible = true;

	chk200_220PM->Visible = true;
	chk220_240PM->Visible = true;
	chk240_300PM->Visible = true;

	chk300_320PM->Visible = true;
	chk320_340PM->Visible = true;
	chk340_400PM->Visible = true;

	chk400_420PM->Visible = true;
	chk420_440PM->Visible = true;
	chk440_500PM->Visible = true;

	chk500_520PM->Visible = true;
	chk520_540PM->Visible = true;
	chk540_600PM->Visible = true;

	chk600_620PM->Visible = true;
	chk620_640PM->Visible = true;
	chk640_700PM->Visible = true;

	chk700_720PM->Visible = true;
	chk720_740PM->Visible = true;
	chk740_800PM->Visible = true;

	chk800_820PM->Visible = true;
	chk820_840PM->Visible = true;
	chk840_900PM->Visible = true;

	chk900_920PM->Visible = true;
	chk920_940PM->Visible = true;
	chk940_1000PM->Visible = true;

	chk1000_1020PM->Visible = true;
	chk1020_1040PM->Visible = true;
	chk1040_1100PM->Visible = true;

	chk1100_1120PM->Visible = true;
	chk1120_1140PM->Visible = true;
	chk1140_1200AM->Visible = true;
}
private: System::Void btnUser_Click(System::Object^  sender, System::EventArgs^  e) {
	grpMode->Visible = false;
	grpViewYourEvents->Visible = true;
	btnViewEventsBack->Visible = false;
	btnUserBack->Visible = true;
	std::string* allEvents = exec.getAllEvents();
	for (int i = 0; i < exec.getEventSize(); i++) {
		lstYourEvents->Items->Add(gcnew String(allEvents[i].c_str()));
	}
	currentlyAdmin = false;
	
	/*
	* TODO: Add all events to listbox
	*/
}
private: System::Void btnEventInfoBack_Click(System::Object^  sender, System::EventArgs^  e) {
	grpEventInfo->Visible = false;
	grpViewYourEvents->Visible = true;
}
private: System::Void btnModeBack_Click(System::Object^  sender, System::EventArgs^  e) {
	grpMode->Visible = false;
	grpLogin->Visible = true;

	//lstYourEvents->ClearSelected(); TODO: clear listbox on logout?
	txtUser->Clear();
}
private: System::Void btnAdminBack_Click(System::Object^  sender, System::EventArgs^  e) {
	grpAdmin->Visible = false;
	grpMode->Visible = true;
}
private: System::Void btnViewEventsBack_Click(System::Object^  sender, System::EventArgs^  e) {
	grpViewYourEvents->Visible = false;
	grpAdmin->Visible = true;
	lstYourEvents->Items->Clear();
}
private: System::Void btnUserBack_Click(System::Object^  sender, System::EventArgs^  e) {
	grpViewYourEvents->Visible = false;
	grpMode->Visible = true;
	lstYourEvents->Items->Clear();
}
private: System::Void btnCreateEventBack_Click(System::Object^  sender, System::EventArgs^  e) {
	grpCreateEvent->Visible = false;
	grpAdmin->Visible = true;
	lstYourEvents->Items->Clear();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lblEventName_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lblEventDate_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lblEventLocation_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void btnAttendees_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string name = (msclr::interop::marshal_as<std::string>(txtUser->Text));
	label2->Text = "Times and Attendees:";

	System::String^ eventName = lblEventName->Text;
	Event myEvent;
	for (int i = 0; i < exec.getEventSize(); i++) {
		if (gcnew String(exec.events[i].getName().c_str()) == eventName) {
			myEvent = exec.events[i];
			break;
		}
	}

	 //Event[].getNumOfUs();
	
	grpEventInfo->Visible = false;
	grpAvailability->Visible = true;

	lbl500_520AMQuantity->Visible = true;
	lbl520_540AMQuantity->Visible = true;
	lbl540_600AMQuantity->Visible = true;

	lbl600_620AMQuantity->Visible = true;
	lbl620_640AMQuantity->Visible = true;
	lbl640_700AMQuantity->Visible = true;

	lbl700_720AMQuantity->Visible = true;
	lbl720_740AMQuantity->Visible = true;
	lbl740_800AMQuantity->Visible = true;

	lbl800_820AMQuantity->Visible = true;
	lbl820_840AMQuantity->Visible = true;
	lbl840_900AMQuantity->Visible = true;

	lbl900_920AMQuantity->Visible = true;
	lbl920_940AMQuantity->Visible = true;
	lbl940_1000AM7Quantity->Visible = true;

	lbl1000_1020AMQuantity->Visible = true;
	lbl1020_1040AMQuantity->Visible = true;
	lbl1040_1100AMQuantity->Visible = true;

	lbl1100_1120AMQuantity->Visible = true;
	lbl1120_1140AMQuantity->Visible = true;
	lbl1140_1200PMQuantity->Visible = true;

	lbl100_120PMQuantity->Visible = true;
	lbl120_140PMQuantity->Visible = true;
	lbl140_200PMQuantity->Visible = true;

	lbl200_220PMQuantity->Visible = true;
	lbl220_240PMQuantity->Visible = true;
	lbl240_300PMQuantity->Visible = true;

	lbl300_320PMQuantity->Visible = true;
	lbl320_340PMQuantity->Visible = true;
	lbl340_400PMQuantity->Visible = true;

	lbl400_420PMQuantity->Visible = true;
	lbl420_440PMQuantity->Visible = true;
	lbl440_500PMQuantity->Visible = true;

	lbl500_520PMQuantity->Visible = true;
	lbl520_540PMQuantity->Visible = true;
	lbl540_600PMQuantity->Visible = true;

	lbl600_620PMQuantity->Visible = true;
	lbl620_640PMQuantity->Visible = true;
	lbl640_700PMQuantity->Visible = true;

	lbl700_720PMQuantity->Visible = true;
	lbl720_740PMQuantity->Visible = true;
	lbl740_800PMQuantity->Visible = true;

	lbl800_820PMQuantity->Visible = true;
	lbl820_840PMQuantity->Visible = true;
	lbl840_900PMQuantity->Visible = true;

	lbl900_920PMQuantity->Visible = true;
	lbl920_940PMQuantity->Visible = true;
	lbl940_1000PMQuantity->Visible = true;

	lbl1000_1020PMQuantity->Visible = true;
	lbl1020_1040PMQuantity->Visible = true;
	lbl1040_1100PMQuantity->Visible = true;

	lbl1100_1120PMQuantity->Visible = true;
	lbl1120_1140PMQuantity->Visible = true;
	lbl1140_1200AMQuantity->Visible = true;


	///
	///
	///
	chk500_520AM->Visible = false;
	chk520_540AM->Visible = false;
	chk540_600AM->Visible = false;
	
	chk600_620AM->Visible = false;
	chk620_640AM->Visible = false;
	chk640_700AM->Visible = false;
	
	chk700_720AM->Visible = false;
	chk720_740AM->Visible = false;
	chk740_800AM->Visible = false;

	chk800_820AM->Visible = false;
	chk820_840AM->Visible = false;
	chk840_900AM->Visible = false;

	chk900_920AM->Visible = false;
	chk920_940AM->Visible = false;
	chk940_10000AM->Visible = false;

	chk1000_1020AM->Visible = false;
	chk1020_1040AM->Visible = false;
	chk1040_1100AM->Visible = false;

	chk1100_1120AM->Visible = false;
	chk1120_1140AM->Visible = false;
	chk1140_1200PM->Visible = false;

	chk100_120PM->Visible = false;
	chk120_140PM->Visible = false;
	chk140_200PM->Visible = false;

	chk200_220PM->Visible = false;
	chk220_240PM->Visible = false;
	chk240_300PM->Visible = false;

	chk300_320PM->Visible = false;
	chk320_340PM->Visible = false;
	chk340_400PM->Visible = false;

	chk400_420PM->Visible = false;
	chk420_440PM->Visible = false;
	chk440_500PM->Visible = false;

	chk500_520PM->Visible = false;
	chk520_540PM->Visible = false;
	chk540_600PM->Visible = false;

	chk600_620PM->Visible = false;
	chk620_640PM->Visible = false;
	chk640_700PM->Visible = false;

	chk700_720PM->Visible = false;
	chk720_740PM->Visible = false;
	chk740_800PM->Visible = false;

	chk800_820PM->Visible = false;
	chk820_840PM->Visible = false;
	chk840_900PM->Visible = false;

	chk900_920PM->Visible = false;
	chk920_940PM->Visible = false;
	chk940_1000PM->Visible = false;

	chk1000_1020PM->Visible = false;
	chk1020_1040PM->Visible = false;
	chk1040_1100PM->Visible = false;

	chk1100_1120PM->Visible = false;
	chk1120_1140PM->Visible = false;
	chk1140_1200AM->Visible = false;

	std::string time = "5:00 AM - 5:20 AM:";
	//exec.checkAval();
	//count # of people
	myEvent.getNumOfUs(0);
	//std::string attendees = time + #ofPeople.ToString();

	lbl500_520AMQuantity->Text = "5:00 AM - 5:20 AM:  " + myEvent.getNumOfUs(0).ToString();
	lbl520_540AMQuantity->Text = "5:20 AM - 5:40 AM:  " + myEvent.getNumOfUs(1).ToString();
	lbl540_600AMQuantity->Text = "5:40 AM - 6:00 AM:  " + myEvent.getNumOfUs(2).ToString();

	lbl600_620AMQuantity->Text = "6:00 AM - 6:20 AM:  " + myEvent.getNumOfUs(3).ToString();
	lbl620_640AMQuantity->Text = "6:20 AM - 6:40 AM:  " + myEvent.getNumOfUs(4).ToString();
	lbl640_700AMQuantity->Text = "7:40 AM - 7:00 AM:  " + myEvent.getNumOfUs(5).ToString();

	lbl700_720AMQuantity->Text = "7:00 AM - 7:20 AM:  " + myEvent.getNumOfUs(6).ToString();
	lbl720_740AMQuantity->Text = "7:20 AM - 7:40 AM:  " + myEvent.getNumOfUs(7).ToString();
	lbl740_800AMQuantity->Text = "7:40 AM - 8:00 AM:  " + myEvent.getNumOfUs(8).ToString();

	lbl800_820AMQuantity->Text = "8:00 AM - 8:20 AM:  " + myEvent.getNumOfUs(9).ToString();
	lbl820_840AMQuantity->Text = "8:20 AM - 8:40 AM:  " + myEvent.getNumOfUs(10).ToString();
	lbl840_900AMQuantity->Text = "8:40 AM - 9:00 AM:  " + myEvent.getNumOfUs(11).ToString();

	lbl900_920AMQuantity->Text = "9:00 AM - 9:20 AM:  " + myEvent.getNumOfUs(12).ToString();
	lbl920_940AMQuantity->Text = "9:20 AM - 9:40 AM:  " + myEvent.getNumOfUs(13).ToString();
	lbl940_1000AM7Quantity->Text = "9:40 AM - 10:00 AM:  " + myEvent.getNumOfUs(14).ToString();

	lbl1000_1020AMQuantity->Text = "10:00 AM - 10:20 AM:  " + myEvent.getNumOfUs(15).ToString();
	lbl1020_1040AMQuantity->Text = "10:20 AM - 10:40 AM:  " + myEvent.getNumOfUs(16).ToString();
	lbl1040_1100AMQuantity->Text = "10:40 AM - 11:00 AM:  " + myEvent.getNumOfUs(17).ToString();

	lbl1100_1120AMQuantity->Text = "11:00 AM - 11:20 AM:  " + myEvent.getNumOfUs(18).ToString();
	lbl1120_1140AMQuantity->Text = "11:20 AM - 11:40 AM:  " + myEvent.getNumOfUs(19).ToString();
	lbl1140_1200PMQuantity->Text = "11:40 AM - 12:00 PM:  " + myEvent.getNumOfUs(20).ToString();

	lbl100_120PMQuantity->Text = "1:00 PM - 1:20 PM:  " + myEvent.getNumOfUs(21).ToString();
	lbl120_140PMQuantity->Text = "1:20 PM - 1:40 PM:  " + myEvent.getNumOfUs(22).ToString();
	lbl140_200PMQuantity->Text = "1:40 PM - 2:00 PM:  " + myEvent.getNumOfUs(23).ToString();

	lbl200_220PMQuantity->Text = "2:00 PM - 2:20 PM:  " + myEvent.getNumOfUs(24).ToString();
	lbl220_240PMQuantity->Text = "2:20 PM - 2:40 PM:  " + myEvent.getNumOfUs(25).ToString();
	lbl240_300PMQuantity->Text = "2:40 PM - 3:00 PM:  " + myEvent.getNumOfUs(26).ToString();

	lbl300_320PMQuantity->Text = "3:00 PM - 3:20 PM:  " + myEvent.getNumOfUs(27).ToString();
	lbl320_340PMQuantity->Text = "3:20 PM - 3:40 PM:  " + myEvent.getNumOfUs(28).ToString();
	lbl340_400PMQuantity->Text = "3:40 PM - 4:00 PM:  " + myEvent.getNumOfUs(29).ToString();

	lbl400_420PMQuantity->Text = "4:00 PM - 4:20 PM:  " + myEvent.getNumOfUs(30).ToString();
	lbl420_440PMQuantity->Text = "4:20 PM - 4:40 PM:  " + myEvent.getNumOfUs(31).ToString();
	lbl440_500PMQuantity->Text = "4:40 PM - 5:00 PM:  " + myEvent.getNumOfUs(32).ToString();

	lbl500_520PMQuantity->Text = "5:00 PM - 5:20 PM:  " + myEvent.getNumOfUs(33).ToString();
	lbl520_540PMQuantity->Text = "5:20 PM - 5:40 PM:  " + myEvent.getNumOfUs(34).ToString();
	lbl540_600PMQuantity->Text = "5:40 PM - 6:00 PM:  " + myEvent.getNumOfUs(35).ToString();

	lbl600_620PMQuantity->Text = "6:00 PM - 6:20 PM:  " + myEvent.getNumOfUs(36).ToString();
	lbl620_640PMQuantity->Text = "6:20 PM - 6:40 PM:  " + myEvent.getNumOfUs(37).ToString();
	lbl640_700PMQuantity->Text = "6:40 PM - 7:00 PM:  " + myEvent.getNumOfUs(38).ToString();

	lbl700_720PMQuantity->Text = "7:00 PM - 7:20 PM:  " + myEvent.getNumOfUs(39).ToString();
	lbl720_740PMQuantity->Text = "7:20 PM - 7:40 PM:  " + myEvent.getNumOfUs(40).ToString();
	lbl740_800PMQuantity->Text = "7:40 PM - 8:00 PM:  " + myEvent.getNumOfUs(41).ToString();
	
	lbl800_820PMQuantity->Text = "8:00 PM - 8:20 PM:  " + myEvent.getNumOfUs(42).ToString();
	lbl820_840PMQuantity->Text = "8:20 PM - 8:40 PM:  " + myEvent.getNumOfUs(43).ToString();
	lbl840_900PMQuantity->Text = "8:40 PM - 9:00 PM:  " + myEvent.getNumOfUs(44).ToString();

	lbl900_920PMQuantity->Text = "9:00 PM - 9:20 PM:  " + myEvent.getNumOfUs(45).ToString();
	lbl920_940PMQuantity->Text = "9:20 PM - 9:40 PM:  " + myEvent.getNumOfUs(46).ToString();
	lbl940_1000PMQuantity->Text = "9:40 PM - 10:00 PM:  " + myEvent.getNumOfUs(47).ToString();

	lbl1000_1020PMQuantity->Text = "10:00 PM - 10:20 PM:  " + myEvent.getNumOfUs(48).ToString();
	lbl1020_1040PMQuantity->Text = "10:20 PM - 10:40 PM:  " + myEvent.getNumOfUs(49).ToString();
	lbl1040_1100PMQuantity->Text = "10:40 PM - 11:00 PM:  " + myEvent.getNumOfUs(50).ToString();

	lbl1100_1120PMQuantity->Text = "11:00 PM - 11:20 PM:  " + myEvent.getNumOfUs(51).ToString();
	lbl1120_1140PMQuantity->Text = "11:20 PM - 11:40 PM:  " + myEvent.getNumOfUs(52).ToString();
	lbl1140_1200AMQuantity->Text = "11:40 PM - 12:00 AM:  " + myEvent.getNumOfUs(53).ToString();

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	exec.write();
	this->Close();
	//return;
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void grpAvailability_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dateTimePicker3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dateTimePicker2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
