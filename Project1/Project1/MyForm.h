#pragma once
#include <iostream>
#include <string>
#include "Executive.h"
#include "Event.h"
#include "User.h"
#include "Day.h"
#include <time.h>
#include <ctime>
#include <msclr\marshal_cppstd.h>
#include <windows.h>

#using <System.DLL>
#using <System.Drawing.DLL>
#using <System.Windows.Forms.DLL>

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

private: System::Windows::Forms::Button^  button2;





	private: System::Windows::Forms::GroupBox^  grpMultiDay;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  submitMultiDay;
	private: System::Windows::Forms::Button^  cancelMultiDay;
	private: System::Windows::Forms::Button^  btnEditEvents;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnMultiDay;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::GroupBox^  grpTask;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  grpTimes;
private: System::Windows::Forms::Button^  btnSubmitTimes;







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
			this->grpMultiDay = (gcnew System::Windows::Forms::GroupBox());
			this->cancelMultiDay = (gcnew System::Windows::Forms::Button());
			this->submitMultiDay = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar2 = (gcnew System::Windows::Forms::MonthCalendar());
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnMultiDay = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->grpTask = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->grpTimes = (gcnew System::Windows::Forms::GroupBox());
			this->btnEditEvents = (gcnew System::Windows::Forms::Button());
			this->btnSubmitTimes = (gcnew System::Windows::Forms::Button());
			this->grpCreateEvent->SuspendLayout();
			this->grpAdmin->SuspendLayout();
			this->grpLogin->SuspendLayout();
			this->grpMode->SuspendLayout();
			this->grpMultiDay->SuspendLayout();
			this->grpViewYourEvents->SuspendLayout();
			this->grpEventInfo->SuspendLayout();
			this->grpTask->SuspendLayout();
			this->grpTimes->SuspendLayout();
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
			this->grpCreateEvent->Location = System::Drawing::Point(268, 5);
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
			this->textBox4->Location = System::Drawing::Point(94, 422);
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
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateSelected);
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
			this->lblName->Location = System::Drawing::Point(22, 98);
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
			this->btnSubmitEvent->Location = System::Drawing::Point(225, 462);
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
			this->button2->Location = System::Drawing::Point(88, 182);
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
			this->grpMode->Location = System::Drawing::Point(223, 98);
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
			// grpMultiDay
			// 
			this->grpMultiDay->Controls->Add(this->cancelMultiDay);
			this->grpMultiDay->Controls->Add(this->submitMultiDay);
			this->grpMultiDay->Controls->Add(this->label3);
			this->grpMultiDay->Controls->Add(this->monthCalendar2);
			this->grpMultiDay->Location = System::Drawing::Point(292, 5);
			this->grpMultiDay->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->grpMultiDay->Name = L"grpMultiDay";
			this->grpMultiDay->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->grpMultiDay->Size = System::Drawing::Size(486, 610);
			this->grpMultiDay->TabIndex = 41;
			this->grpMultiDay->TabStop = false;
			this->grpMultiDay->Visible = false;
			this->grpMultiDay->Enter += gcnew System::EventHandler(this, &MyForm::grpMultiDay_Enter);
			// 
			// cancelMultiDay
			// 
			this->cancelMultiDay->Location = System::Drawing::Point(277, 518);
			this->cancelMultiDay->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->cancelMultiDay->Name = L"cancelMultiDay";
			this->cancelMultiDay->Size = System::Drawing::Size(94, 40);
			this->cancelMultiDay->TabIndex = 3;
			this->cancelMultiDay->Text = L"Cancel";
			this->cancelMultiDay->UseVisualStyleBackColor = true;
			this->cancelMultiDay->Click += gcnew System::EventHandler(this, &MyForm::cancelMultiDay_Click);
			// 
			// submitMultiDay
			// 
			this->submitMultiDay->Location = System::Drawing::Point(116, 518);
			this->submitMultiDay->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->submitMultiDay->Name = L"submitMultiDay";
			this->submitMultiDay->Size = System::Drawing::Size(101, 40);
			this->submitMultiDay->TabIndex = 2;
			this->submitMultiDay->Text = L"Submit";
			this->submitMultiDay->UseVisualStyleBackColor = true;
			this->submitMultiDay->Click += gcnew System::EventHandler(this, &MyForm::submitMultiDay_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(160, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Select Additional Days";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// monthCalendar2
			// 
			this->monthCalendar2->Location = System::Drawing::Point(96, 170);
			this->monthCalendar2->Margin = System::Windows::Forms::Padding(10, 11, 10, 11);
			this->monthCalendar2->MaxSelectionCount = 21;
			this->monthCalendar2->Name = L"monthCalendar2";
			this->monthCalendar2->TabIndex = 0;
			this->monthCalendar2->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar2_DateChanged);
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
			this->btnEventInfoBack->Location = System::Drawing::Point(76, 222);
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 254);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"End Time";
			// 
			// btnMultiDay
			// 
			this->btnMultiDay->Location = System::Drawing::Point(466, 512);
			this->btnMultiDay->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnMultiDay->Name = L"btnMultiDay";
			this->btnMultiDay->Size = System::Drawing::Size(136, 34);
			this->btnMultiDay->TabIndex = 7;
			this->btnMultiDay->Text = L"Multiple Days";
			this->btnMultiDay->UseVisualStyleBackColor = true;
			this->btnMultiDay->Click += gcnew System::EventHandler(this, &MyForm::btnMultiDay_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(35) {
				L" 5:00 am", L" 5:20 am", L" 5:40 am", L" 6:00 am",
					L" 6:20 am", L" 6:40 am", L" 7:00 am", L" 7:20 am", L" 7:40 am", L" 8:00 am", L" 8:20 am", L" 8:40 am", L" 9:00 am", L" 9:20 am",
					L" 9:40 am", L"10:00 am", L"10:20 am", L"10:40 am", L"11:00 am", L"11:20 am", L"11:40 am", L"12:00 pm", L"1:00 pm", L"1:20 pm",
					L"1:40 pm", L"2:00 pm", L"2:20 pm", L"2:40 pm", L"3:00 pm", L"3:20 pm", L"3:40 pm", L"4:00 pm", L"4:20 pm", L"4:40 pm", L"5:00 pm"
			});
			this->comboBox1->Location = System::Drawing::Point(82, 122);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(251, 28);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndex = 0;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(276, 0);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(148, 26);
			this->textBox6->TabIndex = 40;
			this->textBox6->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(35) {
				L" 5:00 am", L" 5:20 am", L" 5:40 am", L" 6:00 am",
					L" 6:20 am", L" 6:40 am", L" 7:00 am", L" 7:20 am", L" 7:40 am", L" 8:00 am", L" 8:20 am", L" 8:40 am", L" 9:00 am", L" 9:20 am",
					L" 9:40 am", L"10:00 am", L"10:20 am", L"10:40 am", L"11:00 am", L"11:20 am", L"11:40 am", L"12:00 pm", L"1:00 pm", L"1:20 pm",
					L"1:40 pm", L"2:00 pm", L"2:20 pm", L"2:40 pm", L"3:00 pm", L"3:20 pm", L"3:40 pm", L"4:00 pm", L"4:20 pm", L"4:40 pm", L"5:00 pm"
			});
			this->comboBox2->Location = System::Drawing::Point(84, 296);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(251, 28);
			this->comboBox2->TabIndex = 42;
			this->comboBox2->SelectedIndex = 0;
			// 
			// grpTask
			// 
			this->grpTask->Controls->Add(this->button1);
			this->grpTask->Location = System::Drawing::Point(632, 27);
			this->grpTask->Name = L"grpTask";
			this->grpTask->Size = System::Drawing::Size(716, 680);
			this->grpTask->TabIndex = 43;
			this->grpTask->TabStop = false;
			this->grpTask->Text = L"s";
			this->grpTask->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(280, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create Task";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// grpTimes
			// 
			this->grpTimes->Controls->Add(this->grpTask);
			this->grpTimes->Controls->Add(this->comboBox2);
			this->grpTimes->Controls->Add(this->textBox6);
			this->grpTimes->Controls->Add(this->comboBox1);
			this->grpTimes->Controls->Add(this->btnMultiDay);
			this->grpTimes->Controls->Add(this->label2);
			this->grpTimes->Controls->Add(this->label1);
			this->grpTimes->Controls->Add(this->btnSubmitTimes);
			this->grpTimes->Controls->Add(this->label7);
			this->grpTimes->Location = System::Drawing::Point(197, 5);
			this->grpTimes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpTimes->Name = L"grpTimes";
			this->grpTimes->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->grpTimes->Size = System::Drawing::Size(708, 678);
			this->grpTimes->TabIndex = 13;
			this->grpTimes->TabStop = false;
			this->grpTimes->Visible = false;
			this->grpTimes->Enter += gcnew System::EventHandler(this, &MyForm::grpTimes_Enter);
			// 
			// btnEditEvents
			// 
			this->btnEditEvents->Location = System::Drawing::Point(45, 142);
			this->btnEditEvents->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEditEvents->Name = L"btnEditEvents";
			this->btnEditEvents->Size = System::Drawing::Size(154, 35);
			this->btnEditEvents->TabIndex = 3;
			this->btnEditEvents->Text = L"View Your Events";
			this->btnEditEvents->UseVisualStyleBackColor = true;
			this->btnEditEvents->Click += gcnew System::EventHandler(this, &MyForm::btnEditEvents_Click);
			// 
			// btnSubmitTimes
			// 
			this->btnSubmitTimes->Location = System::Drawing::Point(88, 509);
			this->btnSubmitTimes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSubmitTimes->Name = L"btnSubmitTimes";
			this->btnSubmitTimes->Size = System::Drawing::Size(154, 35);
			this->btnSubmitTimes->TabIndex = 0;
			this->btnSubmitTimes->Text = L"Submit";
			this->btnSubmitTimes->UseVisualStyleBackColor = true;
			this->btnSubmitTimes->Click += gcnew System::EventHandler(this, &MyForm::btnSubmitTimes_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(1050, 866);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->grpTimes);
			this->Controls->Add(this->grpCreateEvent);
			this->Controls->Add(this->grpMultiDay);
			this->Controls->Add(this->grpViewYourEvents);
			this->Controls->Add(this->grpAdmin);
			this->Controls->Add(this->grpEventInfo);
			this->Controls->Add(this->grpLogin);
			this->Controls->Add(this->grpMode);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"Doodle Scheduler";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->grpCreateEvent->ResumeLayout(false);
			this->grpCreateEvent->PerformLayout();
			this->grpAdmin->ResumeLayout(false);
			this->grpAdmin->PerformLayout();
			this->grpLogin->ResumeLayout(false);
			this->grpLogin->PerformLayout();
			this->grpMode->ResumeLayout(false);
			this->grpMultiDay->ResumeLayout(false);
			this->grpMultiDay->PerformLayout();
			this->grpViewYourEvents->ResumeLayout(false);
			this->grpViewYourEvents->PerformLayout();
			this->grpEventInfo->ResumeLayout(false);
			this->grpTask->ResumeLayout(false);
			this->grpTimes->ResumeLayout(false);
			this->grpTimes->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#include <string>
	
	// On form load, read in events

	private: System::Void btnCreateEvent_Click(System::Object^  sender, System::EventArgs^  e) {
		grpCreateEvent->Visible = true;
		grpAdmin->Visible = false;
	}

	private: System::Void monthCalendar1_DateSelected(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
		
		//To display single selected of date use MonthCalendar1.SelectionRange.Start/ MonthCalendarSelectionRange.End
		textBox4->Text = monthCalendar1->SelectionRange->Start.ToString("d");
		std::string date = msclr::interop::marshal_as<std::string>(textBox4->Text);

		// Pull Todays Date
		System::DateTime todayDate = this->monthCalendar1->TodayDate;
		// Pull the event date
		System::DateTime eventDate = this->monthCalendar1->SelectionRange->Start;
		
			
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

		//std::string christmas "12/25";
		textBox5->Text = gcnew String(newDate.c_str());
		if (newDate == "12/25" || newDate == "7/4" || newDate == "1/1")
		{
			MessageBox::Show("You may not schedule an event on this date.");
			textBox4->Clear();
		}
	
		// Check if the event date is before the current day
		if (eventDate < todayDate) {
			MessageBox::Show("You cannot schedule an event in the past");
		}
		
		/*else {
			class::Day sDay;
			class::Day eDay;
			sDay.setMonth(eventDate.Month);
			sDay.setDay(eventDate.Day);
			sDay.setYear(eventDate.Year);
			eDay.setMonth(eventDate.Month);
			eDay.setDay(eventDate.Day);
			eDay.setYear(eventDate.Year);
			exec.currentEvent->setStartDay(sDay);
			exec.currentEvent->setEndDay(eDay);
		}*/
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
		// Pull Todays Date
		System::DateTime todayDate = this->monthCalendar1->TodayDate;
		// Pull the event date
		System::DateTime eventDate = this->monthCalendar1->SelectionRange->Start;

		grpTimes->Visible = true;
		grpCreateEvent->Visible = false;
		std::string name = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::string date = msclr::interop::marshal_as<std::string>(textBox4->Text);
		//Event myEvent(name, date);
	
		Event myEvent;
		myEvent.setName(name);
		//myEvent.setEventDate(date);

		std::string adminName = msclr::interop::marshal_as<std::string>(txtUser->Text);
		myEvent.setAdmin(adminName);

		textBox6->Text = gcnew String(myEvent.getAdmin().getUserName().c_str());
		exec.AddEvent(myEvent);

		for (int i = 0; i < exec.events.size(); i++) {
			if (exec.events.at(i).getName() == myEvent.getName()) {
				exec.currentEvent = &exec.events.at(i);
				break;
			}
		}
	
		class::Day sDay;
		class::Day eDay;
		sDay.setMonth(eventDate.Month);
		sDay.setDay(eventDate.Day);
		sDay.setYear(eventDate.Year);
		eDay.setMonth(eventDate.Month);
		eDay.setDay(eventDate.Day);
		eDay.setYear(eventDate.Year);
		exec.currentEvent->setStartDay(sDay);
		exec.currentEvent->setEndDay(eDay);


	}
	textBox1->Clear();
	
}

