#pragma once
#include <iostream>
#include <string>
#include "Executive.h"
#include "Event.h"
#include "User.h"
#include "Task.h"
#include "Day.h"
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
			this->grpMode->Location = System::Drawing::Point(148, 34);
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
			this->grpAvailability->Location = System::Drawing::Point(208, 111);
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
		//label1->Text = "Dates Selected from :";// +(monthCalendar1->SelectionRange->Start() + " to " + monthCalendar1->SelectionRange->End());

		//To display single selected of date
		//MonthCalendar1.MaxSelectionCount = 1;

		//To display single selected of date use MonthCalendar1.SelectionRange.Start/ MonthCalendarSelectionRange.End
		//label2->Text = "Date Selected :" + monthCalendar1->SelectionRange.Start;

		/*OutputDebugString(label1->Text);
		OutputDebugString("HERE");*/

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
	if (textBox1->Text == "")
	{
		MessageBox::Show("Please enter an event name");
	}
	else
	{
		grpAvailability->Visible = true;
		grpCreateEvent->Visible = false;
		std::string name = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::string date = msclr::interop::marshal_as<std::string>(textBox4->Text);
		
		// Create a temporary event
		Event myEvent;
		myEvent.setName(name);

		// Create a temp admin
		std::string adminName = msclr::interop::marshal_as<std::string>(txtUser->Text);
		User tempUser(adminName);
		myEvent.setAdmin(tempUser);

		textBox6->Text = gcnew String(myEvent.getAdmin().getUserName().c_str());
		exec.AddEvent(myEvent);
	}
	textBox1->Clear();

	

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

	
}
private: System::Void rbtn24Hr_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
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

		User u(msclr::interop::marshal_as<std::string>(txtUser->Text));
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
		exec.events[index].addUser(u.getUserName());
		//
		//
		//
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
		std::string date = to_string(myEvent.getStartDay().getMonth()) + "/" + to_string(myEvent.getStartDay().getDay()) + "/" + to_string(myEvent.getStartDay().getYear());
		lblEventDate->Text = gcnew String(date.c_str());
		grpViewYourEvents->Visible = false;
		grpEventInfo->Visible = true;
		lstYourEvents->Items->Clear();

	}
	else
	{
		MessageBox::Show("Please select an event","Error");
	}

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
private: System::Void btnEditAvailability_Click(System::Object^ sender, System::EventArgs^ e) {
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
