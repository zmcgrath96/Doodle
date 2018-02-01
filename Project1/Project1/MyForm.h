#pragma once

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
	private: System::Windows::Forms::Button^  btnLogin;
	protected:



	private: System::Windows::Forms::TextBox^  txtUser;
	private: System::Windows::Forms::Label^  lblLogin;
	private: System::Windows::Forms::GroupBox^  grpLogin;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::Label^  lblUser;
	private: System::Windows::Forms::Label^  lblPassword;
	private: System::Windows::Forms::Label^  lblSignedIn;
	private: System::Windows::Forms::GroupBox^  grpAdmin;

	private: System::Windows::Forms::Button^  btnCreateEvent;
	private: System::Windows::Forms::Button^  btnViewSchedule;
	private: System::Windows::Forms::Button^  btnEditEvents;
	private: System::Windows::Forms::Button^  btnEditAvailability;
	private: System::Windows::Forms::Label^  lblAdmin;
	private: System::Windows::Forms::GroupBox^  grpUser;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  grpCreateEvent;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  lblDate;
	private: System::Windows::Forms::Label^  lblTime;
	private: System::Windows::Forms::Label^  lblLocation;
	private: System::Windows::Forms::Label^  lblNote;




	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  lblCreateEvent;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  lblName;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::GroupBox^  grpViewSchedule;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lblSchedule;


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
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->grpLogin = (gcnew System::Windows::Forms::GroupBox());
			this->lblSignedIn = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->grpCreateEvent = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->lblLocation = (gcnew System::Windows::Forms::Label());
			this->lblNote = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->lblCreateEvent = (gcnew System::Windows::Forms::Label());
			this->grpAdmin = (gcnew System::Windows::Forms::GroupBox());
			this->btnCreateEvent = (gcnew System::Windows::Forms::Button());
			this->btnViewSchedule = (gcnew System::Windows::Forms::Button());
			this->btnEditEvents = (gcnew System::Windows::Forms::Button());
			this->btnEditAvailability = (gcnew System::Windows::Forms::Button());
			this->lblAdmin = (gcnew System::Windows::Forms::Label());
			this->grpUser = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->grpViewSchedule = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblSchedule = (gcnew System::Windows::Forms::Label());
			this->grpLogin->SuspendLayout();
			this->grpCreateEvent->SuspendLayout();
			this->grpAdmin->SuspendLayout();
			this->grpUser->SuspendLayout();
			this->grpViewSchedule->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(71, 104);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(100, 20);
			this->txtUser->TabIndex = 1;
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(62, 208);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(75, 23);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->Location = System::Drawing::Point(77, 48);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(36, 13);
			this->lblLogin->TabIndex = 2;
			this->lblLogin->Text = L"Login:";
			// 
			// grpLogin
			// 
			this->grpLogin->Controls->Add(this->lblSignedIn);
			this->grpLogin->Controls->Add(this->txtPassword);
			this->grpLogin->Controls->Add(this->btnLogin);
			this->grpLogin->Controls->Add(this->lblUser);
			this->grpLogin->Controls->Add(this->lblPassword);
			this->grpLogin->Controls->Add(this->lblLogin);
			this->grpLogin->Controls->Add(this->txtUser);
			this->grpLogin->Location = System::Drawing::Point(291, 74);
			this->grpLogin->Name = L"grpLogin";
			this->grpLogin->Size = System::Drawing::Size(200, 277);
			this->grpLogin->TabIndex = 3;
			this->grpLogin->TabStop = false;
			// 
			// lblSignedIn
			// 
			this->lblSignedIn->AutoSize = true;
			this->lblSignedIn->Location = System::Drawing::Point(68, 16);
			this->lblSignedIn->Name = L"lblSignedIn";
			this->lblSignedIn->Size = System::Drawing::Size(51, 13);
			this->lblSignedIn->TabIndex = 6;
			this->lblSignedIn->Text = L"Signed in";
			this->lblSignedIn->Visible = false;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(71, 142);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(100, 20);
			this->txtPassword->TabIndex = 5;
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Location = System::Drawing::Point(21, 107);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(32, 13);
			this->lblUser->TabIndex = 4;
			this->lblUser->Text = L"User:";
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(9, 145);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(56, 13);
			this->lblPassword->TabIndex = 3;
			this->lblPassword->Text = L"Password:";
			// 
			// grpCreateEvent
			// 
			this->grpCreateEvent->Controls->Add(this->textBox3);
			this->grpCreateEvent->Controls->Add(this->monthCalendar1);
			this->grpCreateEvent->Controls->Add(this->textBox2);
			this->grpCreateEvent->Controls->Add(this->textBox1);
			this->grpCreateEvent->Controls->Add(this->lblName);
			this->grpCreateEvent->Controls->Add(this->dateTimePicker2);
			this->grpCreateEvent->Controls->Add(this->dateTimePicker1);
			this->grpCreateEvent->Controls->Add(this->lblDate);
			this->grpCreateEvent->Controls->Add(this->lblTime);
			this->grpCreateEvent->Controls->Add(this->lblLocation);
			this->grpCreateEvent->Controls->Add(this->lblNote);
			this->grpCreateEvent->Controls->Add(this->button6);
			this->grpCreateEvent->Controls->Add(this->lblCreateEvent);
			this->grpCreateEvent->Location = System::Drawing::Point(206, 74);
			this->grpCreateEvent->Name = L"grpCreateEvent";
			this->grpCreateEvent->Size = System::Drawing::Size(472, 441);
			this->grpCreateEvent->TabIndex = 8;
			this->grpCreateEvent->TabStop = false;
			this->grpCreateEvent->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(85, 359);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(227, 20);
			this->textBox3->TabIndex = 12;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(85, 100);
			this->monthCalendar1->MaximumSize = System::Drawing::Size(500, 500);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 11;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(85, 327);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 20);
			this->textBox2->TabIndex = 11;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 20);
			this->textBox1->TabIndex = 10;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(15, 63);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(38, 13);
			this->lblName->TabIndex = 9;
			this->lblName->Text = L"Name:";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"hh:mm tt";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(85, 296);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->ShowUpDown = true;
			this->dateTimePicker2->Size = System::Drawing::Size(227, 20);
			this->dateTimePicker2->TabIndex = 8;
			this->dateTimePicker2->Value = System::DateTime(2018, 1, 30, 12, 0, 0, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker2_ValueChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(257, 28);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 7;
			this->dateTimePicker1->Visible = false;
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->Location = System::Drawing::Point(15, 100);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(33, 13);
			this->lblDate->TabIndex = 6;
			this->lblDate->Text = L"Date:";
			// 
			// lblTime
			// 
			this->lblTime->AutoSize = true;
			this->lblTime->Location = System::Drawing::Point(15, 299);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(33, 13);
			this->lblTime->TabIndex = 5;
			this->lblTime->Text = L"Time:";
			// 
			// lblLocation
			// 
			this->lblLocation->AutoSize = true;
			this->lblLocation->Location = System::Drawing::Point(15, 330);
			this->lblLocation->Name = L"lblLocation";
			this->lblLocation->Size = System::Drawing::Size(51, 13);
			this->lblLocation->TabIndex = 4;
			this->lblLocation->Text = L"Location:";
			// 
			// lblNote
			// 
			this->lblNote->AutoSize = true;
			this->lblNote->Location = System::Drawing::Point(15, 362);
			this->lblNote->Name = L"lblNote";
			this->lblNote->Size = System::Drawing::Size(33, 13);
			this->lblNote->TabIndex = 3;
			this->lblNote->Text = L"Note:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(116, 403);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(103, 23);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Submit";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// lblCreateEvent
			// 
			this->lblCreateEvent->AutoSize = true;
			this->lblCreateEvent->Location = System::Drawing::Point(131, 26);
			this->lblCreateEvent->Name = L"lblCreateEvent";
			this->lblCreateEvent->Size = System::Drawing::Size(72, 13);
			this->lblCreateEvent->TabIndex = 2;
			this->lblCreateEvent->Text = L"Create Event:";
			// 
			// grpAdmin
			// 
			this->grpAdmin->Controls->Add(this->btnCreateEvent);
			this->grpAdmin->Controls->Add(this->btnViewSchedule);
			this->grpAdmin->Controls->Add(this->btnEditEvents);
			this->grpAdmin->Controls->Add(this->btnEditAvailability);
			this->grpAdmin->Controls->Add(this->lblAdmin);
			this->grpAdmin->Location = System::Drawing::Point(291, 74);
			this->grpAdmin->Name = L"grpAdmin";
			this->grpAdmin->Size = System::Drawing::Size(200, 277);
			this->grpAdmin->TabIndex = 7;
			this->grpAdmin->TabStop = false;
			this->grpAdmin->Visible = false;
			// 
			// btnCreateEvent
			// 
			this->btnCreateEvent->Location = System::Drawing::Point(50, 79);
			this->btnCreateEvent->Name = L"btnCreateEvent";
			this->btnCreateEvent->Size = System::Drawing::Size(103, 23);
			this->btnCreateEvent->TabIndex = 5;
			this->btnCreateEvent->Text = L"Create Event";
			this->btnCreateEvent->UseVisualStyleBackColor = true;
			this->btnCreateEvent->Click += gcnew System::EventHandler(this, &MyForm::btnCreateEvent_Click);
			// 
			// btnViewSchedule
			// 
			this->btnViewSchedule->Location = System::Drawing::Point(50, 137);
			this->btnViewSchedule->Name = L"btnViewSchedule";
			this->btnViewSchedule->Size = System::Drawing::Size(103, 23);
			this->btnViewSchedule->TabIndex = 4;
			this->btnViewSchedule->Text = L"View Schedule";
			this->btnViewSchedule->UseVisualStyleBackColor = true;
			this->btnViewSchedule->Click += gcnew System::EventHandler(this, &MyForm::btnViewSchedule_Click);
			// 
			// btnEditEvents
			// 
			this->btnEditEvents->Location = System::Drawing::Point(50, 108);
			this->btnEditEvents->Name = L"btnEditEvents";
			this->btnEditEvents->Size = System::Drawing::Size(103, 23);
			this->btnEditEvents->TabIndex = 3;
			this->btnEditEvents->Text = L"Edit Events";
			this->btnEditEvents->UseVisualStyleBackColor = true;
			// 
			// btnEditAvailability
			// 
			this->btnEditAvailability->Location = System::Drawing::Point(50, 166);
			this->btnEditAvailability->Name = L"btnEditAvailability";
			this->btnEditAvailability->Size = System::Drawing::Size(103, 23);
			this->btnEditAvailability->TabIndex = 0;
			this->btnEditAvailability->Text = L"Edit Availability";
			this->btnEditAvailability->UseVisualStyleBackColor = true;
			// 
			// lblAdmin
			// 
			this->lblAdmin->AutoSize = true;
			this->lblAdmin->Location = System::Drawing::Point(47, 34);
			this->lblAdmin->Name = L"lblAdmin";
			this->lblAdmin->Size = System::Drawing::Size(93, 13);
			this->lblAdmin->TabIndex = 2;
			this->lblAdmin->Text = L"Make a Selection:";
			// 
			// grpUser
			// 
			this->grpUser->Controls->Add(this->button2);
			this->grpUser->Controls->Add(this->button4);
			this->grpUser->Controls->Add(this->label1);
			this->grpUser->Location = System::Drawing::Point(291, 74);
			this->grpUser->Name = L"grpUser";
			this->grpUser->Size = System::Drawing::Size(200, 277);
			this->grpUser->TabIndex = 8;
			this->grpUser->TabStop = false;
			this->grpUser->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(50, 105);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"View Schedule";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(50, 134);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 23);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Edit Availability";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Make a Selection:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(705, 366);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 20);
			this->textBox4->TabIndex = 10;
			// 
			// grpViewSchedule
			// 
			this->grpViewSchedule->Controls->Add(this->button1);
			this->grpViewSchedule->Controls->Add(this->lblSchedule);
			this->grpViewSchedule->Location = System::Drawing::Point(684, 12);
			this->grpViewSchedule->Name = L"grpViewSchedule";
			this->grpViewSchedule->Size = System::Drawing::Size(301, 339);
			this->grpViewSchedule->TabIndex = 11;
			this->grpViewSchedule->TabStop = false;
			this->grpViewSchedule->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(107, 290);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// lblSchedule
			// 
			this->lblSchedule->AutoSize = true;
			this->lblSchedule->Location = System::Drawing::Point(59, 31);
			this->lblSchedule->Name = L"lblSchedule";
			this->lblSchedule->Size = System::Drawing::Size(55, 13);
			this->lblSchedule->TabIndex = 4;
			this->lblSchedule->Text = L"Schedule:";
			// 
			// MyForm
			// 
			this->AcceptButton = this->btnLogin;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1043, 572);
			this->Controls->Add(this->grpViewSchedule);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->grpAdmin);
			this->Controls->Add(this->grpLogin);
			this->Controls->Add(this->grpUser);
			this->Controls->Add(this->grpCreateEvent);
			this->Name = L"MyForm";
			this->Text = L"Doodle";
			this->grpLogin->ResumeLayout(false);
			this->grpLogin->PerformLayout();
			this->grpCreateEvent->ResumeLayout(false);
			this->grpCreateEvent->PerformLayout();
			this->grpAdmin->ResumeLayout(false);
			this->grpAdmin->PerformLayout();
			this->grpUser->ResumeLayout(false);
			this->grpUser->PerformLayout();
			this->grpViewSchedule->ResumeLayout(false);
			this->grpViewSchedule->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->txtUser->Select();

		}
