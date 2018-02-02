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
	private: System::Windows::Forms::RadioButton^  rbtn12Hr;
	private: System::Windows::Forms::RadioButton^  rbtn24Hr;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  grpAvailability;
	private: System::Windows::Forms::TreeView^  trv12Hr;

	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TreeView^  trv24Hr;


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
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"00:00 - 00:20"));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"00:20 - 00:40"));
			System::Windows::Forms::TreeNode^  treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"00:40 - 01:00"));
			System::Windows::Forms::TreeNode^  treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"00:00 - 01:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode1,
					treeNode2, treeNode3
			}));
			System::Windows::Forms::TreeNode^  treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"01:00 - 01:20"));
			System::Windows::Forms::TreeNode^  treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"01:20 - 01:40"));
			System::Windows::Forms::TreeNode^  treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"01:40 - 02:00"));
			System::Windows::Forms::TreeNode^  treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"01:00 - 02:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode5,
					treeNode6, treeNode7
			}));
			System::Windows::Forms::TreeNode^  treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"02:00 - 02:20"));
			System::Windows::Forms::TreeNode^  treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"02:20 - 02:40"));
			System::Windows::Forms::TreeNode^  treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"02:40 - 03:00"));
			System::Windows::Forms::TreeNode^  treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"02:00 - 03:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode9,
					treeNode10, treeNode11
			}));
			System::Windows::Forms::TreeNode^  treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"03:00 - 03:20"));
			System::Windows::Forms::TreeNode^  treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"03:20 - 03:40"));
			System::Windows::Forms::TreeNode^  treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"03:40 - 04:00"));
			System::Windows::Forms::TreeNode^  treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"03:00 - 04:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode13,
					treeNode14, treeNode15
			}));
			System::Windows::Forms::TreeNode^  treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"04:00 - 04:20"));
			System::Windows::Forms::TreeNode^  treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"04:20 - 04:40"));
			System::Windows::Forms::TreeNode^  treeNode19 = (gcnew System::Windows::Forms::TreeNode(L"04:40 - 05:00"));
			System::Windows::Forms::TreeNode^  treeNode20 = (gcnew System::Windows::Forms::TreeNode(L"04:00 - 05:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode17,
					treeNode18, treeNode19
			}));
			System::Windows::Forms::TreeNode^  treeNode21 = (gcnew System::Windows::Forms::TreeNode(L"05:00 - 05:20"));
			System::Windows::Forms::TreeNode^  treeNode22 = (gcnew System::Windows::Forms::TreeNode(L"05:20 - 05:40"));
			System::Windows::Forms::TreeNode^  treeNode23 = (gcnew System::Windows::Forms::TreeNode(L"05:40 - 06:00"));
			System::Windows::Forms::TreeNode^  treeNode24 = (gcnew System::Windows::Forms::TreeNode(L"05:00 - 06:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode21,
					treeNode22, treeNode23
			}));
			System::Windows::Forms::TreeNode^  treeNode25 = (gcnew System::Windows::Forms::TreeNode(L"06:00 - 06:20"));
			System::Windows::Forms::TreeNode^  treeNode26 = (gcnew System::Windows::Forms::TreeNode(L"06:20 - 06:40"));
			System::Windows::Forms::TreeNode^  treeNode27 = (gcnew System::Windows::Forms::TreeNode(L"06:40 - 07:00"));
			System::Windows::Forms::TreeNode^  treeNode28 = (gcnew System::Windows::Forms::TreeNode(L"06:00 - 07:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode25,
					treeNode26, treeNode27
			}));
			System::Windows::Forms::TreeNode^  treeNode29 = (gcnew System::Windows::Forms::TreeNode(L"07:00 - 07:20"));
			System::Windows::Forms::TreeNode^  treeNode30 = (gcnew System::Windows::Forms::TreeNode(L"07:20 - 07:40"));
			System::Windows::Forms::TreeNode^  treeNode31 = (gcnew System::Windows::Forms::TreeNode(L"07:40 - 08:00"));
			System::Windows::Forms::TreeNode^  treeNode32 = (gcnew System::Windows::Forms::TreeNode(L"07:00 - 08:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode29,
					treeNode30, treeNode31
			}));
			System::Windows::Forms::TreeNode^  treeNode33 = (gcnew System::Windows::Forms::TreeNode(L"08:00 - 08:20"));
			System::Windows::Forms::TreeNode^  treeNode34 = (gcnew System::Windows::Forms::TreeNode(L"08:20 - 08:40"));
			System::Windows::Forms::TreeNode^  treeNode35 = (gcnew System::Windows::Forms::TreeNode(L"08:40 - 09:00"));
			System::Windows::Forms::TreeNode^  treeNode36 = (gcnew System::Windows::Forms::TreeNode(L"08:00 - 09:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode33,
					treeNode34, treeNode35
			}));
			System::Windows::Forms::TreeNode^  treeNode37 = (gcnew System::Windows::Forms::TreeNode(L"09:00 - 09:20"));
			System::Windows::Forms::TreeNode^  treeNode38 = (gcnew System::Windows::Forms::TreeNode(L"09:20 - 09:40"));
			System::Windows::Forms::TreeNode^  treeNode39 = (gcnew System::Windows::Forms::TreeNode(L"09:40 - 10:00"));
			System::Windows::Forms::TreeNode^  treeNode40 = (gcnew System::Windows::Forms::TreeNode(L"09:00 - 10:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode37,
					treeNode38, treeNode39
			}));
			System::Windows::Forms::TreeNode^  treeNode41 = (gcnew System::Windows::Forms::TreeNode(L"10:00 - 10:20"));
			System::Windows::Forms::TreeNode^  treeNode42 = (gcnew System::Windows::Forms::TreeNode(L"10:20 - 10:40"));
			System::Windows::Forms::TreeNode^  treeNode43 = (gcnew System::Windows::Forms::TreeNode(L"10:40 - 11:00"));
			System::Windows::Forms::TreeNode^  treeNode44 = (gcnew System::Windows::Forms::TreeNode(L"10:00 - 11:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode41,
					treeNode42, treeNode43
			}));
			System::Windows::Forms::TreeNode^  treeNode45 = (gcnew System::Windows::Forms::TreeNode(L"11:00 - 11:20"));
			System::Windows::Forms::TreeNode^  treeNode46 = (gcnew System::Windows::Forms::TreeNode(L"11:20 - 11:40"));
			System::Windows::Forms::TreeNode^  treeNode47 = (gcnew System::Windows::Forms::TreeNode(L"11:40 - 12:00"));
			System::Windows::Forms::TreeNode^  treeNode48 = (gcnew System::Windows::Forms::TreeNode(L"11:00 - 12:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode45,
					treeNode46, treeNode47
			}));
			System::Windows::Forms::TreeNode^  treeNode49 = (gcnew System::Windows::Forms::TreeNode(L"12:00-12:20"));
			System::Windows::Forms::TreeNode^  treeNode50 = (gcnew System::Windows::Forms::TreeNode(L"12:20 - 12:40"));
			System::Windows::Forms::TreeNode^  treeNode51 = (gcnew System::Windows::Forms::TreeNode(L"12:40 - 13:00"));
			System::Windows::Forms::TreeNode^  treeNode52 = (gcnew System::Windows::Forms::TreeNode(L"12:00 - 13:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode49,
					treeNode50, treeNode51
			}));
			System::Windows::Forms::TreeNode^  treeNode53 = (gcnew System::Windows::Forms::TreeNode(L"13:00 - 13:20"));
			System::Windows::Forms::TreeNode^  treeNode54 = (gcnew System::Windows::Forms::TreeNode(L"13:20 - 13:40"));
			System::Windows::Forms::TreeNode^  treeNode55 = (gcnew System::Windows::Forms::TreeNode(L"13:40 - 14:00"));
			System::Windows::Forms::TreeNode^  treeNode56 = (gcnew System::Windows::Forms::TreeNode(L"13:00 - 14:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode53,
					treeNode54, treeNode55
			}));
			System::Windows::Forms::TreeNode^  treeNode57 = (gcnew System::Windows::Forms::TreeNode(L"14:00 - 14:20"));
			System::Windows::Forms::TreeNode^  treeNode58 = (gcnew System::Windows::Forms::TreeNode(L"14:20 - 14:40"));
			System::Windows::Forms::TreeNode^  treeNode59 = (gcnew System::Windows::Forms::TreeNode(L"14:40 - 15:00"));
			System::Windows::Forms::TreeNode^  treeNode60 = (gcnew System::Windows::Forms::TreeNode(L"14:00 - 15:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode57,
					treeNode58, treeNode59
			}));
			System::Windows::Forms::TreeNode^  treeNode61 = (gcnew System::Windows::Forms::TreeNode(L"15:00 - 15:20"));
			System::Windows::Forms::TreeNode^  treeNode62 = (gcnew System::Windows::Forms::TreeNode(L"15:20 - 15:40"));
			System::Windows::Forms::TreeNode^  treeNode63 = (gcnew System::Windows::Forms::TreeNode(L"15:40 - 16:00"));
			System::Windows::Forms::TreeNode^  treeNode64 = (gcnew System::Windows::Forms::TreeNode(L"15:00 - 16:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode61,
					treeNode62, treeNode63
			}));
			System::Windows::Forms::TreeNode^  treeNode65 = (gcnew System::Windows::Forms::TreeNode(L"16:00 - 16:20"));
			System::Windows::Forms::TreeNode^  treeNode66 = (gcnew System::Windows::Forms::TreeNode(L"16:20 - 16:40"));
			System::Windows::Forms::TreeNode^  treeNode67 = (gcnew System::Windows::Forms::TreeNode(L"16:40 - 17:00"));
			System::Windows::Forms::TreeNode^  treeNode68 = (gcnew System::Windows::Forms::TreeNode(L"16:00 - 17:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode65,
					treeNode66, treeNode67
			}));
			System::Windows::Forms::TreeNode^  treeNode69 = (gcnew System::Windows::Forms::TreeNode(L"17:00 - 17:20"));
			System::Windows::Forms::TreeNode^  treeNode70 = (gcnew System::Windows::Forms::TreeNode(L"17:20 - 17:40"));
			System::Windows::Forms::TreeNode^  treeNode71 = (gcnew System::Windows::Forms::TreeNode(L"17:40 - 18:00"));
			System::Windows::Forms::TreeNode^  treeNode72 = (gcnew System::Windows::Forms::TreeNode(L"17:00 - 18:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode69,
					treeNode70, treeNode71
			}));
			System::Windows::Forms::TreeNode^  treeNode73 = (gcnew System::Windows::Forms::TreeNode(L"18:00 - 18:20"));
			System::Windows::Forms::TreeNode^  treeNode74 = (gcnew System::Windows::Forms::TreeNode(L"18:20 - 18:40"));
			System::Windows::Forms::TreeNode^  treeNode75 = (gcnew System::Windows::Forms::TreeNode(L"18:40 - 19:00"));
			System::Windows::Forms::TreeNode^  treeNode76 = (gcnew System::Windows::Forms::TreeNode(L"18:00 - 19:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode73,
					treeNode74, treeNode75
			}));
			System::Windows::Forms::TreeNode^  treeNode77 = (gcnew System::Windows::Forms::TreeNode(L"19:00 - 19:20"));
			System::Windows::Forms::TreeNode^  treeNode78 = (gcnew System::Windows::Forms::TreeNode(L"19:20 - 19:40"));
			System::Windows::Forms::TreeNode^  treeNode79 = (gcnew System::Windows::Forms::TreeNode(L"19:40 - 20:00"));
			System::Windows::Forms::TreeNode^  treeNode80 = (gcnew System::Windows::Forms::TreeNode(L"19:00 - 20:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode77,
					treeNode78, treeNode79
			}));
			System::Windows::Forms::TreeNode^  treeNode81 = (gcnew System::Windows::Forms::TreeNode(L"20:00 - 20:20"));
			System::Windows::Forms::TreeNode^  treeNode82 = (gcnew System::Windows::Forms::TreeNode(L"20:20 - 20:40"));
			System::Windows::Forms::TreeNode^  treeNode83 = (gcnew System::Windows::Forms::TreeNode(L"20:40 - 21:00"));
			System::Windows::Forms::TreeNode^  treeNode84 = (gcnew System::Windows::Forms::TreeNode(L"20:00 - 21:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode81,
					treeNode82, treeNode83
			}));
			System::Windows::Forms::TreeNode^  treeNode85 = (gcnew System::Windows::Forms::TreeNode(L"21:00 - 21:20"));
			System::Windows::Forms::TreeNode^  treeNode86 = (gcnew System::Windows::Forms::TreeNode(L"21:20 - 21:40"));
			System::Windows::Forms::TreeNode^  treeNode87 = (gcnew System::Windows::Forms::TreeNode(L"21:40 - 22:00"));
			System::Windows::Forms::TreeNode^  treeNode88 = (gcnew System::Windows::Forms::TreeNode(L"21:00 - 22:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode85,
					treeNode86, treeNode87
			}));
			System::Windows::Forms::TreeNode^  treeNode89 = (gcnew System::Windows::Forms::TreeNode(L"22:00 - 22:20"));
			System::Windows::Forms::TreeNode^  treeNode90 = (gcnew System::Windows::Forms::TreeNode(L"22:20 - 22:40"));
			System::Windows::Forms::TreeNode^  treeNode91 = (gcnew System::Windows::Forms::TreeNode(L"22:40 - 23:00"));
			System::Windows::Forms::TreeNode^  treeNode92 = (gcnew System::Windows::Forms::TreeNode(L"22:00 - 23:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode89,
					treeNode90, treeNode91
			}));
			System::Windows::Forms::TreeNode^  treeNode93 = (gcnew System::Windows::Forms::TreeNode(L"23:00 - 23:20"));
			System::Windows::Forms::TreeNode^  treeNode94 = (gcnew System::Windows::Forms::TreeNode(L"23:20 - 23:40"));
			System::Windows::Forms::TreeNode^  treeNode95 = (gcnew System::Windows::Forms::TreeNode(L"23:40 - 00:00"));
			System::Windows::Forms::TreeNode^  treeNode96 = (gcnew System::Windows::Forms::TreeNode(L"23:00 - 00:00", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode93,
					treeNode94, treeNode95
			}));
			System::Windows::Forms::TreeNode^  treeNode97 = (gcnew System::Windows::Forms::TreeNode(L"12:00 AM - 12:20 AM"));
			System::Windows::Forms::TreeNode^  treeNode98 = (gcnew System::Windows::Forms::TreeNode(L"12:20 AM - 12:40 AM"));
			System::Windows::Forms::TreeNode^  treeNode99 = (gcnew System::Windows::Forms::TreeNode(L"12:40 AM - 1:00 AM"));
			System::Windows::Forms::TreeNode^  treeNode100 = (gcnew System::Windows::Forms::TreeNode(L"12 AM - 1AM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode97,
					treeNode98, treeNode99
			}));
			System::Windows::Forms::TreeNode^  treeNode101 = (gcnew System::Windows::Forms::TreeNode(L"1:00 AM - 1:20 AM"));
			System::Windows::Forms::TreeNode^  treeNode102 = (gcnew System::Windows::Forms::TreeNode(L"1:20 AM - 1:40 AM"));
			System::Windows::Forms::TreeNode^  treeNode103 = (gcnew System::Windows::Forms::TreeNode(L"1:40 AM - 2:00 AM"));
			System::Windows::Forms::TreeNode^  treeNode104 = (gcnew System::Windows::Forms::TreeNode(L"1 AM - 2 AM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode101,
					treeNode102, treeNode103
			}));
			System::Windows::Forms::TreeNode^  treeNode105 = (gcnew System::Windows::Forms::TreeNode(L"2:00 AM - 2:20 AM"));
			System::Windows::Forms::TreeNode^  treeNode106 = (gcnew System::Windows::Forms::TreeNode(L"2:20 AM - 2:40 AM"));
			System::Windows::Forms::TreeNode^  treeNode107 = (gcnew System::Windows::Forms::TreeNode(L"2:40 AM - 3:00 AM"));
			System::Windows::Forms::TreeNode^  treeNode108 = (gcnew System::Windows::Forms::TreeNode(L"2 AM - 3 AM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode105,
					treeNode106, treeNode107
			}));
			System::Windows::Forms::TreeNode^  treeNode109 = (gcnew System::Windows::Forms::TreeNode(L"3:00 AM - 3:20 AM"));
			System::Windows::Forms::TreeNode^  treeNode110 = (gcnew System::Windows::Forms::TreeNode(L"3:20 AM - 3:40 AM"));
			System::Windows::Forms::TreeNode^  treeNode111 = (gcnew System::Windows::Forms::TreeNode(L"3:40 AM - 4:00 AM"));
			System::Windows::Forms::TreeNode^  treeNode112 = (gcnew System::Windows::Forms::TreeNode(L"3 AM - 4 AM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode109,
					treeNode110, treeNode111
			}));
			System::Windows::Forms::TreeNode^  treeNode113 = (gcnew System::Windows::Forms::TreeNode(L"4:00 AM - 4:20 AM"));
			System::Windows::Forms::TreeNode^  treeNode114 = (gcnew System::Windows::Forms::TreeNode(L"4:20 AM - 4:40 AM"));
			System::Windows::Forms::TreeNode^  treeNode115 = (gcnew System::Windows::Forms::TreeNode(L"4:40 AM - 5:00 AM"));
			System::Windows::Forms::TreeNode^  treeNode116 = (gcnew System::Windows::Forms::TreeNode(L"4 AM - 5 AM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode113,
					treeNode114, treeNode115
			}));
			System::Windows::Forms::TreeNode^  treeNode117 = (gcnew System::Windows::Forms::TreeNode(L"5:00 AM - 5:20 AM"));
			System::Windows::Forms::TreeNode^  treeNode118 = (gcnew System::Windows::Forms::TreeNode(L"5:20 AM - 5:40 AM"));
			System::Windows::Forms::TreeNode^  treeNode119 = (gcnew System::Windows::Forms::TreeNode(L"5:40 AM - 6:00 AM"));
			System::Windows::Forms::TreeNode^  treeNode120 = (gcnew System::Windows::Forms::TreeNode(L"5AM - 6 AM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode117,
					treeNode118, treeNode119
			}));
			System::Windows::Forms::TreeNode^  treeNode121 = (gcnew System::Windows::Forms::TreeNode(L"6:00 AM - 6:20 AM"));
			System::Windows::Forms::TreeNode^  treeNode122 = (gcnew System::Windows::Forms::TreeNode(L"6:20 AM - 6:40 AM"));
			System::Windows::Forms::TreeNode^  treeNode123 = (gcnew System::Windows::Forms::TreeNode(L"6:40 AM - 7:00 AM"));
			System::Windows::Forms::TreeNode^  treeNode124 = (gcnew System::Windows::Forms::TreeNode(L"6 AM - 7 AM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode121,
					treeNode122, treeNode123
			}));
			System::Windows::Forms::TreeNode^  treeNode125 = (gcnew System::Windows::Forms::TreeNode(L"7:00 AM - 7:20 AM"));
			System::Windows::Forms::TreeNode^  treeNode126 = (gcnew System::Windows::Forms::TreeNode(L"7:20 AM - 7:40 AM"));
			System::Windows::Forms::TreeNode^  treeNode127 = (gcnew System::Windows::Forms::TreeNode(L"7:40 AM - 8:00 AM"));
			System::Windows::Forms::TreeNode^  treeNode128 = (gcnew System::Windows::Forms::TreeNode(L"7 AM - 8 AM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode125,
					treeNode126, treeNode127
			}));
			System::Windows::Forms::TreeNode^  treeNode129 = (gcnew System::Windows::Forms::TreeNode(L"8:00 AM - 8:20 AM"));
			System::Windows::Forms::TreeNode^  treeNode130 = (gcnew System::Windows::Forms::TreeNode(L"8:20 AM - 8:40 AM"));
			System::Windows::Forms::TreeNode^  treeNode131 = (gcnew System::Windows::Forms::TreeNode(L"8:40 AM - 9:00 AM"));
			System::Windows::Forms::TreeNode^  treeNode132 = (gcnew System::Windows::Forms::TreeNode(L"8 AM - 9 AM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode129,
					treeNode130, treeNode131
			}));
			System::Windows::Forms::TreeNode^  treeNode133 = (gcnew System::Windows::Forms::TreeNode(L"9:00 AM - 9:20 AM"));
			System::Windows::Forms::TreeNode^  treeNode134 = (gcnew System::Windows::Forms::TreeNode(L"9:20 AM - 9:40 AM"));
			System::Windows::Forms::TreeNode^  treeNode135 = (gcnew System::Windows::Forms::TreeNode(L"9:40 AM - 10:00 AM"));
			System::Windows::Forms::TreeNode^  treeNode136 = (gcnew System::Windows::Forms::TreeNode(L"9 AM - 10 AM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode133,
					treeNode134, treeNode135
			}));
			System::Windows::Forms::TreeNode^  treeNode137 = (gcnew System::Windows::Forms::TreeNode(L"10:00 AM - 10:20 AM"));
			System::Windows::Forms::TreeNode^  treeNode138 = (gcnew System::Windows::Forms::TreeNode(L"10:20 AM - 10:40 AM"));
			System::Windows::Forms::TreeNode^  treeNode139 = (gcnew System::Windows::Forms::TreeNode(L"10:40 AM - 11:00 AM"));
			System::Windows::Forms::TreeNode^  treeNode140 = (gcnew System::Windows::Forms::TreeNode(L"10 AM - 11 AM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode137,
					treeNode138, treeNode139
			}));
			System::Windows::Forms::TreeNode^  treeNode141 = (gcnew System::Windows::Forms::TreeNode(L"11:00 AM - 11:20 AM"));
			System::Windows::Forms::TreeNode^  treeNode142 = (gcnew System::Windows::Forms::TreeNode(L"11:20 AM - 11:40 AM"));
			System::Windows::Forms::TreeNode^  treeNode143 = (gcnew System::Windows::Forms::TreeNode(L"11:40 AM - 12:00 PM"));
			System::Windows::Forms::TreeNode^  treeNode144 = (gcnew System::Windows::Forms::TreeNode(L"11 PM - 12 PM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode141,
					treeNode142, treeNode143
			}));
			System::Windows::Forms::TreeNode^  treeNode145 = (gcnew System::Windows::Forms::TreeNode(L"12:00 PM - 12:20 PM"));
			System::Windows::Forms::TreeNode^  treeNode146 = (gcnew System::Windows::Forms::TreeNode(L"12:20 PM - 12:40 PM"));
			System::Windows::Forms::TreeNode^  treeNode147 = (gcnew System::Windows::Forms::TreeNode(L"12:40 PM - 1:00 PM"));
			System::Windows::Forms::TreeNode^  treeNode148 = (gcnew System::Windows::Forms::TreeNode(L"12 PM - 1 PM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode145,
					treeNode146, treeNode147
			}));
			System::Windows::Forms::TreeNode^  treeNode149 = (gcnew System::Windows::Forms::TreeNode(L"1:00 PM - 1:20 PM"));
			System::Windows::Forms::TreeNode^  treeNode150 = (gcnew System::Windows::Forms::TreeNode(L"1:20 PM - 1:40 PM"));
			System::Windows::Forms::TreeNode^  treeNode151 = (gcnew System::Windows::Forms::TreeNode(L"1:40 PM - 2:00 PM"));
			System::Windows::Forms::TreeNode^  treeNode152 = (gcnew System::Windows::Forms::TreeNode(L"1 PM - 2 PM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode149,
					treeNode150, treeNode151
			}));
			System::Windows::Forms::TreeNode^  treeNode153 = (gcnew System::Windows::Forms::TreeNode(L"2:00 PM - 2:20 PM"));
			System::Windows::Forms::TreeNode^  treeNode154 = (gcnew System::Windows::Forms::TreeNode(L"2:20 PM - 2:40 PM"));
			System::Windows::Forms::TreeNode^  treeNode155 = (gcnew System::Windows::Forms::TreeNode(L"2:40 PM - 3:00 PM"));
			System::Windows::Forms::TreeNode^  treeNode156 = (gcnew System::Windows::Forms::TreeNode(L"2 PM - 3 PM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode153,
					treeNode154, treeNode155
			}));
			System::Windows::Forms::TreeNode^  treeNode157 = (gcnew System::Windows::Forms::TreeNode(L"3:00 PM - 3:20 PM"));
			System::Windows::Forms::TreeNode^  treeNode158 = (gcnew System::Windows::Forms::TreeNode(L"3:20 PM - 3:40 PM"));
			System::Windows::Forms::TreeNode^  treeNode159 = (gcnew System::Windows::Forms::TreeNode(L"3:40 PM - 4:00 PM"));
			System::Windows::Forms::TreeNode^  treeNode160 = (gcnew System::Windows::Forms::TreeNode(L"3 PM - 4 PM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode157,
					treeNode158, treeNode159
			}));
			System::Windows::Forms::TreeNode^  treeNode161 = (gcnew System::Windows::Forms::TreeNode(L"4:00 PM - 4:20 PM"));
			System::Windows::Forms::TreeNode^  treeNode162 = (gcnew System::Windows::Forms::TreeNode(L"4:20 PM - 4:40 PM"));
			System::Windows::Forms::TreeNode^  treeNode163 = (gcnew System::Windows::Forms::TreeNode(L"4:40 PM - 5:00 PM"));
			System::Windows::Forms::TreeNode^  treeNode164 = (gcnew System::Windows::Forms::TreeNode(L"4 PM - 5 PM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode161,
					treeNode162, treeNode163
			}));
			System::Windows::Forms::TreeNode^  treeNode165 = (gcnew System::Windows::Forms::TreeNode(L"5:00 PM - 5:20 PM"));
			System::Windows::Forms::TreeNode^  treeNode166 = (gcnew System::Windows::Forms::TreeNode(L"5:20 PM - 5:40 PM"));
			System::Windows::Forms::TreeNode^  treeNode167 = (gcnew System::Windows::Forms::TreeNode(L"5:40 PM - 6:00 PM"));
			System::Windows::Forms::TreeNode^  treeNode168 = (gcnew System::Windows::Forms::TreeNode(L"5 PM - 6 PM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode165,
					treeNode166, treeNode167
			}));
			System::Windows::Forms::TreeNode^  treeNode169 = (gcnew System::Windows::Forms::TreeNode(L"6:00 PM - 6:20 PM"));
			System::Windows::Forms::TreeNode^  treeNode170 = (gcnew System::Windows::Forms::TreeNode(L"6:20 PM - 6:40 PM"));
			System::Windows::Forms::TreeNode^  treeNode171 = (gcnew System::Windows::Forms::TreeNode(L"6:40 PM - 7:00 PM"));
			System::Windows::Forms::TreeNode^  treeNode172 = (gcnew System::Windows::Forms::TreeNode(L"6 PM - 7 PM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode169,
					treeNode170, treeNode171
			}));
			System::Windows::Forms::TreeNode^  treeNode173 = (gcnew System::Windows::Forms::TreeNode(L"7:00 PM - 7:20 PM"));
			System::Windows::Forms::TreeNode^  treeNode174 = (gcnew System::Windows::Forms::TreeNode(L"7:20 PM - 7:40 PM"));
			System::Windows::Forms::TreeNode^  treeNode175 = (gcnew System::Windows::Forms::TreeNode(L"7:40 PM - 8:00 PM"));
			System::Windows::Forms::TreeNode^  treeNode176 = (gcnew System::Windows::Forms::TreeNode(L"7 PM - 8 PM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode173,
					treeNode174, treeNode175
			}));
			System::Windows::Forms::TreeNode^  treeNode177 = (gcnew System::Windows::Forms::TreeNode(L"8:00 PM - 8:20 PM"));
			System::Windows::Forms::TreeNode^  treeNode178 = (gcnew System::Windows::Forms::TreeNode(L"8:20 PM - 8:40 PM"));
			System::Windows::Forms::TreeNode^  treeNode179 = (gcnew System::Windows::Forms::TreeNode(L"8:40 PM - 9:00 PM"));
			System::Windows::Forms::TreeNode^  treeNode180 = (gcnew System::Windows::Forms::TreeNode(L"8 PM - 9 PM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode177,
					treeNode178, treeNode179
			}));
			System::Windows::Forms::TreeNode^  treeNode181 = (gcnew System::Windows::Forms::TreeNode(L"9:00 PM - 9:20 PM"));
			System::Windows::Forms::TreeNode^  treeNode182 = (gcnew System::Windows::Forms::TreeNode(L"9:20 PM - 9:40 PM"));
			System::Windows::Forms::TreeNode^  treeNode183 = (gcnew System::Windows::Forms::TreeNode(L"9:40 PM - 10:00 PM"));
			System::Windows::Forms::TreeNode^  treeNode184 = (gcnew System::Windows::Forms::TreeNode(L"9 PM - 10 PM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode181,
					treeNode182, treeNode183
			}));
			System::Windows::Forms::TreeNode^  treeNode185 = (gcnew System::Windows::Forms::TreeNode(L"10:00 PM - 10:20 PM"));
			System::Windows::Forms::TreeNode^  treeNode186 = (gcnew System::Windows::Forms::TreeNode(L"10:20 PM - 10:40 PM"));
			System::Windows::Forms::TreeNode^  treeNode187 = (gcnew System::Windows::Forms::TreeNode(L"10:40 PM - 11:00 PM"));
			System::Windows::Forms::TreeNode^  treeNode188 = (gcnew System::Windows::Forms::TreeNode(L"10 PM - 11 PM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode185,
					treeNode186, treeNode187
			}));
			System::Windows::Forms::TreeNode^  treeNode189 = (gcnew System::Windows::Forms::TreeNode(L"11:00 PM - 11:20 PM"));
			System::Windows::Forms::TreeNode^  treeNode190 = (gcnew System::Windows::Forms::TreeNode(L"11:20 PM - 11:40 PM"));
			System::Windows::Forms::TreeNode^  treeNode191 = (gcnew System::Windows::Forms::TreeNode(L"11:40 PM - 12:00 AM"));
			System::Windows::Forms::TreeNode^  treeNode192 = (gcnew System::Windows::Forms::TreeNode(L"11 PM - 12 AM", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode189,
					treeNode190, treeNode191
			}));
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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->lblLocation = (gcnew System::Windows::Forms::Label());
			this->lblNote = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->lblCreateEvent = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblTime = (gcnew System::Windows::Forms::Label());
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->rbtn12Hr = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn24Hr = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->grpAvailability = (gcnew System::Windows::Forms::GroupBox());
			this->trv24Hr = (gcnew System::Windows::Forms::TreeView());
			this->trv12Hr = (gcnew System::Windows::Forms::TreeView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->grpLogin->SuspendLayout();
			this->grpCreateEvent->SuspendLayout();
			this->grpAdmin->SuspendLayout();
			this->grpUser->SuspendLayout();
			this->grpViewSchedule->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->grpAvailability->SuspendLayout();
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
			this->grpLogin->Location = System::Drawing::Point(341, 74);
			this->grpLogin->Name = L"grpLogin";
			this->grpLogin->Size = System::Drawing::Size(200, 277);
			this->grpLogin->TabIndex = 3;
			this->grpLogin->TabStop = false;
			this->grpLogin->Visible = false;
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
			this->grpCreateEvent->Controls->Add(this->dateTimePicker1);
			this->grpCreateEvent->Controls->Add(this->lblDate);
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
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"hh:mm tt";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(68, 150);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->ShowUpDown = true;
			this->dateTimePicker2->Size = System::Drawing::Size(227, 20);
			this->dateTimePicker2->TabIndex = 8;
			this->dateTimePicker2->Value = System::DateTime(2018, 1, 30, 12, 0, 0, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker2_ValueChanged);
			// 
			// lblTime
			// 
			this->lblTime->AutoSize = true;
			this->lblTime->Location = System::Drawing::Point(-2, 153);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(33, 13);
			this->lblTime->TabIndex = 5;
			this->lblTime->Text = L"Time:";
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
			this->grpViewSchedule->Controls->Add(this->dateTimePicker2);
			this->grpViewSchedule->Controls->Add(this->lblTime);
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Location = System::Drawing::Point(341, 74);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 148);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Enter Your Name:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(59, 102);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Login";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(49, 70);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 1;
			// 
			// rbtn12Hr
			// 
			this->rbtn12Hr->AutoSize = true;
			this->rbtn12Hr->Location = System::Drawing::Point(30, 67);
			this->rbtn12Hr->Name = L"rbtn12Hr";
			this->rbtn12Hr->Size = System::Drawing::Size(63, 17);
			this->rbtn12Hr->TabIndex = 12;
			this->rbtn12Hr->TabStop = true;
			this->rbtn12Hr->Text = L"12 Hour";
			this->rbtn12Hr->UseVisualStyleBackColor = true;
			this->rbtn12Hr->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn12Hr_CheckedChanged);
			// 
			// rbtn24Hr
			// 
			this->rbtn24Hr->AutoSize = true;
			this->rbtn24Hr->Location = System::Drawing::Point(30, 90);
			this->rbtn24Hr->Name = L"rbtn24Hr";
			this->rbtn24Hr->Size = System::Drawing::Size(63, 17);
			this->rbtn24Hr->TabIndex = 13;
			this->rbtn24Hr->TabStop = true;
			this->rbtn24Hr->Text = L"24 Hour";
			this->rbtn24Hr->UseVisualStyleBackColor = true;
			this->rbtn24Hr->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn24Hr_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Location = System::Drawing::Point(341, 74);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 148);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Visible = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(59, 45);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Admin Mode";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(59, 89);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 0;
			this->button5->Text = L"User Mode";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// grpAvailability
			// 
			this->grpAvailability->Controls->Add(this->trv24Hr);
			this->grpAvailability->Controls->Add(this->trv12Hr);
			this->grpAvailability->Controls->Add(this->button8);
			this->grpAvailability->Controls->Add(this->label7);
			this->grpAvailability->Controls->Add(this->rbtn24Hr);
			this->grpAvailability->Controls->Add(this->rbtn12Hr);
			this->grpAvailability->Location = System::Drawing::Point(170, 21);
			this->grpAvailability->Name = L"grpAvailability";
			this->grpAvailability->Size = System::Drawing::Size(472, 441);
			this->grpAvailability->TabIndex = 13;
			this->grpAvailability->TabStop = false;
			this->grpAvailability->Visible = false;
			// 
			// trv24Hr
			// 
			this->trv24Hr->CheckBoxes = true;
			this->trv24Hr->Location = System::Drawing::Point(121, 53);
			this->trv24Hr->Name = L"trv24Hr";
			treeNode1->Name = L"00:00-00:20";
			treeNode1->Text = L"00:00 - 00:20";
			treeNode2->Name = L"00:20-00:40";
			treeNode2->Text = L"00:20 - 00:40";
			treeNode3->Name = L"00:40-01:00";
			treeNode3->Text = L"00:40 - 01:00";
			treeNode4->Name = L"00:00-01:00";
			treeNode4->Text = L"00:00 - 01:00";
			treeNode5->Name = L"01:00-01:20";
			treeNode5->Text = L"01:00 - 01:20";
			treeNode6->Name = L"01:20-01:40";
			treeNode6->Text = L"01:20 - 01:40";
			treeNode7->Name = L"01:40-02:00";
			treeNode7->Text = L"01:40 - 02:00";
			treeNode8->Name = L"01:00-02:00";
			treeNode8->Text = L"01:00 - 02:00";
			treeNode9->Name = L"02:00-02:20";
			treeNode9->Text = L"02:00 - 02:20";
			treeNode10->Name = L"02:20-02:40";
			treeNode10->Text = L"02:20 - 02:40";
			treeNode11->Name = L"02:40-03:00";
			treeNode11->Text = L"02:40 - 03:00";
			treeNode12->Name = L"02:00-03:00";
			treeNode12->Text = L"02:00 - 03:00";
			treeNode13->Name = L"03:00-03:20";
			treeNode13->Text = L"03:00 - 03:20";
			treeNode14->Name = L"03:20-03:40";
			treeNode14->Text = L"03:20 - 03:40";
			treeNode15->Name = L"03:40-04:00";
			treeNode15->Text = L"03:40 - 04:00";
			treeNode16->Name = L"03:00-04:00";
			treeNode16->Text = L"03:00 - 04:00";
			treeNode17->Name = L"04:00-04:20";
			treeNode17->Text = L"04:00 - 04:20";
			treeNode18->Name = L"04:20-04:40";
			treeNode18->Text = L"04:20 - 04:40";
			treeNode19->Name = L"04:40-05:00";
			treeNode19->Text = L"04:40 - 05:00";
			treeNode20->Name = L"04:00-05:00";
			treeNode20->Text = L"04:00 - 05:00";
			treeNode21->Name = L"05:00-05:20";
			treeNode21->Text = L"05:00 - 05:20";
			treeNode22->Name = L"05:20-05:40";
			treeNode22->Text = L"05:20 - 05:40";
			treeNode23->Name = L"05:40-06:00";
			treeNode23->Text = L"05:40 - 06:00";
			treeNode24->Name = L"05:00-06:00";
			treeNode24->Text = L"05:00 - 06:00";
			treeNode25->Name = L"06:00-06:20";
			treeNode25->Text = L"06:00 - 06:20";
			treeNode26->Name = L"06:20-06:40";
			treeNode26->Text = L"06:20 - 06:40";
			treeNode27->Name = L"06:40-07:00";
			treeNode27->Text = L"06:40 - 07:00";
			treeNode28->Name = L"06:00-07:00";
			treeNode28->Text = L"06:00 - 07:00";
			treeNode29->Name = L"07:00-07:20";
			treeNode29->Text = L"07:00 - 07:20";
			treeNode30->Name = L"07:20-07:40";
			treeNode30->Text = L"07:20 - 07:40";
			treeNode31->Name = L"07:40-08:00";
			treeNode31->Text = L"07:40 - 08:00";
			treeNode32->Name = L"07:00-08:00";
			treeNode32->Text = L"07:00 - 08:00";
			treeNode33->Name = L"08:00-08:20";
			treeNode33->Text = L"08:00 - 08:20";
			treeNode34->Name = L"08:20-08:40";
			treeNode34->Text = L"08:20 - 08:40";
			treeNode35->Name = L"08:40-09:00";
			treeNode35->Text = L"08:40 - 09:00";
			treeNode36->Name = L"08:00-09:00";
			treeNode36->Text = L"08:00 - 09:00";
			treeNode37->Name = L"09:00-09:20";
			treeNode37->Text = L"09:00 - 09:20";
			treeNode38->Name = L"09:20-09:40";
			treeNode38->Text = L"09:20 - 09:40";
			treeNode39->Name = L"09:40-10:00";
			treeNode39->Text = L"09:40 - 10:00";
			treeNode40->Name = L"09:00-10:00";
			treeNode40->Text = L"09:00 - 10:00";
			treeNode41->Name = L"10:00-10:20";
			treeNode41->Text = L"10:00 - 10:20";
			treeNode42->Name = L"10:20-10:40";
			treeNode42->Text = L"10:20 - 10:40";
			treeNode43->Name = L"10:40-11:00";
			treeNode43->Text = L"10:40 - 11:00";
			treeNode44->Name = L"10:00-11:00";
			treeNode44->Text = L"10:00 - 11:00";
			treeNode45->Name = L"11:00-11:20";
			treeNode45->Text = L"11:00 - 11:20";
			treeNode46->Name = L"11:20-11:40";
			treeNode46->Text = L"11:20 - 11:40";
			treeNode47->Name = L"11:40-12:00";
			treeNode47->Text = L"11:40 - 12:00";
			treeNode48->Name = L"11:00-12:00";
			treeNode48->Text = L"11:00 - 12:00";
			treeNode49->Name = L"12:00-12:20";
			treeNode49->Text = L"12:00-12:20";
			treeNode50->Name = L"12:20-12:40";
			treeNode50->Text = L"12:20 - 12:40";
			treeNode51->Name = L"12:40-13:00";
			treeNode51->Text = L"12:40 - 13:00";
			treeNode52->Name = L"12:00-13:00";
			treeNode52->Text = L"12:00 - 13:00";
			treeNode53->Name = L"13:00-13:20";
			treeNode53->Text = L"13:00 - 13:20";
			treeNode54->Name = L"13:20-13:40";
			treeNode54->Text = L"13:20 - 13:40";
			treeNode55->Name = L"13:40-14:00";
			treeNode55->Text = L"13:40 - 14:00";
			treeNode56->Name = L"13:00-14:00";
			treeNode56->Text = L"13:00 - 14:00";
			treeNode57->Name = L"14:00-14:20";
			treeNode57->Text = L"14:00 - 14:20";
			treeNode58->Name = L"14:20-14:40";
			treeNode58->Text = L"14:20 - 14:40";
			treeNode59->Name = L"14:40-15:00";
			treeNode59->Text = L"14:40 - 15:00";
			treeNode60->Name = L"14:00-15:00";
			treeNode60->Text = L"14:00 - 15:00";
			treeNode61->Name = L"15:00-15:20";
			treeNode61->Text = L"15:00 - 15:20";
			treeNode62->Name = L"15:20-15:40";
			treeNode62->Text = L"15:20 - 15:40";
			treeNode63->Name = L"15:40-16:00";
			treeNode63->Text = L"15:40 - 16:00";
			treeNode64->Name = L"15:00-16:00";
			treeNode64->Text = L"15:00 - 16:00";
			treeNode65->Name = L"16:00-16:20";
			treeNode65->Text = L"16:00 - 16:20";
			treeNode66->Name = L"16:20-16:40";
			treeNode66->Text = L"16:20 - 16:40";
			treeNode67->Name = L"16:40-17:00";
			treeNode67->Text = L"16:40 - 17:00";
			treeNode68->Name = L"16:00-17:00";
			treeNode68->Text = L"16:00 - 17:00";
			treeNode69->Name = L"17:00-17:20";
			treeNode69->Text = L"17:00 - 17:20";
			treeNode70->Name = L"17:20-17:40";
			treeNode70->Text = L"17:20 - 17:40";
			treeNode71->Name = L"17:40-18:00";
			treeNode71->Text = L"17:40 - 18:00";
			treeNode72->Name = L"17:00-18:00";
			treeNode72->Text = L"17:00 - 18:00";
			treeNode73->Name = L"18:00-18:20";
			treeNode73->Text = L"18:00 - 18:20";
			treeNode74->Name = L"18:20-18:40";
			treeNode74->Text = L"18:20 - 18:40";
			treeNode75->Name = L"18:40-19:00";
			treeNode75->Text = L"18:40 - 19:00";
			treeNode76->Name = L"18:00-19:00";
			treeNode76->Text = L"18:00 - 19:00";
			treeNode77->Name = L"19:00-19:20";
			treeNode77->Text = L"19:00 - 19:20";
			treeNode78->Name = L"19:20-19:40";
			treeNode78->Text = L"19:20 - 19:40";
			treeNode79->Name = L"19:40-20:00";
			treeNode79->Text = L"19:40 - 20:00";
			treeNode80->Name = L"19:00-20:00";
			treeNode80->Text = L"19:00 - 20:00";
			treeNode81->Name = L"20:00-20:20";
			treeNode81->Text = L"20:00 - 20:20";
			treeNode82->Name = L"20:20-20:40";
			treeNode82->Text = L"20:20 - 20:40";
			treeNode83->Name = L"20:40-21:00";
			treeNode83->Text = L"20:40 - 21:00";
			treeNode84->Name = L"20:00-21:00";
			treeNode84->Text = L"20:00 - 21:00";
			treeNode85->Name = L"21:00-21:20";
			treeNode85->Text = L"21:00 - 21:20";
			treeNode86->Name = L"21:20-21:40";
			treeNode86->Text = L"21:20 - 21:40";
			treeNode87->Name = L"21:40-22:00";
			treeNode87->Text = L"21:40 - 22:00";
			treeNode88->Name = L"21:00-22:00";
			treeNode88->Text = L"21:00 - 22:00";
			treeNode89->Name = L"22:00-22:20";
			treeNode89->Text = L"22:00 - 22:20";
			treeNode90->Name = L"22:20-22:40";
			treeNode90->Text = L"22:20 - 22:40";
			treeNode91->Name = L"22:40-23:00";
			treeNode91->Text = L"22:40 - 23:00";
			treeNode92->Name = L"22:00-23:00";
			treeNode92->Text = L"22:00 - 23:00";
			treeNode93->Name = L"23:00-23:20";
			treeNode93->Text = L"23:00 - 23:20";
			treeNode94->Name = L"23:20-23:40";
			treeNode94->Text = L"23:20 - 23:40";
			treeNode95->Name = L"23:40-00:00";
			treeNode95->Text = L"23:40 - 00:00";
			treeNode96->Name = L"23:00-24:00";
			treeNode96->Text = L"23:00 - 00:00";
			this->trv24Hr->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(24) {
				treeNode4, treeNode8, treeNode12,
					treeNode16, treeNode20, treeNode24, treeNode28, treeNode32, treeNode36, treeNode40, treeNode44, treeNode48, treeNode52, treeNode56,
					treeNode60, treeNode64, treeNode68, treeNode72, treeNode76, treeNode80, treeNode84, treeNode88, treeNode92, treeNode96
			});
			this->trv24Hr->Size = System::Drawing::Size(281, 343);
			this->trv24Hr->TabIndex = 15;
			// 
			// trv12Hr
			// 
			this->trv12Hr->CheckBoxes = true;
			this->trv12Hr->Location = System::Drawing::Point(121, 53);
			this->trv12Hr->Name = L"trv12Hr";
			treeNode97->Name = L"12-12:20AM";
			treeNode97->Text = L"12:00 AM - 12:20 AM";
			treeNode98->Name = L"12:20-12:40AM";
			treeNode98->Text = L"12:20 AM - 12:40 AM";
			treeNode99->Name = L"12:40-1AM";
			treeNode99->Text = L"12:40 AM - 1:00 AM";
			treeNode100->Name = L"12-1AM";
			treeNode100->Text = L"12 AM - 1AM";
			treeNode101->Name = L"1-1:20AM";
			treeNode101->Text = L"1:00 AM - 1:20 AM";
			treeNode102->Name = L"1:20-1:40AM";
			treeNode102->Text = L"1:20 AM - 1:40 AM";
			treeNode103->Name = L"1:40-2AM";
			treeNode103->Text = L"1:40 AM - 2:00 AM";
			treeNode104->Name = L"1-2AM";
			treeNode104->Text = L"1 AM - 2 AM";
			treeNode105->Name = L"2:00-2:20AM";
			treeNode105->Text = L"2:00 AM - 2:20 AM";
			treeNode106->Name = L"2:20AM-2:40AM";
			treeNode106->Text = L"2:20 AM - 2:40 AM";
			treeNode107->Name = L"2:40AM-3:00AM";
			treeNode107->Text = L"2:40 AM - 3:00 AM";
			treeNode108->Name = L"2-3AM";
			treeNode108->Text = L"2 AM - 3 AM";
			treeNode109->Name = L"3:00AM-3:20AM";
			treeNode109->Text = L"3:00 AM - 3:20 AM";
			treeNode110->Name = L"3:20AM-3:40AM";
			treeNode110->Text = L"3:20 AM - 3:40 AM";
			treeNode111->Name = L"3:40AM-4:00AM";
			treeNode111->Text = L"3:40 AM - 4:00 AM";
			treeNode112->Name = L"3-4AM";
			treeNode112->Text = L"3 AM - 4 AM";
			treeNode113->Name = L"4:00AM-4:20AM";
			treeNode113->Text = L"4:00 AM - 4:20 AM";
			treeNode114->Name = L"4:20AM-4:40AM";
			treeNode114->Text = L"4:20 AM - 4:40 AM";
			treeNode115->Name = L"4:40AM-5:00AM";
			treeNode115->Text = L"4:40 AM - 5:00 AM";
			treeNode116->Name = L"4-5AM";
			treeNode116->Text = L"4 AM - 5 AM";
			treeNode117->Name = L"5:00AM-5:20AM";
			treeNode117->Text = L"5:00 AM - 5:20 AM";
			treeNode118->Name = L"5:20AM-5:40AM";
			treeNode118->Text = L"5:20 AM - 5:40 AM";
			treeNode119->Name = L"5:40AM-6:00AM";
			treeNode119->Text = L"5:40 AM - 6:00 AM";
			treeNode120->Name = L"5AM-6AM";
			treeNode120->Text = L"5AM - 6 AM";
			treeNode121->Name = L"6:00AM-6:20AM";
			treeNode121->Text = L"6:00 AM - 6:20 AM";
			treeNode122->Name = L"6:20AM-6:40AM";
			treeNode122->Text = L"6:20 AM - 6:40 AM";
			treeNode123->Name = L"6:40AM-7:00AM";
			treeNode123->Text = L"6:40 AM - 7:00 AM";
			treeNode124->Name = L"6AM-7AM";
			treeNode124->Text = L"6 AM - 7 AM";
			treeNode125->Name = L"7:00AM-7:20AM";
			treeNode125->Text = L"7:00 AM - 7:20 AM";
			treeNode126->Name = L"7:20AM-7:40AM";
			treeNode126->Text = L"7:20 AM - 7:40 AM";
			treeNode127->Name = L"7:40AM-8:00AM";
			treeNode127->Text = L"7:40 AM - 8:00 AM";
			treeNode128->Name = L"7-8AM";
			treeNode128->Text = L"7 AM - 8 AM";
			treeNode129->Name = L"8:00AM-8:20AM";
			treeNode129->Text = L"8:00 AM - 8:20 AM";
			treeNode130->Name = L"8:20AM-8:40AM";
			treeNode130->Text = L"8:20 AM - 8:40 AM";
			treeNode131->Name = L"8:40AM-9:00AM";
			treeNode131->Text = L"8:40 AM - 9:00 AM";
			treeNode132->Name = L"8-9AM";
			treeNode132->Text = L"8 AM - 9 AM";
			treeNode133->Name = L"9:00AM-9:20AM";
			treeNode133->Text = L"9:00 AM - 9:20 AM";
			treeNode134->Name = L"9:20AM-9:40AM";
			treeNode134->Text = L"9:20 AM - 9:40 AM";
			treeNode135->Name = L"9:40AM-10:00AM";
			treeNode135->Text = L"9:40 AM - 10:00 AM";
			treeNode136->Name = L"9-10AM";
			treeNode136->Text = L"9 AM - 10 AM";
			treeNode137->Name = L"10:00AM-10:20AM";
			treeNode137->Text = L"10:00 AM - 10:20 AM";
			treeNode138->Name = L"10:20AM-10:40AM";
			treeNode138->Text = L"10:20 AM - 10:40 AM";
			treeNode139->Name = L"10:40AM-11:00AM";
			treeNode139->Text = L"10:40 AM - 11:00 AM";
			treeNode140->Name = L"10-11AM";
			treeNode140->Text = L"10 AM - 11 AM";
			treeNode141->Name = L"11:00AM-11:20AM";
			treeNode141->Text = L"11:00 AM - 11:20 AM";
			treeNode142->Name = L"11:20AM-11:40AM";
			treeNode142->Text = L"11:20 AM - 11:40 AM";
			treeNode143->Name = L"11:40AM-12:00PM";
			treeNode143->Text = L"11:40 AM - 12:00 PM";
			treeNode144->Name = L"11-12PM";
			treeNode144->Text = L"11 PM - 12 PM";
			treeNode145->Name = L"12:00PM-12:20PM";
			treeNode145->Text = L"12:00 PM - 12:20 PM";
			treeNode146->Name = L"12:20PM-12:40PM";
			treeNode146->Text = L"12:20 PM - 12:40 PM";
			treeNode147->Name = L"12:40PM-1:00PM";
			treeNode147->Text = L"12:40 PM - 1:00 PM";
			treeNode148->Name = L"12-1PM";
			treeNode148->Text = L"12 PM - 1 PM";
			treeNode149->Name = L"1:00PM-1:20PM";
			treeNode149->Text = L"1:00 PM - 1:20 PM";
			treeNode150->Name = L"1:20PM-1:40PM";
			treeNode150->Text = L"1:20 PM - 1:40 PM";
			treeNode151->Name = L"1:40PM-2:00PM";
			treeNode151->Text = L"1:40 PM - 2:00 PM";
			treeNode152->Name = L"1-2PM";
			treeNode152->Text = L"1 PM - 2 PM";
			treeNode153->Name = L"2:00PM-2:20PM";
			treeNode153->Text = L"2:00 PM - 2:20 PM";
			treeNode154->Name = L"2:20PM-2:40PM";
			treeNode154->Text = L"2:20 PM - 2:40 PM";
			treeNode155->Name = L"2:40PM-3:00PM";
			treeNode155->Text = L"2:40 PM - 3:00 PM";
			treeNode156->Name = L"3PM";
			treeNode156->Text = L"2 PM - 3 PM";
			treeNode157->Name = L"3:00PM-3:20PM";
			treeNode157->Text = L"3:00 PM - 3:20 PM";
			treeNode158->Name = L"3:20PM-3:40PM";
			treeNode158->Text = L"3:20 PM - 3:40 PM";
			treeNode159->Name = L"3:40PM-4:00PM";
			treeNode159->Text = L"3:40 PM - 4:00 PM";
			treeNode160->Name = L"4PM";
			treeNode160->Text = L"3 PM - 4 PM";
			treeNode161->Name = L"4:00PM-4:20PM";
			treeNode161->Text = L"4:00 PM - 4:20 PM";
			treeNode162->Name = L"4:20PM-4:40PM";
			treeNode162->Text = L"4:20 PM - 4:40 PM";
			treeNode163->Name = L"4:40PM-5:00PM";
			treeNode163->Text = L"4:40 PM - 5:00 PM";
			treeNode164->Name = L"5PM";
			treeNode164->Text = L"4 PM - 5 PM";
			treeNode165->Name = L"5:00PM-5:20PM";
			treeNode165->Text = L"5:00 PM - 5:20 PM";
			treeNode166->Name = L"5:20PM-5:40PM";
			treeNode166->Text = L"5:20 PM - 5:40 PM";
			treeNode167->Name = L"5:40PM-6:00PM";
			treeNode167->Text = L"5:40 PM - 6:00 PM";
			treeNode168->Name = L"6PM";
			treeNode168->Text = L"5 PM - 6 PM";
			treeNode169->Name = L"6:00PM-6:20PM";
			treeNode169->Text = L"6:00 PM - 6:20 PM";
			treeNode170->Name = L"6:20PM-6:40PM";
			treeNode170->Text = L"6:20 PM - 6:40 PM";
			treeNode171->Name = L"6:40PM-7:00PM";
			treeNode171->Text = L"6:40 PM - 7:00 PM";
			treeNode172->Name = L"7PM";
			treeNode172->Text = L"6 PM - 7 PM";
			treeNode173->Name = L"7:00PM-7:20PM";
			treeNode173->Text = L"7:00 PM - 7:20 PM";
			treeNode174->Name = L"7:20PM-7:40PM";
			treeNode174->Text = L"7:20 PM - 7:40 PM";
			treeNode175->Name = L"7:40PM-8:00PM";
			treeNode175->Text = L"7:40 PM - 8:00 PM";
			treeNode176->Name = L"8PM";
			treeNode176->Text = L"7 PM - 8 PM";
			treeNode177->Name = L"8:00PM-8:20PM";
			treeNode177->Text = L"8:00 PM - 8:20 PM";
			treeNode178->Name = L"8:20PM-8:40PM";
			treeNode178->Text = L"8:20 PM - 8:40 PM";
			treeNode179->Name = L"8:40PM-9:00PM";
			treeNode179->Text = L"8:40 PM - 9:00 PM";
			treeNode180->Name = L"9PM";
			treeNode180->Text = L"8 PM - 9 PM";
			treeNode181->Name = L"9:00PM-9:20PM";
			treeNode181->Text = L"9:00 PM - 9:20 PM";
			treeNode182->Name = L"9:20PM-9:40PM";
			treeNode182->Text = L"9:20 PM - 9:40 PM";
			treeNode183->Name = L"9:40PM-10:00PM";
			treeNode183->Text = L"9:40 PM - 10:00 PM";
			treeNode184->Name = L"10PM";
			treeNode184->Text = L"9 PM - 10 PM";
			treeNode185->Name = L"10:00PM-10:20PM";
			treeNode185->Text = L"10:00 PM - 10:20 PM";
			treeNode186->Name = L"10:20PM-10:40PM";
			treeNode186->Text = L"10:20 PM - 10:40 PM";
			treeNode187->Name = L"10:40PM-11:00PM";
			treeNode187->Text = L"10:40 PM - 11:00 PM";
			treeNode188->Name = L"11PM";
			treeNode188->Text = L"10 PM - 11 PM";
			treeNode189->Name = L"11:00PM-11:20PM";
			treeNode189->Text = L"11:00 PM - 11:20 PM";
			treeNode190->Name = L"11:20PM-11:40PM";
			treeNode190->Text = L"11:20 PM - 11:40 PM";
			treeNode191->Name = L"11:40PM-12:00AM";
			treeNode191->Text = L"11:40 PM - 12:00 AM";
			treeNode192->Name = L"11PM-12AM";
			treeNode192->Text = L"11 PM - 12 AM";
			this->trv12Hr->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(24) {
				treeNode100, treeNode104, treeNode108,
					treeNode112, treeNode116, treeNode120, treeNode124, treeNode128, treeNode132, treeNode136, treeNode140, treeNode144, treeNode148,
					treeNode152, treeNode156, treeNode160, treeNode164, treeNode168, treeNode172, treeNode176, treeNode180, treeNode184, treeNode188,
					treeNode192
			});
			this->trv12Hr->Size = System::Drawing::Size(281, 343);
			this->trv12Hr->TabIndex = 14;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(116, 403);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(103, 23);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Submit";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(131, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Create Event:";
			// 
			// MyForm
			// 
			this->AcceptButton = this->btnLogin;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1043, 572);
			this->Controls->Add(this->grpAvailability);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->grpViewSchedule);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->grpLogin);
			this->Controls->Add(this->grpUser);
			this->Controls->Add(this->grpAdmin);
			this->Controls->Add(this->grpCreateEvent);
			this->Controls->Add(this->groupBox1);
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
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->grpAvailability->ResumeLayout(false);
			this->grpAvailability->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

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
		if (txtUser->Text == "admin")
		{
			if (txtPassword->Text == "password")
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
	grpAvailability->Visible = true;
	grpCreateEvent->Visible = false;
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	grpAdmin->Visible = true;
	groupBox2->Visible = false;
	
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBox1->Visible = false;
	groupBox2->Visible = true;
}
private: System::Void rbtn12Hr_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	trv12Hr->Visible = true;
	trv24Hr->Visible = false;
}
private: System::Void rbtn24Hr_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	trv24Hr->Visible = true;
	trv12Hr->Visible = false;
}
};
}