private: System::Void btnAdmin_Click(System::Object^  sender, System::EventArgs^  e) {
	grpAdmin->Visible = true;
	grpMode->Visible = false;
	currentlyAdmin = true;
}

private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {

	exec.read();

	if (txtUser->Text == ""){
		MessageBox::Show("Please enter a valid name");
	}
	else {
		grpMode->Visible = true;
		grpLogin->Visible = false;
	}
}

private: System::Void rbtn12Hr_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void rbtn24Hr_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}



public: System::Void btnSubmitTimes_Click(System::Object^  sender, System::EventArgs^  e) {
	grpTimes->Visible = false;
	grpViewYourEvents->Visible = true;
	
	
	
	std::string timeOne = msclr::interop::marshal_as<std::string>(this->comboBox1->Text);
	std::string timeTwo = msclr::interop::marshal_as<std::string>(this->comboBox2->Text);

	//Date formatted as hh:mm
	int startHour = atoi(timeOne.substr(0,2).c_str());
	int startMin= atoi(timeOne.substr(3,2).c_str());

	int endHour = atoi(timeTwo.substr(0,2).c_str());
	int endMin = atoi(timeTwo.substr(3,2).c_str());


	// TODO check if AM or PM

	int startTime = startHour*60 + startMin;
	int endTime = endHour*60 + endMin;

	// Check if end time is before start time
	if (endTime <= startTime){
		MessageBox::Show("An event cannot end before it starts");
	}
	// Check if the time spans the lunch hour
	else if ((startTime <= 12*60 ) && (endTime >= 13*60)){
		MessageBox::Show("An event cannot span lunch time");
	}
	else{
		exec.currentEvent->getStartDay().setTime(startTime);
		exec.currentEvent->getEndDay().setTime(endTime);
	}

	std::string* allEvents = exec.getAllEvents();
	for (int i = 0; i < exec.getEventSize(); i++) {
		lstYourEvents->Items->Add(gcnew String(allEvents[i].c_str()));
	}
	
	//User u(msclr::interop::marshal_as<std::string>(txtUser->Text));

	//std::string* eventList = exec.getAllEvents();
	//System::String^ tempString = textBox1->Text;//lstYourEvents->SelectedItem->ToString();
	//std::string eventName = msclr::interop::marshal_as<std::string>(tempString);
	////search eventlist for eventname
	//int index = 0;
	//bool run = true;
	//while (run)
	//{
	//	for (int i = 0; i < exec.events.size(); i++)
	//	{
	//		if (eventName == eventList[i])
	//		{
	//			index = i;
	//		}
	//		//break;
	//		run = false;
	//	}
	//}
	//exec.events[index].addUser(u.getUserName());
	

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
//	std::vector<std::string> temp = exec.checkAval(name);

	/*textBox5->Text = temp.size().ToString();
	for (int i = 0; i < temp.size(); i++)
	{
		lstYourEvents->Items->Add(gcnew String(temp[i].c_str()));
	}*/


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

		std::string date = std::to_string(myEvent.getStartDay().getMonth()) + "/" + std::to_string(myEvent.getStartDay().getDay()) + "/" + std::to_string(myEvent.getStartDay().getYear());
		lblEventDate->Text = gcnew String(date.c_str());

		//lblEventDate->Text = gcnew String(myEvent.getDate().c_str());


		//lblEventDate->Text = gcnew String(myEvent.getDate().c_str());

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
	//grpAttendees->Visible = true;


	
	

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	exec.write();
	this->Close();
	//return;
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void grpTimes_Enter(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void dateTimePicker3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}

		 //
		 //// If close button is pressed ////
		 //
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		L"Do you want to save before exiting?",
		L"Form Not Saved",
		MessageBoxButtons::YesNoCancel,
		MessageBoxIcon::Exclamation
	);

	//// Yes ////
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		exec.write();
	}

	//// Cancel ////
	else if (result == System::Windows::Forms::DialogResult::Cancel)
	{
		e->Cancel = true;
	}
}
		 //
		 //// Multiple Days Button ////
		 //
private: System::Void btnMultiDay_Click(System::Object^  sender, System::EventArgs^  e)
{
	grpTimes->Visible = false;
	grpMultiDay->Visible = true;
}
		 //// Schedule Multiple Days Group ////
private: System::Void grpMultiDay_Enter(System::Object^  sender, System::EventArgs^  e)
{
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 //
		 //// Calendar for Multiple Days ////
		 //
private: System::Void monthCalendar2_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e)
{
	//
	// TODO : Have calendar grey out initial day chosen and allow user to select multiple days
	//
	
}
		 //
		 //// Submit Multiple Days ////
		 //
private: System::Void submitMultiDay_Click(System::Object^  sender, System::EventArgs^  e)
{
	grpMode->Visible = true;

	//
	// TODO : Submit days selected with previous times chosen
	//
}
		 //
		 //// Cancel Multiple Days ////
		 //
private: System::Void cancelMultiDay_Click(System::Object^  sender, System::EventArgs^  e)
{
	grpTimes->Visible = true;
	grpMultiDay->Visible = false;
}

private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