#pragma endregion

		DateTime mPrevDate;
		bool mBusy;

	private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, EventArgs^ e)
	{
		if (!mBusy) {
			mBusy = true;
			DateTime dt = dateTimePicker2->Value;
			if ((dt.Minute * 60 + dt.Second) % 300 != 0) {
				TimeSpan diff = dt - mPrevDate;
				if (diff.Ticks < 0)
				{
					dateTimePicker2->Value = mPrevDate.AddMinutes(-20);
				}
				else dateTimePicker2->Value = mPrevDate.AddMinutes(20);
			}
			mBusy = false;
		}
		mPrevDate = dateTimePicker2->Value;
	}



	private: System::Void dateTimePicker2_KeyPress(System::Object^ sender, KeyEventArgs^ e)		 
	{
		// e->SuppressKeyPress = true;
		e->SuppressKeyPress = true;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (txtUser->Text == "")
		{
			if (txtPassword->Text == "")
			{
				grpLogin->Visible = false;
				grpAdmin->Visible = true;
			}
			else
			{
				//lblSignedIn->Text = "Incorrect login information";
			}
		}
		else if (txtUser->Text == "user")
		{
			if (txtPassword->Text == "password")
			{
				grpLogin->Visible = false;
				grpUser->Visible = true;
			}
			else
			{
				//lblSignedIn->Text = "Incorrect login information";
			}
		}
	}
	private: System::Void btnCreateEvent_Click(System::Object^  sender, System::EventArgs^  e) {
		grpCreateEvent->Visible = true;
		grpAdmin->Visible = false;
		mPrevDate = mPrevDate.AddYears(2000);


	}


	private: System::Void monthCalendar1_DateChanged_1(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	}
	private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {

		//DateTime date = DateTime(2018, 6, 10);
		//monthCalendar1->AddBoldedDate(date);
		textBox4->Text = monthCalendar1->SelectionRange->Start.ToString();



	}


private: System::Void btnViewSchedule_Click(System::Object^  sender, System::EventArgs^  e) {
	grpAdmin->Visible = false;
	grpViewSchedule->Visible = true;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox4->Text = mPrevDate.ToString();

}
};
}
