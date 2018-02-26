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
	private: System::Windows::Forms::RadioButton^  rbtn12Hr;
	private: System::Windows::Forms::RadioButton^  rbtn24Hr;
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
	private: System::Windows::Forms::Panel^  pnl5_6AM;
	private: System::Windows::Forms::CheckBox^  chk540_600AM;
	private: System::Windows::Forms::CheckBox^  chk520_540AM;
	private: System::Windows::Forms::CheckBox^  chk500_520AM;
	private: System::Windows::Forms::Panel^  pnl12Hr;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::RadioButton^  rbtn6_7AM;
	private: System::Windows::Forms::RadioButton^  rbtn5_6AM;
	private: System::Windows::Forms::Panel^  pnl6_7AM;
	private: System::Windows::Forms::CheckBox^  chk640_700AM;
	private: System::Windows::Forms::CheckBox^  chk620_640AM;
	private: System::Windows::Forms::CheckBox^  chk600_620AM;
	private: System::Windows::Forms::RadioButton^  rbtn7_8AM;
	private: System::Windows::Forms::Panel^  pnl7_8AM;
	private: System::Windows::Forms::CheckBox^  chk740_800AM;
	private: System::Windows::Forms::CheckBox^  chk720_740AM;
	private: System::Windows::Forms::CheckBox^  chk700_720AM;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RadioButton^  rbtn11_12AM;
	private: System::Windows::Forms::RadioButton^  rbtn10_11PM;
	private: System::Windows::Forms::RadioButton^  rbtn9_10PM;
	private: System::Windows::Forms::RadioButton^  rbtn8_9PM;
	private: System::Windows::Forms::RadioButton^  rbtn7_8PM;
	private: System::Windows::Forms::RadioButton^  rbtn6_7PM;
	private: System::Windows::Forms::RadioButton^  rbtn5_6PM;
	private: System::Windows::Forms::RadioButton^  rbtn4_5PM;
	private: System::Windows::Forms::RadioButton^  rbtn3_4PM;
	private: System::Windows::Forms::RadioButton^  rbtn2_3PM;
	private: System::Windows::Forms::RadioButton^  rbtn1_2PM;
	private: System::Windows::Forms::RadioButton^  rbtn11_12PM;
	private: System::Windows::Forms::RadioButton^  rbtn10_11AM;
	private: System::Windows::Forms::RadioButton^  rbtn9_10AM;
	private: System::Windows::Forms::RadioButton^  rbtn8_9AM;
	private: System::Windows::Forms::Panel^  pnl8_9AM;
	private: System::Windows::Forms::CheckBox^  chk840_900AM;
	private: System::Windows::Forms::CheckBox^  chk820_840AM;
	private: System::Windows::Forms::CheckBox^  chk800_820AM;
	private: System::Windows::Forms::Panel^  pnl9_10AM;
	private: System::Windows::Forms::CheckBox^  chk940_10000AM;
	private: System::Windows::Forms::CheckBox^  chk920_940AM;
	private: System::Windows::Forms::CheckBox^  chk900_920AM;
	private: System::Windows::Forms::Panel^  pnl1_2PM;
	private: System::Windows::Forms::Panel^  pnl11_12PM;
	private: System::Windows::Forms::Panel^  pnl10_11AM;
	private: System::Windows::Forms::CheckBox^  chk1040_1100AM;
	private: System::Windows::Forms::CheckBox^  chk1020_1040AM;
	private: System::Windows::Forms::CheckBox^  chk1000_1020AM;
	private: System::Windows::Forms::CheckBox^  chk1140_1200PM;
	private: System::Windows::Forms::CheckBox^  chk1120_1140AM;
	private: System::Windows::Forms::CheckBox^  chk1100_1120AM;
	private: System::Windows::Forms::CheckBox^  chk140_200PM;
	private: System::Windows::Forms::CheckBox^  chk120_140PM;
	private: System::Windows::Forms::CheckBox^  chk100_120PM;
	private: System::Windows::Forms::Panel^  pnl6_7PM;
	private: System::Windows::Forms::CheckBox^  chk640_700PM;
	private: System::Windows::Forms::CheckBox^  chk620_640PM;
	private: System::Windows::Forms::CheckBox^  chk600_620PM;
	private: System::Windows::Forms::Panel^  pnl5_6PM;
	private: System::Windows::Forms::CheckBox^  chk540_600PM;
	private: System::Windows::Forms::CheckBox^  chk520_540PM;
	private: System::Windows::Forms::CheckBox^  chk500_520PM;
	private: System::Windows::Forms::Panel^  pnl4_5PM;
	private: System::Windows::Forms::CheckBox^  chk440_500PM;
	private: System::Windows::Forms::CheckBox^  chk420_440PM;
	private: System::Windows::Forms::CheckBox^  chk400_420PM;
	private: System::Windows::Forms::Panel^  pnl3_4PM;
	private: System::Windows::Forms::CheckBox^  chk340_400PM;
	private: System::Windows::Forms::CheckBox^  chk320_340PM;
	private: System::Windows::Forms::CheckBox^  chk300_320PM;
	private: System::Windows::Forms::Panel^  pnl2_3PM;
	private: System::Windows::Forms::CheckBox^  chk240_300PM;
	private: System::Windows::Forms::CheckBox^  chk220_240PM;
	private: System::Windows::Forms::CheckBox^  chk200_220PM;
	private: System::Windows::Forms::Panel^  pnl7_8PM;
	private: System::Windows::Forms::CheckBox^  chk740_800PM;
	private: System::Windows::Forms::CheckBox^  chk720_740PM;
	private: System::Windows::Forms::CheckBox^  chk700_720PM;
	private: System::Windows::Forms::Panel^  pnl8_9PM;
	private: System::Windows::Forms::CheckBox^  chk840_900PM;
	private: System::Windows::Forms::CheckBox^  chk820_840PM;
	private: System::Windows::Forms::CheckBox^  chk800_820PM;
	private: System::Windows::Forms::Panel^  pnl9_10PM;
	private: System::Windows::Forms::CheckBox^  chk940_1000PM;
	private: System::Windows::Forms::CheckBox^  chk920_940PM;
	private: System::Windows::Forms::CheckBox^  chk900_920PM;
	private: System::Windows::Forms::Panel^  pnl10_11PM;
	private: System::Windows::Forms::CheckBox^  chk1040_1100PM;
	private: System::Windows::Forms::CheckBox^  chk1020_1040PM;
	private: System::Windows::Forms::CheckBox^  chk1000_1020PM;
	private: System::Windows::Forms::Panel^  pnl11_12AM;
	private: System::Windows::Forms::CheckBox^  chk1140_1200AM;
	private: System::Windows::Forms::CheckBox^  chk1120_1140PM;
	private: System::Windows::Forms::CheckBox^  chk1100_1120PM;
	private: System::Windows::Forms::Panel^  pnl24Hr;
	private: System::Windows::Forms::RadioButton^  rbtn23_00;	
	private: System::Windows::Forms::RadioButton^  rbtn22_23;
	private: System::Windows::Forms::RadioButton^  rbtn21_22;
	private: System::Windows::Forms::RadioButton^  rbtn20_21;
	private: System::Windows::Forms::RadioButton^  rbtn19_20;
	private: System::Windows::Forms::RadioButton^  rbtn18_19;
	private: System::Windows::Forms::RadioButton^  rbtn17_18;
	private: System::Windows::Forms::RadioButton^  rbtn16_17;
	private: System::Windows::Forms::RadioButton^  rbtn15_16;
	private: System::Windows::Forms::RadioButton^  rbtn14_15;
	private: System::Windows::Forms::RadioButton^  rbtn13_14;
	private: System::Windows::Forms::RadioButton^  rbtn11_12;
	private: System::Windows::Forms::RadioButton^  rbtn10_11;
	private: System::Windows::Forms::RadioButton^  rbtn09_10;
	private: System::Windows::Forms::RadioButton^  rbtn08_09;
	private: System::Windows::Forms::RadioButton^  rbtn07_08;
	private: System::Windows::Forms::RadioButton^  rbtn06_07;
	private: System::Windows::Forms::RadioButton^  rbtn05_06;
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

private: System::Windows::Forms::Label^  lbl300_320PMQuantity;
private: System::Windows::Forms::Label^  lbl840_900AMQuantity;
private: System::Windows::Forms::Label^  lbl1120_1140AMQuantity;
private: System::Windows::Forms::Label^  lbl620_640PMQuantity;
private: System::Windows::Forms::Label^  lbl600_620PMQuantity;
private: System::Windows::Forms::Label^  lbl1140_1200PMQuantity;
private: System::Windows::Forms::Label^  lbl1100_1120AMQuantity;
private: System::Windows::Forms::Label^  lbl340_400PMQuantity;
private: System::Windows::Forms::Label^  lbl320_340PMQuantity;
private: System::Windows::Forms::Label^  lbl520_540AMQuantity;
private: System::Windows::Forms::Label^  lbl500_520AMQuantity;
private: System::Windows::Forms::Label^  lbl740_800AMQuantity;
private: System::Windows::Forms::Label^  lbl720_740AMQuantity;
private: System::Windows::Forms::Label^  lbl540_600AMQuantity;
private: System::Windows::Forms::Label^  lbl700_720AMQuantity;
private: System::Windows::Forms::Label^  lbl240_300PMQuantity;
private: System::Windows::Forms::Label^  lbl220_240PMQuantity;
private: System::Windows::Forms::Label^  lbl200_220PMQuantity;
private: System::Windows::Forms::Label^  lbl140_200PMQuantity;
private: System::Windows::Forms::Label^  lbl120_140PMQuantity;
private: System::Windows::Forms::Label^  lbl100_120PMQuantity;
private: System::Windows::Forms::Label^  lbl740_800PMQuantity;
private: System::Windows::Forms::Label^  lbl720_740PMQuantity;
private: System::Windows::Forms::Label^  lbl700_720PMQuantity;
private: System::Windows::Forms::Label^  lbl900_920AMQuantity;
private: System::Windows::Forms::Label^  lbl820_840AMQuantity;
private: System::Windows::Forms::Label^  lbl940_1000AM7Quantity;
private: System::Windows::Forms::Label^  lbl800_820AMQuantity;
private: System::Windows::Forms::Label^  lbl920_940AMQuantity;
private: System::Windows::Forms::Label^  lbl620_640AMQuantity;
private: System::Windows::Forms::Label^  lbl600_620AMQuantity;
private: System::Windows::Forms::Label^  lbl1140_1200AMQuantity;
private: System::Windows::Forms::Label^  lbl1120_1140PMQuantity;
private: System::Windows::Forms::Label^  lbl1100_1120PMQuantity;
private: System::Windows::Forms::Label^  lbl440_500PMQuantity;
private: System::Windows::Forms::Label^  lbl420_440PMQuantity;
private: System::Windows::Forms::Label^  lbl400_420PMQuantity;
private: System::Windows::Forms::Label^  lbl1040_1100PMQuantity;
private: System::Windows::Forms::Label^  lbl1020_1040PMQuantity;
private: System::Windows::Forms::Label^  lbl1000_1020PMQuantity;
private: System::Windows::Forms::Label^  lbl1040_1100AMQuantity;
private: System::Windows::Forms::Label^  lbl1020_1040AMQuantity;
private: System::Windows::Forms::Label^  lbl1000_1020AMQuantity;
private: System::Windows::Forms::Label^  lbl940_1000PMQuantity;
private: System::Windows::Forms::Label^  lbl920_940PMQuantity;
private: System::Windows::Forms::Label^  lbl900_920PMQuantity;
private: System::Windows::Forms::Label^  lbl840_900PMQuantity;
private: System::Windows::Forms::Label^  lbl820_840PMQuantity;
private: System::Windows::Forms::Label^  lbl800_820PMQuantity;
private: System::Windows::Forms::Label^  lbl540_600PMQuantity;
private: System::Windows::Forms::Label^  lbl520_540PMQuantity;
private: System::Windows::Forms::Label^  lbl500_520PMQuantity;
private: System::Windows::Forms::Label^  lbl640_700PMQuantity;
private: System::Windows::Forms::Label^  lbl640_700AMQuantity;
private: System::Windows::Forms::Button^  btnAttendees;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Button^  button2;
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
			this->rbtn12Hr = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn24Hr = (gcnew System::Windows::Forms::RadioButton());
			this->grpMode = (gcnew System::Windows::Forms::GroupBox());
			this->btnModeBack = (gcnew System::Windows::Forms::Button());
			this->btnAdmin = (gcnew System::Windows::Forms::Button());
			this->btnUser = (gcnew System::Windows::Forms::Button());
			this->grpAvailability = (gcnew System::Windows::Forms::GroupBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pnl11_12PM = (gcnew System::Windows::Forms::Panel());
			this->chk1140_1200PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl1120_1140AMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk1120_1140AM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl1140_1200PMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk1100_1120AM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl1100_1120AMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl6_7PM = (gcnew System::Windows::Forms::Panel());
			this->chk640_700PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk620_640PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl620_640PMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk600_620PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl600_620PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl640_700PMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl7_8AM = (gcnew System::Windows::Forms::Panel());
			this->chk740_800AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk720_740AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk700_720AM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl700_720AMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl740_800AMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl720_740AMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl8_9AM = (gcnew System::Windows::Forms::Panel());
			this->lbl840_900AMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk840_900AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk820_840AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk800_820AM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl800_820AMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl820_840AMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl7_8PM = (gcnew System::Windows::Forms::Panel());
			this->chk740_800PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk720_740PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl700_720PMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk700_720PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl720_740PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl740_800PMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl8_9PM = (gcnew System::Windows::Forms::Panel());
			this->chk840_900PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk820_840PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk800_820PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl800_820PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl840_900PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl820_840PMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl9_10AM = (gcnew System::Windows::Forms::Panel());
			this->chk940_10000AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk920_940AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk900_920AM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl900_920AMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl940_1000AM7Quantity = (gcnew System::Windows::Forms::Label());
			this->lbl920_940AMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl5_6PM = (gcnew System::Windows::Forms::Panel());
			this->chk540_600PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk520_540PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk500_520PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl500_520PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl540_600PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl520_540PMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl1_2PM = (gcnew System::Windows::Forms::Panel());
			this->chk140_200PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl100_120PMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk120_140PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk100_120PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl120_140PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl140_200PMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl10_11AM = (gcnew System::Windows::Forms::Panel());
			this->chk1040_1100AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1020_1040AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1000_1020AM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl1000_1020AMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl1040_1100AMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl1020_1040AMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl2_3PM = (gcnew System::Windows::Forms::Panel());
			this->lbl240_300PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl200_220PMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk240_300PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk220_240PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk200_220PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl220_240PMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl9_10PM = (gcnew System::Windows::Forms::Panel());
			this->chk940_1000PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk920_940PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk900_920PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl900_920PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl940_1000PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl920_940PMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl5_6AM = (gcnew System::Windows::Forms::Panel());
			this->chk540_600AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk520_540AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk500_520AM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl500_520AMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl520_540AMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl540_600AMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl10_11PM = (gcnew System::Windows::Forms::Panel());
			this->lbl1040_1100PMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk1040_1100PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl1000_1020PMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk1020_1040PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1000_1020PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl1020_1040PMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl3_4PM = (gcnew System::Windows::Forms::Panel());
			this->lbl300_320PMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk340_400PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk320_340PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk300_320PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl320_340PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl340_400PMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl4_5PM = (gcnew System::Windows::Forms::Panel());
			this->lbl440_500PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl400_420PMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk440_500PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk420_440PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk400_420PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl420_440PMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl11_12AM = (gcnew System::Windows::Forms::Panel());
			this->lbl1140_1200AMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk1140_1200AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1120_1140PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1100_1120PM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl1100_1120PMQuantity = (gcnew System::Windows::Forms::Label());
			this->lbl1120_1140PMQuantity = (gcnew System::Windows::Forms::Label());
			this->pnl6_7AM = (gcnew System::Windows::Forms::Panel());
			this->lbl640_700AMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk640_700AM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl620_640AMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk620_640AM = (gcnew System::Windows::Forms::CheckBox());
			this->lbl600_620AMQuantity = (gcnew System::Windows::Forms::Label());
			this->chk600_620AM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl12Hr = (gcnew System::Windows::Forms::Panel());
			this->rbtn11_12AM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn10_11PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn9_10PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn8_9PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn7_8PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn6_7PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn5_6PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn4_5PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn3_4PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn2_3PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn1_2PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn11_12PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn10_11AM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn9_10AM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn8_9AM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn7_8AM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn6_7AM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn5_6AM = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnSubmitTimes = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pnl24Hr = (gcnew System::Windows::Forms::Panel());
			this->rbtn23_00 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn22_23 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn21_22 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn20_21 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn19_20 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn18_19 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn17_18 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn16_17 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn15_16 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn14_15 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn13_14 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn11_12 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn10_11 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn09_10 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn08_09 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn07_08 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn06_07 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn05_06 = (gcnew System::Windows::Forms::RadioButton());
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
			this->panel5->SuspendLayout();
			this->pnl11_12PM->SuspendLayout();
			this->pnl6_7PM->SuspendLayout();
			this->pnl7_8AM->SuspendLayout();
			this->pnl8_9AM->SuspendLayout();
			this->pnl7_8PM->SuspendLayout();
			this->pnl8_9PM->SuspendLayout();
			this->pnl9_10AM->SuspendLayout();
			this->pnl5_6PM->SuspendLayout();
			this->pnl1_2PM->SuspendLayout();
			this->pnl10_11AM->SuspendLayout();
			this->pnl2_3PM->SuspendLayout();
			this->pnl9_10PM->SuspendLayout();
			this->pnl5_6AM->SuspendLayout();
			this->pnl10_11PM->SuspendLayout();
			this->pnl3_4PM->SuspendLayout();
			this->pnl4_5PM->SuspendLayout();
			this->pnl11_12AM->SuspendLayout();
			this->pnl6_7AM->SuspendLayout();
			this->pnl12Hr->SuspendLayout();
			this->pnl24Hr->SuspendLayout();
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
			this->grpCreateEvent->Location = System::Drawing::Point(157, 72);
			this->grpCreateEvent->Name = L"grpCreateEvent";
			this->grpCreateEvent->Size = System::Drawing::Size(361, 382);
			this->grpCreateEvent->TabIndex = 8;
			this->grpCreateEvent->TabStop = false;
			this->grpCreateEvent->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(63, 275);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->Visible = false;
			// 
			// btnCreateEventBack
			// 
			this->btnCreateEventBack->Location = System::Drawing::Point(150, 330);
			this->btnCreateEventBack->Name = L"btnCreateEventBack";
			this->btnCreateEventBack->Size = System::Drawing::Size(103, 23);
			this->btnCreateEventBack->TabIndex = 10;
			this->btnCreateEventBack->Text = L"Back";
			this->btnCreateEventBack->UseVisualStyleBackColor = true;
			this->btnCreateEventBack->Click += gcnew System::EventHandler(this, &MyForm::btnCreateEventBack_Click);
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
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->Location = System::Drawing::Point(15, 100);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(33, 13);
			this->lblDate->TabIndex = 6;
			this->lblDate->Text = L"Date:";
			// 
			// btnSubmitEvent
			// 
			this->btnSubmitEvent->Location = System::Drawing::Point(150, 301);
			this->btnSubmitEvent->Name = L"btnSubmitEvent";
			this->btnSubmitEvent->Size = System::Drawing::Size(103, 23);
			this->btnSubmitEvent->TabIndex = 0;
			this->btnSubmitEvent->Text = L"Submit";
			this->btnSubmitEvent->UseVisualStyleBackColor = true;
			this->btnSubmitEvent->Click += gcnew System::EventHandler(this, &MyForm::btnSubmitEvent_Click);
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
			this->grpAdmin->Controls->Add(this->btnAdminBack);
			this->grpAdmin->Controls->Add(this->btnCreateEvent);
			this->grpAdmin->Controls->Add(this->btnEditEvents);
			this->grpAdmin->Controls->Add(this->lblAdmin);
			this->grpAdmin->Location = System::Drawing::Point(258, 72);
			this->grpAdmin->Name = L"grpAdmin";
			this->grpAdmin->Size = System::Drawing::Size(158, 164);
			this->grpAdmin->TabIndex = 7;
			this->grpAdmin->TabStop = false;
			this->grpAdmin->Visible = false;
			// 
			// btnAdminBack
			// 
			this->btnAdminBack->Location = System::Drawing::Point(30, 122);
			this->btnAdminBack->Name = L"btnAdminBack";
			this->btnAdminBack->Size = System::Drawing::Size(103, 23);
			this->btnAdminBack->TabIndex = 10;
			this->btnAdminBack->Text = L"Back";
			this->btnAdminBack->UseVisualStyleBackColor = true;
			this->btnAdminBack->Click += gcnew System::EventHandler(this, &MyForm::btnAdminBack_Click);
			// 
			// btnCreateEvent
			// 
			this->btnCreateEvent->Location = System::Drawing::Point(30, 64);
			this->btnCreateEvent->Name = L"btnCreateEvent";
			this->btnCreateEvent->Size = System::Drawing::Size(103, 23);
			this->btnCreateEvent->TabIndex = 5;
			this->btnCreateEvent->Text = L"Create Event";
			this->btnCreateEvent->UseVisualStyleBackColor = true;
			this->btnCreateEvent->Click += gcnew System::EventHandler(this, &MyForm::btnCreateEvent_Click);
			// 
			// btnEditEvents
			// 
			this->btnEditEvents->Location = System::Drawing::Point(30, 93);
			this->btnEditEvents->Name = L"btnEditEvents";
			this->btnEditEvents->Size = System::Drawing::Size(103, 23);
			this->btnEditEvents->TabIndex = 3;
			this->btnEditEvents->Text = L"View Your Events";
			this->btnEditEvents->UseVisualStyleBackColor = true;
			this->btnEditEvents->Click += gcnew System::EventHandler(this, &MyForm::btnEditEvents_Click);
			// 
			// lblAdmin
			// 
			this->lblAdmin->AutoSize = true;
			this->lblAdmin->Location = System::Drawing::Point(34, 32);
			this->lblAdmin->Name = L"lblAdmin";
			this->lblAdmin->Size = System::Drawing::Size(93, 13);
			this->lblAdmin->TabIndex = 2;
			this->lblAdmin->Text = L"Make a Selection:";
			// 
			// grpLogin
			// 
			this->grpLogin->Controls->Add(this->button2);
			this->grpLogin->Controls->Add(this->lblUser);
			this->grpLogin->Controls->Add(this->btnLogin);
			this->grpLogin->Controls->Add(this->txtUser);
			this->grpLogin->Location = System::Drawing::Point(237, 72);
			this->grpLogin->Name = L"grpLogin";
			this->grpLogin->Size = System::Drawing::Size(200, 148);
			this->grpLogin->TabIndex = 7;
			this->grpLogin->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(59, 119);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Save/Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Location = System::Drawing::Point(59, 39);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(91, 13);
			this->lblUser->TabIndex = 6;
			this->lblUser->Text = L"Enter Your Name:";
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(59, 94);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(75, 23);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &MyForm::btnLogin_Click);
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(49, 70);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(100, 20);
			this->txtUser->TabIndex = 1;
			// 
			// rbtn12Hr
			// 
			this->rbtn12Hr->AutoSize = true;
			this->rbtn12Hr->Checked = true;
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
			this->rbtn24Hr->Text = L"24 Hour";
			this->rbtn24Hr->UseVisualStyleBackColor = true;
			this->rbtn24Hr->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn24Hr_CheckedChanged);
			// 
			// grpMode
			// 
			this->grpMode->Controls->Add(this->btnModeBack);
			this->grpMode->Controls->Add(this->btnAdmin);
			this->grpMode->Controls->Add(this->btnUser);
			this->grpMode->Location = System::Drawing::Point(237, 72);
			this->grpMode->Name = L"grpMode";
			this->grpMode->Size = System::Drawing::Size(200, 148);
			this->grpMode->TabIndex = 8;
			this->grpMode->TabStop = false;
			this->grpMode->Visible = false;
			// 
			// btnModeBack
			// 
			this->btnModeBack->Location = System::Drawing::Point(59, 104);
			this->btnModeBack->Name = L"btnModeBack";
			this->btnModeBack->Size = System::Drawing::Size(75, 23);
			this->btnModeBack->TabIndex = 2;
			this->btnModeBack->Text = L"Logout";
			this->btnModeBack->UseVisualStyleBackColor = true;
			this->btnModeBack->Click += gcnew System::EventHandler(this, &MyForm::btnModeBack_Click);
			// 
			// btnAdmin
			// 
			this->btnAdmin->Location = System::Drawing::Point(59, 35);
			this->btnAdmin->Name = L"btnAdmin";
			this->btnAdmin->Size = System::Drawing::Size(75, 23);
			this->btnAdmin->TabIndex = 1;
			this->btnAdmin->Text = L"Admin Mode";
			this->btnAdmin->UseVisualStyleBackColor = true;
			this->btnAdmin->Click += gcnew System::EventHandler(this, &MyForm::btnAdmin_Click);
			// 
			// btnUser
			// 
			this->btnUser->Location = System::Drawing::Point(59, 66);
			this->btnUser->Name = L"btnUser";
			this->btnUser->Size = System::Drawing::Size(75, 23);
			this->btnUser->TabIndex = 0;
			this->btnUser->Text = L"User Mode";
			this->btnUser->UseVisualStyleBackColor = true;
			this->btnUser->Click += gcnew System::EventHandler(this, &MyForm::btnUser_Click);
			// 
			// grpAvailability
			// 
			this->grpAvailability->Controls->Add(this->panel5);
			this->grpAvailability->Controls->Add(this->pnl12Hr);
			this->grpAvailability->Controls->Add(this->label2);
			this->grpAvailability->Controls->Add(this->label3);
			this->grpAvailability->Controls->Add(this->btnSubmitTimes);
			this->grpAvailability->Controls->Add(this->label7);
			this->grpAvailability->Controls->Add(this->rbtn24Hr);
			this->grpAvailability->Controls->Add(this->pnl24Hr);
			this->grpAvailability->Controls->Add(this->rbtn12Hr);
			this->grpAvailability->Location = System::Drawing::Point(101, 72);
			this->grpAvailability->Name = L"grpAvailability";
			this->grpAvailability->Size = System::Drawing::Size(472, 441);
			this->grpAvailability->TabIndex = 13;
			this->grpAvailability->TabStop = false;
			this->grpAvailability->Visible = false;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->pnl11_12PM);
			this->panel5->Controls->Add(this->pnl6_7PM);
			this->panel5->Controls->Add(this->pnl7_8AM);
			this->panel5->Controls->Add(this->pnl8_9AM);
			this->panel5->Controls->Add(this->pnl7_8PM);
			this->panel5->Controls->Add(this->pnl8_9PM);
			this->panel5->Controls->Add(this->pnl9_10AM);
			this->panel5->Controls->Add(this->pnl5_6PM);
			this->panel5->Controls->Add(this->pnl1_2PM);
			this->panel5->Controls->Add(this->pnl10_11AM);
			this->panel5->Controls->Add(this->pnl2_3PM);
			this->panel5->Controls->Add(this->pnl9_10PM);
			this->panel5->Controls->Add(this->pnl5_6AM);
			this->panel5->Controls->Add(this->pnl10_11PM);
			this->panel5->Controls->Add(this->pnl3_4PM);
			this->panel5->Controls->Add(this->pnl4_5PM);
			this->panel5->Controls->Add(this->pnl11_12AM);
			this->panel5->Controls->Add(this->pnl6_7AM);
			this->panel5->Location = System::Drawing::Point(259, 142);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(264, 852);
			this->panel5->TabIndex = 28;
			// 
			// pnl11_12PM
			// 
			this->pnl11_12PM->Controls->Add(this->chk1140_1200PM);
			this->pnl11_12PM->Controls->Add(this->lbl1120_1140AMQuantity);
			this->pnl11_12PM->Controls->Add(this->chk1120_1140AM);
			this->pnl11_12PM->Controls->Add(this->lbl1140_1200PMQuantity);
			this->pnl11_12PM->Controls->Add(this->chk1100_1120AM);
			this->pnl11_12PM->Controls->Add(this->lbl1100_1120AMQuantity);
			this->pnl11_12PM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl11_12PM->Location = System::Drawing::Point(0, 0);
			this->pnl11_12PM->Name = L"pnl11_12PM";
			this->pnl11_12PM->Size = System::Drawing::Size(264, 852);
			this->pnl11_12PM->TabIndex = 34;
			this->pnl11_12PM->Visible = false;
			// 
			// chk1140_1200PM
			// 
			this->chk1140_1200PM->Location = System::Drawing::Point(15, 57);
			this->chk1140_1200PM->Name = L"chk1140_1200PM";
			this->chk1140_1200PM->Size = System::Drawing::Size(131, 22);
			this->chk1140_1200PM->TabIndex = 22;
			this->chk1140_1200PM->Text = L"11:40 AM - 12:00 PM";
			this->chk1140_1200PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk1140_1200PM_CheckedChanged);
			// 
			// lbl1120_1140AMQuantity
			// 
			this->lbl1120_1140AMQuantity->AutoSize = true;
			this->lbl1120_1140AMQuantity->Location = System::Drawing::Point(49, 34);
			this->lbl1120_1140AMQuantity->Name = L"lbl1120_1140AMQuantity";
			this->lbl1120_1140AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl1120_1140AMQuantity->TabIndex = 58;
			this->lbl1120_1140AMQuantity->Text = L"label1";
			this->lbl1120_1140AMQuantity->Visible = false;
			// 
			// chk1120_1140AM
			// 
			this->chk1120_1140AM->Location = System::Drawing::Point(15, 34);
			this->chk1120_1140AM->Name = L"chk1120_1140AM";
			this->chk1120_1140AM->Size = System::Drawing::Size(131, 22);
			this->chk1120_1140AM->TabIndex = 19;
			this->chk1120_1140AM->Text = L"11:20 AM - 11:40 AM";
			this->chk1120_1140AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk1120_1140AM_CheckedChanged);
			// 
			// lbl1140_1200PMQuantity
			// 
			this->lbl1140_1200PMQuantity->AutoSize = true;
			this->lbl1140_1200PMQuantity->Location = System::Drawing::Point(49, 59);
			this->lbl1140_1200PMQuantity->Name = L"lbl1140_1200PMQuantity";
			this->lbl1140_1200PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl1140_1200PMQuantity->TabIndex = 57;
			this->lbl1140_1200PMQuantity->Text = L"label1";
			this->lbl1140_1200PMQuantity->Visible = false;
			// 
			// chk1100_1120AM
			// 
			this->chk1100_1120AM->Location = System::Drawing::Point(15, 12);
			this->chk1100_1120AM->Name = L"chk1100_1120AM";
			this->chk1100_1120AM->Size = System::Drawing::Size(131, 22);
			this->chk1100_1120AM->TabIndex = 18;
			this->chk1100_1120AM->Text = L"11:00 AM - 11:20 AM";
			this->chk1100_1120AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk1100_1120AM_CheckedChanged);
			// 
			// lbl1100_1120AMQuantity
			// 
			this->lbl1100_1120AMQuantity->AutoSize = true;
			this->lbl1100_1120AMQuantity->Location = System::Drawing::Point(49, 15);
			this->lbl1100_1120AMQuantity->Name = L"lbl1100_1120AMQuantity";
			this->lbl1100_1120AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl1100_1120AMQuantity->TabIndex = 59;
			this->lbl1100_1120AMQuantity->Text = L"label1";
			this->lbl1100_1120AMQuantity->Visible = false;
			// 
			// pnl6_7PM
			// 
			this->pnl6_7PM->Controls->Add(this->chk640_700PM);
			this->pnl6_7PM->Controls->Add(this->chk620_640PM);
			this->pnl6_7PM->Controls->Add(this->lbl620_640PMQuantity);
			this->pnl6_7PM->Controls->Add(this->chk600_620PM);
			this->pnl6_7PM->Controls->Add(this->lbl600_620PMQuantity);
			this->pnl6_7PM->Controls->Add(this->lbl640_700PMQuantity);
			this->pnl6_7PM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl6_7PM->Location = System::Drawing::Point(0, 0);
			this->pnl6_7PM->Name = L"pnl6_7PM";
			this->pnl6_7PM->Size = System::Drawing::Size(264, 852);
			this->pnl6_7PM->TabIndex = 38;
			this->pnl6_7PM->Visible = false;
			// 
			// chk640_700PM
			// 
			this->chk640_700PM->Location = System::Drawing::Point(15, 57);
			this->chk640_700PM->Name = L"chk640_700PM";
			this->chk640_700PM->Size = System::Drawing::Size(118, 22);
			this->chk640_700PM->TabIndex = 22;
			this->chk640_700PM->Text = L"6:40 PM - 7:00 PM";
			// 
			// chk620_640PM
			// 
			this->chk620_640PM->Location = System::Drawing::Point(15, 34);
			this->chk620_640PM->Name = L"chk620_640PM";
			this->chk620_640PM->Size = System::Drawing::Size(118, 22);
			this->chk620_640PM->TabIndex = 19;
			this->chk620_640PM->Text = L"6:20 PM - 6:40 PM";
			// 
			// lbl620_640PMQuantity
			// 
			this->lbl620_640PMQuantity->AutoSize = true;
			this->lbl620_640PMQuantity->Location = System::Drawing::Point(52, 34);
			this->lbl620_640PMQuantity->Name = L"lbl620_640PMQuantity";
			this->lbl620_640PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl620_640PMQuantity->TabIndex = 27;
			this->lbl620_640PMQuantity->Text = L"label1";
			this->lbl620_640PMQuantity->Visible = false;
			// 
			// chk600_620PM
			// 
			this->chk600_620PM->Location = System::Drawing::Point(15, 12);
			this->chk600_620PM->Name = L"chk600_620PM";
			this->chk600_620PM->Size = System::Drawing::Size(118, 22);
			this->chk600_620PM->TabIndex = 18;
			this->chk600_620PM->Text = L"6:00 PM - 6:20 PM";
			// 
			// lbl600_620PMQuantity
			// 
			this->lbl600_620PMQuantity->AutoSize = true;
			this->lbl600_620PMQuantity->Location = System::Drawing::Point(52, 12);
			this->lbl600_620PMQuantity->Name = L"lbl600_620PMQuantity";
			this->lbl600_620PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl600_620PMQuantity->TabIndex = 56;
			this->lbl600_620PMQuantity->Text = L"label1";
			this->lbl600_620PMQuantity->Visible = false;
			// 
			// lbl640_700PMQuantity
			// 
			this->lbl640_700PMQuantity->AutoSize = true;
			this->lbl640_700PMQuantity->Location = System::Drawing::Point(52, 58);
			this->lbl640_700PMQuantity->Name = L"lbl640_700PMQuantity";
			this->lbl640_700PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl640_700PMQuantity->TabIndex = 52;
			this->lbl640_700PMQuantity->Text = L"label1";
			this->lbl640_700PMQuantity->Visible = false;
			// 
			// pnl7_8AM
			// 
			this->pnl7_8AM->Controls->Add(this->chk740_800AM);
			this->pnl7_8AM->Controls->Add(this->chk720_740AM);
			this->pnl7_8AM->Controls->Add(this->chk700_720AM);
			this->pnl7_8AM->Controls->Add(this->lbl700_720AMQuantity);
			this->pnl7_8AM->Controls->Add(this->lbl740_800AMQuantity);
			this->pnl7_8AM->Controls->Add(this->lbl720_740AMQuantity);
			this->pnl7_8AM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl7_8AM->Location = System::Drawing::Point(0, 0);
			this->pnl7_8AM->Name = L"pnl7_8AM";
			this->pnl7_8AM->Size = System::Drawing::Size(264, 852);
			this->pnl7_8AM->TabIndex = 30;
			this->pnl7_8AM->Visible = false;
			// 
			// chk740_800AM
			// 
			this->chk740_800AM->Location = System::Drawing::Point(15, 57);
			this->chk740_800AM->Name = L"chk740_800AM";
			this->chk740_800AM->Size = System::Drawing::Size(118, 22);
			this->chk740_800AM->TabIndex = 22;
			this->chk740_800AM->Text = L"7:40 AM - 8:00 AM";
			this->chk740_800AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk740_800AM_CheckedChanged);
			// 
			// chk720_740AM
			// 
			this->chk720_740AM->Location = System::Drawing::Point(15, 34);
			this->chk720_740AM->Name = L"chk720_740AM";
			this->chk720_740AM->Size = System::Drawing::Size(118, 22);
			this->chk720_740AM->TabIndex = 19;
			this->chk720_740AM->Text = L"7:20 AM - 7:40 AM";
			this->chk720_740AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk720_740AM_CheckedChanged);
			// 
			// chk700_720AM
			// 
			this->chk700_720AM->Location = System::Drawing::Point(15, 12);
			this->chk700_720AM->Name = L"chk700_720AM";
			this->chk700_720AM->Size = System::Drawing::Size(118, 22);
			this->chk700_720AM->TabIndex = 18;
			this->chk700_720AM->Text = L"7:00 AM - 7:20 AM";
			this->chk700_720AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk700_720AM_CheckedChanged);
			// 
			// lbl700_720AMQuantity
			// 
			this->lbl700_720AMQuantity->AutoSize = true;
			this->lbl700_720AMQuantity->Location = System::Drawing::Point(49, 11);
			this->lbl700_720AMQuantity->Name = L"lbl700_720AMQuantity";
			this->lbl700_720AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl700_720AMQuantity->TabIndex = 65;
			this->lbl700_720AMQuantity->Text = L"label1";
			this->lbl700_720AMQuantity->Visible = false;
			// 
			// lbl740_800AMQuantity
			// 
			this->lbl740_800AMQuantity->AutoSize = true;
			this->lbl740_800AMQuantity->Location = System::Drawing::Point(49, 55);
			this->lbl740_800AMQuantity->Name = L"lbl740_800AMQuantity";
			this->lbl740_800AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl740_800AMQuantity->TabIndex = 68;
			this->lbl740_800AMQuantity->Text = L"label1";
			this->lbl740_800AMQuantity->Visible = false;
			// 
			// lbl720_740AMQuantity
			// 
			this->lbl720_740AMQuantity->AutoSize = true;
			this->lbl720_740AMQuantity->Location = System::Drawing::Point(49, 34);
			this->lbl720_740AMQuantity->Name = L"lbl720_740AMQuantity";
			this->lbl720_740AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl720_740AMQuantity->TabIndex = 54;
			this->lbl720_740AMQuantity->Text = L"label1";
			this->lbl720_740AMQuantity->Visible = false;
			// 
			// pnl8_9AM
			// 
			this->pnl8_9AM->Controls->Add(this->lbl840_900AMQuantity);
			this->pnl8_9AM->Controls->Add(this->chk840_900AM);
			this->pnl8_9AM->Controls->Add(this->chk820_840AM);
			this->pnl8_9AM->Controls->Add(this->chk800_820AM);
			this->pnl8_9AM->Controls->Add(this->lbl800_820AMQuantity);
			this->pnl8_9AM->Controls->Add(this->lbl820_840AMQuantity);
			this->pnl8_9AM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl8_9AM->Location = System::Drawing::Point(0, 0);
			this->pnl8_9AM->Name = L"pnl8_9AM";
			this->pnl8_9AM->Size = System::Drawing::Size(264, 852);
			this->pnl8_9AM->TabIndex = 32;
			this->pnl8_9AM->Visible = false;
			// 
			// lbl840_900AMQuantity
			// 
			this->lbl840_900AMQuantity->AutoSize = true;
			this->lbl840_900AMQuantity->Location = System::Drawing::Point(52, 59);
			this->lbl840_900AMQuantity->Name = L"lbl840_900AMQuantity";
			this->lbl840_900AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl840_900AMQuantity->TabIndex = 55;
			this->lbl840_900AMQuantity->Text = L"label1";
			this->lbl840_900AMQuantity->Visible = false;
			// 
			// chk840_900AM
			// 
			this->chk840_900AM->Location = System::Drawing::Point(15, 57);
			this->chk840_900AM->Name = L"chk840_900AM";
			this->chk840_900AM->Size = System::Drawing::Size(118, 22);
			this->chk840_900AM->TabIndex = 22;
			this->chk840_900AM->Text = L"8:40 AM - 9:00 AM";
			this->chk840_900AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk840_900AM_CheckedChanged);
			// 
			// chk820_840AM
			// 
			this->chk820_840AM->Location = System::Drawing::Point(15, 34);
			this->chk820_840AM->Name = L"chk820_840AM";
			this->chk820_840AM->Size = System::Drawing::Size(118, 22);
			this->chk820_840AM->TabIndex = 19;
			this->chk820_840AM->Text = L"8:20 AM - 8:40 AM";
			this->chk820_840AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk820_840AM_CheckedChanged);
			// 
			// chk800_820AM
			// 
			this->chk800_820AM->Location = System::Drawing::Point(15, 12);
			this->chk800_820AM->Name = L"chk800_820AM";
			this->chk800_820AM->Size = System::Drawing::Size(118, 22);
			this->chk800_820AM->TabIndex = 18;
			this->chk800_820AM->Text = L"8:00 AM - 8:20 AM";
			this->chk800_820AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk800_820AM_CheckedChanged);
			// 
			// lbl800_820AMQuantity
			// 
			this->lbl800_820AMQuantity->AutoSize = true;
			this->lbl800_820AMQuantity->Location = System::Drawing::Point(52, 14);
			this->lbl800_820AMQuantity->Name = L"lbl800_820AMQuantity";
			this->lbl800_820AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl800_820AMQuantity->TabIndex = 51;
			this->lbl800_820AMQuantity->Text = L"label1";
			this->lbl800_820AMQuantity->Visible = false;
			// 
			// lbl820_840AMQuantity
			// 
			this->lbl820_840AMQuantity->AutoSize = true;
			this->lbl820_840AMQuantity->Location = System::Drawing::Point(52, 37);
			this->lbl820_840AMQuantity->Name = L"lbl820_840AMQuantity";
			this->lbl820_840AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl820_840AMQuantity->TabIndex = 67;
			this->lbl820_840AMQuantity->Text = L"label1";
			this->lbl820_840AMQuantity->Visible = false;
			// 
			// pnl7_8PM
			// 
			this->pnl7_8PM->Controls->Add(this->chk740_800PM);
			this->pnl7_8PM->Controls->Add(this->chk720_740PM);
			this->pnl7_8PM->Controls->Add(this->lbl700_720PMQuantity);
			this->pnl7_8PM->Controls->Add(this->chk700_720PM);
			this->pnl7_8PM->Controls->Add(this->lbl720_740PMQuantity);
			this->pnl7_8PM->Controls->Add(this->lbl740_800PMQuantity);
			this->pnl7_8PM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl7_8PM->Location = System::Drawing::Point(0, 0);
			this->pnl7_8PM->Name = L"pnl7_8PM";
			this->pnl7_8PM->Size = System::Drawing::Size(264, 852);
			this->pnl7_8PM->TabIndex = 39;
			this->pnl7_8PM->Visible = false;
			// 
			// chk740_800PM
			// 
			this->chk740_800PM->Location = System::Drawing::Point(15, 57);
			this->chk740_800PM->Name = L"chk740_800PM";
			this->chk740_800PM->Size = System::Drawing::Size(118, 22);
			this->chk740_800PM->TabIndex = 22;
			this->chk740_800PM->Text = L"7:40 PM - 8:00 PM";
			// 
			// chk720_740PM
			// 
			this->chk720_740PM->Location = System::Drawing::Point(15, 34);
			this->chk720_740PM->Name = L"chk720_740PM";
			this->chk720_740PM->Size = System::Drawing::Size(118, 22);
			this->chk720_740PM->TabIndex = 19;
			this->chk720_740PM->Text = L"7:20 PM - 7:40 PM";
			// 
			// lbl700_720PMQuantity
			// 
			this->lbl700_720PMQuantity->AutoSize = true;
			this->lbl700_720PMQuantity->Location = System::Drawing::Point(49, 11);
			this->lbl700_720PMQuantity->Name = L"lbl700_720PMQuantity";
			this->lbl700_720PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl700_720PMQuantity->TabIndex = 79;
			this->lbl700_720PMQuantity->Text = L"label1";
			this->lbl700_720PMQuantity->Visible = false;
			// 
			// chk700_720PM
			// 
			this->chk700_720PM->Location = System::Drawing::Point(15, 12);
			this->chk700_720PM->Name = L"chk700_720PM";
			this->chk700_720PM->Size = System::Drawing::Size(118, 22);
			this->chk700_720PM->TabIndex = 18;
			this->chk700_720PM->Text = L"7:00 PM - 7:20 PM";
			// 
			// lbl720_740PMQuantity
			// 
			this->lbl720_740PMQuantity->AutoSize = true;
			this->lbl720_740PMQuantity->Location = System::Drawing::Point(49, 32);
			this->lbl720_740PMQuantity->Name = L"lbl720_740PMQuantity";
			this->lbl720_740PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl720_740PMQuantity->TabIndex = 75;
			this->lbl720_740PMQuantity->Text = L"label1";
			this->lbl720_740PMQuantity->Visible = false;
			// 
			// lbl740_800PMQuantity
			// 
			this->lbl740_800PMQuantity->AutoSize = true;
			this->lbl740_800PMQuantity->Location = System::Drawing::Point(49, 56);
			this->lbl740_800PMQuantity->Name = L"lbl740_800PMQuantity";
			this->lbl740_800PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl740_800PMQuantity->TabIndex = 71;
			this->lbl740_800PMQuantity->Text = L"label1";
			this->lbl740_800PMQuantity->Visible = false;
			// 
			// pnl8_9PM
			// 
			this->pnl8_9PM->Controls->Add(this->chk840_900PM);
			this->pnl8_9PM->Controls->Add(this->chk820_840PM);
			this->pnl8_9PM->Controls->Add(this->chk800_820PM);
			this->pnl8_9PM->Controls->Add(this->lbl800_820PMQuantity);
			this->pnl8_9PM->Controls->Add(this->lbl840_900PMQuantity);
			this->pnl8_9PM->Controls->Add(this->lbl820_840PMQuantity);
			this->pnl8_9PM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl8_9PM->Location = System::Drawing::Point(0, 0);
			this->pnl8_9PM->Name = L"pnl8_9PM";
			this->pnl8_9PM->Size = System::Drawing::Size(264, 852);
			this->pnl8_9PM->TabIndex = 33;
			this->pnl8_9PM->Visible = false;
			// 
			// chk840_900PM
			// 
			this->chk840_900PM->Location = System::Drawing::Point(15, 57);
			this->chk840_900PM->Name = L"chk840_900PM";
			this->chk840_900PM->Size = System::Drawing::Size(118, 22);
			this->chk840_900PM->TabIndex = 22;
			this->chk840_900PM->Text = L"8:40 PM - 9:00 PM";
			// 
			// chk820_840PM
			// 
			this->chk820_840PM->Location = System::Drawing::Point(15, 34);
			this->chk820_840PM->Name = L"chk820_840PM";
			this->chk820_840PM->Size = System::Drawing::Size(118, 22);
			this->chk820_840PM->TabIndex = 19;
			this->chk820_840PM->Text = L"8:20 PM - 8:40 PM";
			// 
			// chk800_820PM
			// 
			this->chk800_820PM->Location = System::Drawing::Point(15, 12);
			this->chk800_820PM->Name = L"chk800_820PM";
			this->chk800_820PM->Size = System::Drawing::Size(118, 22);
			this->chk800_820PM->TabIndex = 18;
			this->chk800_820PM->Text = L"8:00 PM - 8:20 PM";
			// 
			// lbl800_820PMQuantity
			// 
			this->lbl800_820PMQuantity->AutoSize = true;
			this->lbl800_820PMQuantity->Location = System::Drawing::Point(52, 13);
			this->lbl800_820PMQuantity->Name = L"lbl800_820PMQuantity";
			this->lbl800_820PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl800_820PMQuantity->TabIndex = 47;
			this->lbl800_820PMQuantity->Text = L"label1";
			this->lbl800_820PMQuantity->Visible = false;
			// 
			// lbl840_900PMQuantity
			// 
			this->lbl840_900PMQuantity->AutoSize = true;
			this->lbl840_900PMQuantity->Location = System::Drawing::Point(52, 58);
			this->lbl840_900PMQuantity->Name = L"lbl840_900PMQuantity";
			this->lbl840_900PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl840_900PMQuantity->TabIndex = 45;
			this->lbl840_900PMQuantity->Text = L"label1";
			this->lbl840_900PMQuantity->Visible = false;
			// 
			// lbl820_840PMQuantity
			// 
			this->lbl820_840PMQuantity->AutoSize = true;
			this->lbl820_840PMQuantity->Location = System::Drawing::Point(52, 37);
			this->lbl820_840PMQuantity->Name = L"lbl820_840PMQuantity";
			this->lbl820_840PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl820_840PMQuantity->TabIndex = 46;
			this->lbl820_840PMQuantity->Text = L"label1";
			this->lbl820_840PMQuantity->Visible = false;
			// 
			// pnl9_10AM
			// 
			this->pnl9_10AM->Controls->Add(this->chk940_10000AM);
			this->pnl9_10AM->Controls->Add(this->chk920_940AM);
			this->pnl9_10AM->Controls->Add(this->chk900_920AM);
			this->pnl9_10AM->Controls->Add(this->lbl900_920AMQuantity);
			this->pnl9_10AM->Controls->Add(this->lbl940_1000AM7Quantity);
			this->pnl9_10AM->Controls->Add(this->lbl920_940AMQuantity);
			this->pnl9_10AM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl9_10AM->Location = System::Drawing::Point(0, 0);
			this->pnl9_10AM->Name = L"pnl9_10AM";
			this->pnl9_10AM->Size = System::Drawing::Size(264, 852);
			this->pnl9_10AM->TabIndex = 34;
			this->pnl9_10AM->Visible = false;
			// 
			// chk940_10000AM
			// 
			this->chk940_10000AM->Location = System::Drawing::Point(15, 57);
			this->chk940_10000AM->Name = L"chk940_10000AM";
			this->chk940_10000AM->Size = System::Drawing::Size(123, 22);
			this->chk940_10000AM->TabIndex = 22;
			this->chk940_10000AM->Text = L"9:40 AM - 10:00 AM";
			this->chk940_10000AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk940_10000AM_CheckedChanged);
			// 
			// chk920_940AM
			// 
			this->chk920_940AM->Location = System::Drawing::Point(15, 34);
			this->chk920_940AM->Name = L"chk920_940AM";
			this->chk920_940AM->Size = System::Drawing::Size(118, 22);
			this->chk920_940AM->TabIndex = 19;
			this->chk920_940AM->Text = L"9:20 AM - 9:40 AM";
			this->chk920_940AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk920_940AM_CheckedChanged);
			// 
			// chk900_920AM
			// 
			this->chk900_920AM->Location = System::Drawing::Point(15, 12);
			this->chk900_920AM->Name = L"chk900_920AM";
			this->chk900_920AM->Size = System::Drawing::Size(118, 22);
			this->chk900_920AM->TabIndex = 18;
			this->chk900_920AM->Text = L"9:00 AM - 9:20 AM";
			this->chk900_920AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk900_920AM_CheckedChanged);
			// 
			// lbl900_920AMQuantity
			// 
			this->lbl900_920AMQuantity->AutoSize = true;
			this->lbl900_920AMQuantity->Location = System::Drawing::Point(49, 14);
			this->lbl900_920AMQuantity->Name = L"lbl900_920AMQuantity";
			this->lbl900_920AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl900_920AMQuantity->TabIndex = 80;
			this->lbl900_920AMQuantity->Text = L"label1";
			this->lbl900_920AMQuantity->Visible = false;
			// 
			// lbl940_1000AM7Quantity
			// 
			this->lbl940_1000AM7Quantity->AutoSize = true;
			this->lbl940_1000AM7Quantity->Location = System::Drawing::Point(49, 59);
			this->lbl940_1000AM7Quantity->Name = L"lbl940_1000AM7Quantity";
			this->lbl940_1000AM7Quantity->Size = System::Drawing::Size(35, 13);
			this->lbl940_1000AM7Quantity->TabIndex = 69;
			this->lbl940_1000AM7Quantity->Text = L"label1";
			this->lbl940_1000AM7Quantity->Visible = false;
			// 
			// lbl920_940AMQuantity
			// 
			this->lbl920_940AMQuantity->AutoSize = true;
			this->lbl920_940AMQuantity->Location = System::Drawing::Point(49, 36);
			this->lbl920_940AMQuantity->Name = L"lbl920_940AMQuantity";
			this->lbl920_940AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl920_940AMQuantity->TabIndex = 76;
			this->lbl920_940AMQuantity->Text = L"label1";
			this->lbl920_940AMQuantity->Visible = false;
			// 
			// pnl5_6PM
			// 
			this->pnl5_6PM->Controls->Add(this->chk540_600PM);
			this->pnl5_6PM->Controls->Add(this->chk520_540PM);
			this->pnl5_6PM->Controls->Add(this->chk500_520PM);
			this->pnl5_6PM->Controls->Add(this->lbl500_520PMQuantity);
			this->pnl5_6PM->Controls->Add(this->lbl540_600PMQuantity);
			this->pnl5_6PM->Controls->Add(this->lbl520_540PMQuantity);
			this->pnl5_6PM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl5_6PM->Location = System::Drawing::Point(0, 0);
			this->pnl5_6PM->Name = L"pnl5_6PM";
			this->pnl5_6PM->Size = System::Drawing::Size(264, 852);
			this->pnl5_6PM->TabIndex = 37;
			this->pnl5_6PM->Visible = false;
			// 
			// chk540_600PM
			// 
			this->chk540_600PM->Location = System::Drawing::Point(15, 57);
			this->chk540_600PM->Name = L"chk540_600PM";
			this->chk540_600PM->Size = System::Drawing::Size(118, 22);
			this->chk540_600PM->TabIndex = 22;
			this->chk540_600PM->Text = L"5:40 PM - 6:00 PM";
			// 
			// chk520_540PM
			// 
			this->chk520_540PM->Location = System::Drawing::Point(15, 34);
			this->chk520_540PM->Name = L"chk520_540PM";
			this->chk520_540PM->Size = System::Drawing::Size(118, 22);
			this->chk520_540PM->TabIndex = 19;
			this->chk520_540PM->Text = L"5:20 PM - 5:40 PM";
			// 
			// chk500_520PM
			// 
			this->chk500_520PM->Location = System::Drawing::Point(15, 12);
			this->chk500_520PM->Name = L"chk500_520PM";
			this->chk500_520PM->Size = System::Drawing::Size(118, 22);
			this->chk500_520PM->TabIndex = 18;
			this->chk500_520PM->Text = L"5:00 PM - 5:20 PM";
			// 
			// lbl500_520PMQuantity
			// 
			this->lbl500_520PMQuantity->AutoSize = true;
			this->lbl500_520PMQuantity->Location = System::Drawing::Point(52, 13);
			this->lbl500_520PMQuantity->Name = L"lbl500_520PMQuantity";
			this->lbl500_520PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl500_520PMQuantity->TabIndex = 50;
			this->lbl500_520PMQuantity->Text = L"label1";
			this->lbl500_520PMQuantity->Visible = false;
			// 
			// lbl540_600PMQuantity
			// 
			this->lbl540_600PMQuantity->AutoSize = true;
			this->lbl540_600PMQuantity->Location = System::Drawing::Point(52, 60);
			this->lbl540_600PMQuantity->Name = L"lbl540_600PMQuantity";
			this->lbl540_600PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl540_600PMQuantity->TabIndex = 48;
			this->lbl540_600PMQuantity->Text = L"label1";
			this->lbl540_600PMQuantity->Visible = false;
			// 
			// lbl520_540PMQuantity
			// 
			this->lbl520_540PMQuantity->AutoSize = true;
			this->lbl520_540PMQuantity->Location = System::Drawing::Point(52, 38);
			this->lbl520_540PMQuantity->Name = L"lbl520_540PMQuantity";
			this->lbl520_540PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl520_540PMQuantity->TabIndex = 49;
			this->lbl520_540PMQuantity->Text = L"label1";
			this->lbl520_540PMQuantity->Visible = false;
			// 
			// pnl1_2PM
			// 
			this->pnl1_2PM->Controls->Add(this->chk140_200PM);
			this->pnl1_2PM->Controls->Add(this->lbl100_120PMQuantity);
			this->pnl1_2PM->Controls->Add(this->chk120_140PM);
			this->pnl1_2PM->Controls->Add(this->chk100_120PM);
			this->pnl1_2PM->Controls->Add(this->lbl120_140PMQuantity);
			this->pnl1_2PM->Controls->Add(this->lbl140_200PMQuantity);
			this->pnl1_2PM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl1_2PM->Location = System::Drawing::Point(0, 0);
			this->pnl1_2PM->Name = L"pnl1_2PM";
			this->pnl1_2PM->Size = System::Drawing::Size(264, 852);
			this->pnl1_2PM->TabIndex = 34;
			this->pnl1_2PM->Visible = false;
			// 
			// chk140_200PM
			// 
			this->chk140_200PM->Location = System::Drawing::Point(15, 57);
			this->chk140_200PM->Name = L"chk140_200PM";
			this->chk140_200PM->Size = System::Drawing::Size(118, 22);
			this->chk140_200PM->TabIndex = 22;
			this->chk140_200PM->Text = L"1:40 PM - 2:00 PM";
			// 
			// lbl100_120PMQuantity
			// 
			this->lbl100_120PMQuantity->AutoSize = true;
			this->lbl100_120PMQuantity->Location = System::Drawing::Point(49, 12);
			this->lbl100_120PMQuantity->Name = L"lbl100_120PMQuantity";
			this->lbl100_120PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl100_120PMQuantity->TabIndex = 78;
			this->lbl100_120PMQuantity->Text = L"label1";
			this->lbl100_120PMQuantity->Visible = false;
			// 
			// chk120_140PM
			// 
			this->chk120_140PM->Location = System::Drawing::Point(15, 34);
			this->chk120_140PM->Name = L"chk120_140PM";
			this->chk120_140PM->Size = System::Drawing::Size(118, 22);
			this->chk120_140PM->TabIndex = 19;
			this->chk120_140PM->Text = L"1:20 PM - 1:40 PM";
			// 
			// chk100_120PM
			// 
			this->chk100_120PM->Location = System::Drawing::Point(15, 12);
			this->chk100_120PM->Name = L"chk100_120PM";
			this->chk100_120PM->Size = System::Drawing::Size(118, 22);
			this->chk100_120PM->TabIndex = 18;
			this->chk100_120PM->Text = L"1:00 PM - 1:20 PM";
			this->chk100_120PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk100_120PM_CheckedChanged);
			// 
			// lbl120_140PMQuantity
			// 
			this->lbl120_140PMQuantity->AutoSize = true;
			this->lbl120_140PMQuantity->Location = System::Drawing::Point(49, 34);
			this->lbl120_140PMQuantity->Name = L"lbl120_140PMQuantity";
			this->lbl120_140PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl120_140PMQuantity->TabIndex = 74;
			this->lbl120_140PMQuantity->Text = L"label1";
			this->lbl120_140PMQuantity->Visible = false;
			// 
			// lbl140_200PMQuantity
			// 
			this->lbl140_200PMQuantity->AutoSize = true;
			this->lbl140_200PMQuantity->Location = System::Drawing::Point(49, 57);
			this->lbl140_200PMQuantity->Name = L"lbl140_200PMQuantity";
			this->lbl140_200PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl140_200PMQuantity->TabIndex = 70;
			this->lbl140_200PMQuantity->Text = L"label1";
			this->lbl140_200PMQuantity->Visible = false;
			// 
			// pnl10_11AM
			// 
			this->pnl10_11AM->Controls->Add(this->chk1040_1100AM);
			this->pnl10_11AM->Controls->Add(this->chk1020_1040AM);
			this->pnl10_11AM->Controls->Add(this->chk1000_1020AM);
			this->pnl10_11AM->Controls->Add(this->lbl1000_1020AMQuantity);
			this->pnl10_11AM->Controls->Add(this->lbl1040_1100AMQuantity);
			this->pnl10_11AM->Controls->Add(this->lbl1020_1040AMQuantity);
			this->pnl10_11AM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl10_11AM->Location = System::Drawing::Point(0, 0);
			this->pnl10_11AM->Name = L"pnl10_11AM";
			this->pnl10_11AM->Size = System::Drawing::Size(264, 852);
			this->pnl10_11AM->TabIndex = 34;
			this->pnl10_11AM->Visible = false;
			// 
			// chk1040_1100AM
			// 
			this->chk1040_1100AM->Location = System::Drawing::Point(15, 57);
			this->chk1040_1100AM->Name = L"chk1040_1100AM";
			this->chk1040_1100AM->Size = System::Drawing::Size(131, 22);
			this->chk1040_1100AM->TabIndex = 22;
			this->chk1040_1100AM->Text = L"10:40 AM - 11:00 AM";
			this->chk1040_1100AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk1040_1100AM_CheckedChanged);
			// 
			// chk1020_1040AM
			// 
			this->chk1020_1040AM->Location = System::Drawing::Point(15, 34);
			this->chk1020_1040AM->Name = L"chk1020_1040AM";
			this->chk1020_1040AM->Size = System::Drawing::Size(131, 22);
			this->chk1020_1040AM->TabIndex = 19;
			this->chk1020_1040AM->Text = L"10:20 AM - 10:40 AM";
			this->chk1020_1040AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk1020_1040AM_CheckedChanged);
			// 
			// chk1000_1020AM
			// 
			this->chk1000_1020AM->Location = System::Drawing::Point(15, 12);
			this->chk1000_1020AM->Name = L"chk1000_1020AM";
			this->chk1000_1020AM->Size = System::Drawing::Size(131, 22);
			this->chk1000_1020AM->TabIndex = 18;
			this->chk1000_1020AM->Text = L"10:00 AM - 10:20 AM";
			this->chk1000_1020AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk1000_1020AM_CheckedChanged);
			// 
			// lbl1000_1020AMQuantity
			// 
			this->lbl1000_1020AMQuantity->AutoSize = true;
			this->lbl1000_1020AMQuantity->Location = System::Drawing::Point(52, 13);
			this->lbl1000_1020AMQuantity->Name = L"lbl1000_1020AMQuantity";
			this->lbl1000_1020AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl1000_1020AMQuantity->TabIndex = 41;
			this->lbl1000_1020AMQuantity->Text = L"label1";
			this->lbl1000_1020AMQuantity->Visible = false;
			// 
			// lbl1040_1100AMQuantity
			// 
			this->lbl1040_1100AMQuantity->AutoSize = true;
			this->lbl1040_1100AMQuantity->Location = System::Drawing::Point(52, 57);
			this->lbl1040_1100AMQuantity->Name = L"lbl1040_1100AMQuantity";
			this->lbl1040_1100AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl1040_1100AMQuantity->TabIndex = 39;
			this->lbl1040_1100AMQuantity->Text = L"label1";
			this->lbl1040_1100AMQuantity->Visible = false;
			// 
			// lbl1020_1040AMQuantity
			// 
			this->lbl1020_1040AMQuantity->AutoSize = true;
			this->lbl1020_1040AMQuantity->Location = System::Drawing::Point(52, 34);
			this->lbl1020_1040AMQuantity->Name = L"lbl1020_1040AMQuantity";
			this->lbl1020_1040AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl1020_1040AMQuantity->TabIndex = 40;
			this->lbl1020_1040AMQuantity->Text = L"label1";
			this->lbl1020_1040AMQuantity->Visible = false;
			// 
			// pnl2_3PM
			// 
			this->pnl2_3PM->Controls->Add(this->lbl240_300PMQuantity);
			this->pnl2_3PM->Controls->Add(this->lbl200_220PMQuantity);
			this->pnl2_3PM->Controls->Add(this->chk240_300PM);
			this->pnl2_3PM->Controls->Add(this->chk220_240PM);
			this->pnl2_3PM->Controls->Add(this->chk200_220PM);
			this->pnl2_3PM->Controls->Add(this->lbl220_240PMQuantity);
			this->pnl2_3PM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl2_3PM->Location = System::Drawing::Point(0, 0);
			this->pnl2_3PM->Name = L"pnl2_3PM";
			this->pnl2_3PM->Size = System::Drawing::Size(264, 852);
			this->pnl2_3PM->TabIndex = 34;
			this->pnl2_3PM->Visible = false;
			// 
			// lbl240_300PMQuantity
			// 
			this->lbl240_300PMQuantity->AutoSize = true;
			this->lbl240_300PMQuantity->Location = System::Drawing::Point(49, 57);
			this->lbl240_300PMQuantity->Name = L"lbl240_300PMQuantity";
			this->lbl240_300PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl240_300PMQuantity->TabIndex = 72;
			this->lbl240_300PMQuantity->Text = L"label1";
			this->lbl240_300PMQuantity->Visible = false;
			// 
			// lbl200_220PMQuantity
			// 
			this->lbl200_220PMQuantity->AutoSize = true;
			this->lbl200_220PMQuantity->Location = System::Drawing::Point(49, 12);
			this->lbl200_220PMQuantity->Name = L"lbl200_220PMQuantity";
			this->lbl200_220PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl200_220PMQuantity->TabIndex = 77;
			this->lbl200_220PMQuantity->Text = L"label1";
			this->lbl200_220PMQuantity->Visible = false;
			// 
			// chk240_300PM
			// 
			this->chk240_300PM->Location = System::Drawing::Point(15, 57);
			this->chk240_300PM->Name = L"chk240_300PM";
			this->chk240_300PM->Size = System::Drawing::Size(118, 22);
			this->chk240_300PM->TabIndex = 22;
			this->chk240_300PM->Text = L"2:40 PM - 3:00 PM";
			// 
			// chk220_240PM
			// 
			this->chk220_240PM->Location = System::Drawing::Point(15, 34);
			this->chk220_240PM->Name = L"chk220_240PM";
			this->chk220_240PM->Size = System::Drawing::Size(118, 22);
			this->chk220_240PM->TabIndex = 19;
			this->chk220_240PM->Text = L"2:20 PM - 2:40 PM";
			// 
			// chk200_220PM
			// 
			this->chk200_220PM->Location = System::Drawing::Point(15, 12);
			this->chk200_220PM->Name = L"chk200_220PM";
			this->chk200_220PM->Size = System::Drawing::Size(118, 22);
			this->chk200_220PM->TabIndex = 18;
			this->chk200_220PM->Text = L"2:00 PM - 2:20 PM";
			// 
			// lbl220_240PMQuantity
			// 
			this->lbl220_240PMQuantity->AutoSize = true;
			this->lbl220_240PMQuantity->Location = System::Drawing::Point(49, 34);
			this->lbl220_240PMQuantity->Name = L"lbl220_240PMQuantity";
			this->lbl220_240PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl220_240PMQuantity->TabIndex = 73;
			this->lbl220_240PMQuantity->Text = L"label1";
			this->lbl220_240PMQuantity->Visible = false;
			// 
			// pnl9_10PM
			// 
			this->pnl9_10PM->Controls->Add(this->chk940_1000PM);
			this->pnl9_10PM->Controls->Add(this->chk920_940PM);
			this->pnl9_10PM->Controls->Add(this->chk900_920PM);
			this->pnl9_10PM->Controls->Add(this->lbl900_920PMQuantity);
			this->pnl9_10PM->Controls->Add(this->lbl940_1000PMQuantity);
			this->pnl9_10PM->Controls->Add(this->lbl920_940PMQuantity);
			this->pnl9_10PM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl9_10PM->Location = System::Drawing::Point(0, 0);
			this->pnl9_10PM->Name = L"pnl9_10PM";
			this->pnl9_10PM->Size = System::Drawing::Size(264, 852);
			this->pnl9_10PM->TabIndex = 33;
			this->pnl9_10PM->Visible = false;
			// 
			// chk940_1000PM
			// 
			this->chk940_1000PM->Location = System::Drawing::Point(15, 57);
			this->chk940_1000PM->Name = L"chk940_1000PM";
			this->chk940_1000PM->Size = System::Drawing::Size(127, 22);
			this->chk940_1000PM->TabIndex = 22;
			this->chk940_1000PM->Text = L"9:40 PM - 10:00 PM";
			// 
			// chk920_940PM
			// 
			this->chk920_940PM->Location = System::Drawing::Point(15, 34);
			this->chk920_940PM->Name = L"chk920_940PM";
			this->chk920_940PM->Size = System::Drawing::Size(118, 22);
			this->chk920_940PM->TabIndex = 19;
			this->chk920_940PM->Text = L"9:20 PM - 9:40 PM";
			// 
			// chk900_920PM
			// 
			this->chk900_920PM->Location = System::Drawing::Point(15, 12);
			this->chk900_920PM->Name = L"chk900_920PM";
			this->chk900_920PM->Size = System::Drawing::Size(118, 22);
			this->chk900_920PM->TabIndex = 18;
			this->chk900_920PM->Text = L"9:00 PM - 9:20 PM";
			// 
			// lbl900_920PMQuantity
			// 
			this->lbl900_920PMQuantity->AutoSize = true;
			this->lbl900_920PMQuantity->Location = System::Drawing::Point(52, 15);
			this->lbl900_920PMQuantity->Name = L"lbl900_920PMQuantity";
			this->lbl900_920PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl900_920PMQuantity->TabIndex = 44;
			this->lbl900_920PMQuantity->Text = L"label1";
			this->lbl900_920PMQuantity->Visible = false;
			// 
			// lbl940_1000PMQuantity
			// 
			this->lbl940_1000PMQuantity->AutoSize = true;
			this->lbl940_1000PMQuantity->Location = System::Drawing::Point(52, 55);
			this->lbl940_1000PMQuantity->Name = L"lbl940_1000PMQuantity";
			this->lbl940_1000PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl940_1000PMQuantity->TabIndex = 42;
			this->lbl940_1000PMQuantity->Text = L"label1";
			this->lbl940_1000PMQuantity->Visible = false;
			// 
			// lbl920_940PMQuantity
			// 
			this->lbl920_940PMQuantity->AutoSize = true;
			this->lbl920_940PMQuantity->Location = System::Drawing::Point(52, 36);
			this->lbl920_940PMQuantity->Name = L"lbl920_940PMQuantity";
			this->lbl920_940PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl920_940PMQuantity->TabIndex = 43;
			this->lbl920_940PMQuantity->Text = L"label1";
			this->lbl920_940PMQuantity->Visible = false;
			// 
			// pnl5_6AM
			// 
			this->pnl5_6AM->Controls->Add(this->chk540_600AM);
			this->pnl5_6AM->Controls->Add(this->chk520_540AM);
			this->pnl5_6AM->Controls->Add(this->chk500_520AM);
			this->pnl5_6AM->Controls->Add(this->lbl500_520AMQuantity);
			this->pnl5_6AM->Controls->Add(this->lbl520_540AMQuantity);
			this->pnl5_6AM->Controls->Add(this->lbl540_600AMQuantity);
			this->pnl5_6AM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl5_6AM->Location = System::Drawing::Point(0, 0);
			this->pnl5_6AM->Name = L"pnl5_6AM";
			this->pnl5_6AM->Size = System::Drawing::Size(264, 852);
			this->pnl5_6AM->TabIndex = 25;
			this->pnl5_6AM->Visible = false;
			// 
			// chk540_600AM
			// 
			this->chk540_600AM->Location = System::Drawing::Point(15, 57);
			this->chk540_600AM->Name = L"chk540_600AM";
			this->chk540_600AM->Size = System::Drawing::Size(118, 22);
			this->chk540_600AM->TabIndex = 22;
			this->chk540_600AM->Text = L"5:40 AM - 6:00 AM";
			this->chk540_600AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk540_600AM_CheckedChanged);
			// 
			// chk520_540AM
			// 
			this->chk520_540AM->Location = System::Drawing::Point(15, 34);
			this->chk520_540AM->Name = L"chk520_540AM";
			this->chk520_540AM->Size = System::Drawing::Size(118, 22);
			this->chk520_540AM->TabIndex = 19;
			this->chk520_540AM->Text = L"5:20 AM - 5:40 AM";
			this->chk520_540AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk520_540AM_CheckedChanged);
			// 
			// chk500_520AM
			// 
			this->chk500_520AM->Location = System::Drawing::Point(15, 12);
			this->chk500_520AM->Name = L"chk500_520AM";
			this->chk500_520AM->Size = System::Drawing::Size(118, 22);
			this->chk500_520AM->TabIndex = 18;
			this->chk500_520AM->Text = L"5:00 AM - 5:20 AM";
			this->chk500_520AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk500_520AM_CheckedChanged);
			// 
			// lbl500_520AMQuantity
			// 
			this->lbl500_520AMQuantity->AutoSize = true;
			this->lbl500_520AMQuantity->Location = System::Drawing::Point(49, 12);
			this->lbl500_520AMQuantity->Name = L"lbl500_520AMQuantity";
			this->lbl500_520AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl500_520AMQuantity->TabIndex = 64;
			this->lbl500_520AMQuantity->Text = L"label1";
			this->lbl500_520AMQuantity->Visible = false;
			// 
			// lbl520_540AMQuantity
			// 
			this->lbl520_540AMQuantity->AutoSize = true;
			this->lbl520_540AMQuantity->Location = System::Drawing::Point(49, 34);
			this->lbl520_540AMQuantity->Name = L"lbl520_540AMQuantity";
			this->lbl520_540AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl520_540AMQuantity->TabIndex = 63;
			this->lbl520_540AMQuantity->Text = L"label1";
			this->lbl520_540AMQuantity->Visible = false;
			// 
			// lbl540_600AMQuantity
			// 
			this->lbl540_600AMQuantity->AutoSize = true;
			this->lbl540_600AMQuantity->Location = System::Drawing::Point(49, 56);
			this->lbl540_600AMQuantity->Name = L"lbl540_600AMQuantity";
			this->lbl540_600AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl540_600AMQuantity->TabIndex = 66;
			this->lbl540_600AMQuantity->Text = L"label1";
			this->lbl540_600AMQuantity->Visible = false;
			// 
			// pnl10_11PM
			// 
			this->pnl10_11PM->Controls->Add(this->lbl1040_1100PMQuantity);
			this->pnl10_11PM->Controls->Add(this->chk1040_1100PM);
			this->pnl10_11PM->Controls->Add(this->lbl1000_1020PMQuantity);
			this->pnl10_11PM->Controls->Add(this->chk1020_1040PM);
			this->pnl10_11PM->Controls->Add(this->chk1000_1020PM);
			this->pnl10_11PM->Controls->Add(this->lbl1020_1040PMQuantity);
			this->pnl10_11PM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl10_11PM->Location = System::Drawing::Point(0, 0);
			this->pnl10_11PM->Name = L"pnl10_11PM";
			this->pnl10_11PM->Size = System::Drawing::Size(264, 852);
			this->pnl10_11PM->TabIndex = 33;
			this->pnl10_11PM->Visible = false;
			// 
			// lbl1040_1100PMQuantity
			// 
			this->lbl1040_1100PMQuantity->AutoSize = true;
			this->lbl1040_1100PMQuantity->Location = System::Drawing::Point(52, 59);
			this->lbl1040_1100PMQuantity->Name = L"lbl1040_1100PMQuantity";
			this->lbl1040_1100PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl1040_1100PMQuantity->TabIndex = 36;
			this->lbl1040_1100PMQuantity->Text = L"label1";
			this->lbl1040_1100PMQuantity->Visible = false;
			// 
			// chk1040_1100PM
			// 
			this->chk1040_1100PM->Location = System::Drawing::Point(15, 57);
			this->chk1040_1100PM->Name = L"chk1040_1100PM";
			this->chk1040_1100PM->Size = System::Drawing::Size(127, 22);
			this->chk1040_1100PM->TabIndex = 22;
			this->chk1040_1100PM->Text = L"10:40 PM - 11:00 PM";
			// 
			// lbl1000_1020PMQuantity
			// 
			this->lbl1000_1020PMQuantity->AutoSize = true;
			this->lbl1000_1020PMQuantity->Location = System::Drawing::Point(52, 12);
			this->lbl1000_1020PMQuantity->Name = L"lbl1000_1020PMQuantity";
			this->lbl1000_1020PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl1000_1020PMQuantity->TabIndex = 38;
			this->lbl1000_1020PMQuantity->Text = L"label1";
			this->lbl1000_1020PMQuantity->Visible = false;
			// 
			// chk1020_1040PM
			// 
			this->chk1020_1040PM->Location = System::Drawing::Point(15, 34);
			this->chk1020_1040PM->Name = L"chk1020_1040PM";
			this->chk1020_1040PM->Size = System::Drawing::Size(127, 22);
			this->chk1020_1040PM->TabIndex = 19;
			this->chk1020_1040PM->Text = L"10:20 PM - 10:40 PM";
			// 
			// chk1000_1020PM
			// 
			this->chk1000_1020PM->Location = System::Drawing::Point(15, 12);
			this->chk1000_1020PM->Name = L"chk1000_1020PM";
			this->chk1000_1020PM->Size = System::Drawing::Size(127, 22);
			this->chk1000_1020PM->TabIndex = 18;
			this->chk1000_1020PM->Text = L"10:00 PM - 10:20 PM";
			// 
			// lbl1020_1040PMQuantity
			// 
			this->lbl1020_1040PMQuantity->AutoSize = true;
			this->lbl1020_1040PMQuantity->Location = System::Drawing::Point(52, 37);
			this->lbl1020_1040PMQuantity->Name = L"lbl1020_1040PMQuantity";
			this->lbl1020_1040PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl1020_1040PMQuantity->TabIndex = 37;
			this->lbl1020_1040PMQuantity->Text = L"label1";
			this->lbl1020_1040PMQuantity->Visible = false;
			// 
			// pnl3_4PM
			// 
			this->pnl3_4PM->Controls->Add(this->lbl300_320PMQuantity);
			this->pnl3_4PM->Controls->Add(this->chk340_400PM);
			this->pnl3_4PM->Controls->Add(this->chk320_340PM);
			this->pnl3_4PM->Controls->Add(this->chk300_320PM);
			this->pnl3_4PM->Controls->Add(this->lbl320_340PMQuantity);
			this->pnl3_4PM->Controls->Add(this->lbl340_400PMQuantity);
			this->pnl3_4PM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl3_4PM->Location = System::Drawing::Point(0, 0);
			this->pnl3_4PM->Name = L"pnl3_4PM";
			this->pnl3_4PM->Size = System::Drawing::Size(264, 852);
			this->pnl3_4PM->TabIndex = 35;
			this->pnl3_4PM->Visible = false;
			// 
			// lbl300_320PMQuantity
			// 
			this->lbl300_320PMQuantity->AutoSize = true;
			this->lbl300_320PMQuantity->Location = System::Drawing::Point(49, 12);
			this->lbl300_320PMQuantity->Name = L"lbl300_320PMQuantity";
			this->lbl300_320PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl300_320PMQuantity->TabIndex = 62;
			this->lbl300_320PMQuantity->Text = L"label1";
			this->lbl300_320PMQuantity->Visible = false;
			// 
			// chk340_400PM
			// 
			this->chk340_400PM->Location = System::Drawing::Point(15, 57);
			this->chk340_400PM->Name = L"chk340_400PM";
			this->chk340_400PM->Size = System::Drawing::Size(118, 22);
			this->chk340_400PM->TabIndex = 22;
			this->chk340_400PM->Text = L"3:40 PM - 4:00 PM";
			// 
			// chk320_340PM
			// 
			this->chk320_340PM->Location = System::Drawing::Point(15, 34);
			this->chk320_340PM->Name = L"chk320_340PM";
			this->chk320_340PM->Size = System::Drawing::Size(118, 22);
			this->chk320_340PM->TabIndex = 19;
			this->chk320_340PM->Text = L"3:20 PM - 3:40 PM";
			// 
			// chk300_320PM
			// 
			this->chk300_320PM->Location = System::Drawing::Point(15, 12);
			this->chk300_320PM->Name = L"chk300_320PM";
			this->chk300_320PM->Size = System::Drawing::Size(118, 22);
			this->chk300_320PM->TabIndex = 18;
			this->chk300_320PM->Text = L"3:00 PM - 3:20 PM";
			// 
			// lbl320_340PMQuantity
			// 
			this->lbl320_340PMQuantity->AutoSize = true;
			this->lbl320_340PMQuantity->Location = System::Drawing::Point(49, 31);
			this->lbl320_340PMQuantity->Name = L"lbl320_340PMQuantity";
			this->lbl320_340PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl320_340PMQuantity->TabIndex = 61;
			this->lbl320_340PMQuantity->Text = L"label1";
			this->lbl320_340PMQuantity->Visible = false;
			// 
			// lbl340_400PMQuantity
			// 
			this->lbl340_400PMQuantity->AutoSize = true;
			this->lbl340_400PMQuantity->Location = System::Drawing::Point(49, 54);
			this->lbl340_400PMQuantity->Name = L"lbl340_400PMQuantity";
			this->lbl340_400PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl340_400PMQuantity->TabIndex = 60;
			this->lbl340_400PMQuantity->Text = L"label1";
			this->lbl340_400PMQuantity->Visible = false;
			// 
			// pnl4_5PM
			// 
			this->pnl4_5PM->Controls->Add(this->lbl440_500PMQuantity);
			this->pnl4_5PM->Controls->Add(this->lbl400_420PMQuantity);
			this->pnl4_5PM->Controls->Add(this->chk440_500PM);
			this->pnl4_5PM->Controls->Add(this->chk420_440PM);
			this->pnl4_5PM->Controls->Add(this->chk400_420PM);
			this->pnl4_5PM->Controls->Add(this->lbl420_440PMQuantity);
			this->pnl4_5PM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl4_5PM->Location = System::Drawing::Point(0, 0);
			this->pnl4_5PM->Name = L"pnl4_5PM";
			this->pnl4_5PM->Size = System::Drawing::Size(264, 852);
			this->pnl4_5PM->TabIndex = 36;
			this->pnl4_5PM->Visible = false;
			// 
			// lbl440_500PMQuantity
			// 
			this->lbl440_500PMQuantity->AutoSize = true;
			this->lbl440_500PMQuantity->Location = System::Drawing::Point(52, 57);
			this->lbl440_500PMQuantity->Name = L"lbl440_500PMQuantity";
			this->lbl440_500PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl440_500PMQuantity->TabIndex = 33;
			this->lbl440_500PMQuantity->Text = L"label1";
			this->lbl440_500PMQuantity->Visible = false;
			// 
			// lbl400_420PMQuantity
			// 
			this->lbl400_420PMQuantity->AutoSize = true;
			this->lbl400_420PMQuantity->Location = System::Drawing::Point(52, 12);
			this->lbl400_420PMQuantity->Name = L"lbl400_420PMQuantity";
			this->lbl400_420PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl400_420PMQuantity->TabIndex = 35;
			this->lbl400_420PMQuantity->Text = L"label1";
			this->lbl400_420PMQuantity->Visible = false;
			// 
			// chk440_500PM
			// 
			this->chk440_500PM->Location = System::Drawing::Point(15, 57);
			this->chk440_500PM->Name = L"chk440_500PM";
			this->chk440_500PM->Size = System::Drawing::Size(118, 22);
			this->chk440_500PM->TabIndex = 22;
			this->chk440_500PM->Text = L"4:40 PM - 5:00 PM";
			// 
			// chk420_440PM
			// 
			this->chk420_440PM->Location = System::Drawing::Point(15, 34);
			this->chk420_440PM->Name = L"chk420_440PM";
			this->chk420_440PM->Size = System::Drawing::Size(118, 22);
			this->chk420_440PM->TabIndex = 19;
			this->chk420_440PM->Text = L"4:20 PM - 4:40 PM";
			// 
			// chk400_420PM
			// 
			this->chk400_420PM->Location = System::Drawing::Point(15, 12);
			this->chk400_420PM->Name = L"chk400_420PM";
			this->chk400_420PM->Size = System::Drawing::Size(118, 22);
			this->chk400_420PM->TabIndex = 18;
			this->chk400_420PM->Text = L"4:00 PM - 4:20 PM";
			// 
			// lbl420_440PMQuantity
			// 
			this->lbl420_440PMQuantity->AutoSize = true;
			this->lbl420_440PMQuantity->Location = System::Drawing::Point(52, 34);
			this->lbl420_440PMQuantity->Name = L"lbl420_440PMQuantity";
			this->lbl420_440PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl420_440PMQuantity->TabIndex = 34;
			this->lbl420_440PMQuantity->Text = L"label1";
			this->lbl420_440PMQuantity->Visible = false;
			// 
			// pnl11_12AM
			// 
			this->pnl11_12AM->Controls->Add(this->lbl1140_1200AMQuantity);
			this->pnl11_12AM->Controls->Add(this->chk1140_1200AM);
			this->pnl11_12AM->Controls->Add(this->chk1120_1140PM);
			this->pnl11_12AM->Controls->Add(this->chk1100_1120PM);
			this->pnl11_12AM->Controls->Add(this->lbl1100_1120PMQuantity);
			this->pnl11_12AM->Controls->Add(this->lbl1120_1140PMQuantity);
			this->pnl11_12AM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl11_12AM->Location = System::Drawing::Point(0, 0);
			this->pnl11_12AM->Name = L"pnl11_12AM";
			this->pnl11_12AM->Size = System::Drawing::Size(264, 852);
			this->pnl11_12AM->TabIndex = 33;
			this->pnl11_12AM->Visible = false;
			// 
			// lbl1140_1200AMQuantity
			// 
			this->lbl1140_1200AMQuantity->AutoSize = true;
			this->lbl1140_1200AMQuantity->Location = System::Drawing::Point(52, 62);
			this->lbl1140_1200AMQuantity->Name = L"lbl1140_1200AMQuantity";
			this->lbl1140_1200AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl1140_1200AMQuantity->TabIndex = 30;
			this->lbl1140_1200AMQuantity->Text = L"label1";
			this->lbl1140_1200AMQuantity->Visible = false;
			// 
			// chk1140_1200AM
			// 
			this->chk1140_1200AM->Location = System::Drawing::Point(15, 57);
			this->chk1140_1200AM->Name = L"chk1140_1200AM";
			this->chk1140_1200AM->Size = System::Drawing::Size(127, 22);
			this->chk1140_1200AM->TabIndex = 22;
			this->chk1140_1200AM->Text = L"11:40 PM - 12:00 AM";
			// 
			// chk1120_1140PM
			// 
			this->chk1120_1140PM->Location = System::Drawing::Point(15, 34);
			this->chk1120_1140PM->Name = L"chk1120_1140PM";
			this->chk1120_1140PM->Size = System::Drawing::Size(127, 22);
			this->chk1120_1140PM->TabIndex = 19;
			this->chk1120_1140PM->Text = L"11:20 PM - 11:40 PM";
			// 
			// chk1100_1120PM
			// 
			this->chk1100_1120PM->Location = System::Drawing::Point(15, 12);
			this->chk1100_1120PM->Name = L"chk1100_1120PM";
			this->chk1100_1120PM->Size = System::Drawing::Size(127, 22);
			this->chk1100_1120PM->TabIndex = 18;
			this->chk1100_1120PM->Text = L"11:00 PM - 11:20 PM";
			// 
			// lbl1100_1120PMQuantity
			// 
			this->lbl1100_1120PMQuantity->AutoSize = true;
			this->lbl1100_1120PMQuantity->Location = System::Drawing::Point(52, 11);
			this->lbl1100_1120PMQuantity->Name = L"lbl1100_1120PMQuantity";
			this->lbl1100_1120PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl1100_1120PMQuantity->TabIndex = 32;
			this->lbl1100_1120PMQuantity->Text = L"label1";
			this->lbl1100_1120PMQuantity->Visible = false;
			// 
			// lbl1120_1140PMQuantity
			// 
			this->lbl1120_1140PMQuantity->AutoSize = true;
			this->lbl1120_1140PMQuantity->Location = System::Drawing::Point(52, 37);
			this->lbl1120_1140PMQuantity->Name = L"lbl1120_1140PMQuantity";
			this->lbl1120_1140PMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl1120_1140PMQuantity->TabIndex = 31;
			this->lbl1120_1140PMQuantity->Text = L"label1";
			this->lbl1120_1140PMQuantity->Visible = false;
			// 
			// pnl6_7AM
			// 
			this->pnl6_7AM->Controls->Add(this->lbl640_700AMQuantity);
			this->pnl6_7AM->Controls->Add(this->chk640_700AM);
			this->pnl6_7AM->Controls->Add(this->lbl620_640AMQuantity);
			this->pnl6_7AM->Controls->Add(this->chk620_640AM);
			this->pnl6_7AM->Controls->Add(this->lbl600_620AMQuantity);
			this->pnl6_7AM->Controls->Add(this->chk600_620AM);
			this->pnl6_7AM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl6_7AM->Location = System::Drawing::Point(0, 0);
			this->pnl6_7AM->Name = L"pnl6_7AM";
			this->pnl6_7AM->Size = System::Drawing::Size(264, 852);
			this->pnl6_7AM->TabIndex = 30;
			this->pnl6_7AM->Visible = false;
			// 
			// lbl640_700AMQuantity
			// 
			this->lbl640_700AMQuantity->AutoSize = true;
			this->lbl640_700AMQuantity->Location = System::Drawing::Point(52, 57);
			this->lbl640_700AMQuantity->Name = L"lbl640_700AMQuantity";
			this->lbl640_700AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl640_700AMQuantity->TabIndex = 53;
			this->lbl640_700AMQuantity->Text = L"label1";
			this->lbl640_700AMQuantity->Visible = false;
			// 
			// chk640_700AM
			// 
			this->chk640_700AM->Location = System::Drawing::Point(15, 57);
			this->chk640_700AM->Name = L"chk640_700AM";
			this->chk640_700AM->Size = System::Drawing::Size(118, 22);
			this->chk640_700AM->TabIndex = 22;
			this->chk640_700AM->Text = L"6:40 AM - 7:00 AM";
			this->chk640_700AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk640_700AM_CheckedChanged);
			// 
			// lbl620_640AMQuantity
			// 
			this->lbl620_640AMQuantity->AutoSize = true;
			this->lbl620_640AMQuantity->Location = System::Drawing::Point(52, 34);
			this->lbl620_640AMQuantity->Name = L"lbl620_640AMQuantity";
			this->lbl620_640AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl620_640AMQuantity->TabIndex = 28;
			this->lbl620_640AMQuantity->Text = L"label1";
			this->lbl620_640AMQuantity->Visible = false;
			// 
			// chk620_640AM
			// 
			this->chk620_640AM->Location = System::Drawing::Point(15, 34);
			this->chk620_640AM->Name = L"chk620_640AM";
			this->chk620_640AM->Size = System::Drawing::Size(118, 22);
			this->chk620_640AM->TabIndex = 19;
			this->chk620_640AM->Text = L"6:20 AM - 6:40 AM";
			this->chk620_640AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk620_640AM_CheckedChanged);
			// 
			// lbl600_620AMQuantity
			// 
			this->lbl600_620AMQuantity->AutoSize = true;
			this->lbl600_620AMQuantity->Location = System::Drawing::Point(52, 12);
			this->lbl600_620AMQuantity->Name = L"lbl600_620AMQuantity";
			this->lbl600_620AMQuantity->Size = System::Drawing::Size(35, 13);
			this->lbl600_620AMQuantity->TabIndex = 29;
			this->lbl600_620AMQuantity->Text = L"label1";
			this->lbl600_620AMQuantity->Visible = false;
			// 
			// chk600_620AM
			// 
			this->chk600_620AM->Location = System::Drawing::Point(15, 12);
			this->chk600_620AM->Name = L"chk600_620AM";
			this->chk600_620AM->Size = System::Drawing::Size(118, 22);
			this->chk600_620AM->TabIndex = 18;
			this->chk600_620AM->Text = L"6:00 AM - 6:20 AM";
			this->chk600_620AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk600_620AM_CheckedChanged);
			// 
			// pnl12Hr
			// 
			this->pnl12Hr->Controls->Add(this->rbtn11_12AM);
			this->pnl12Hr->Controls->Add(this->rbtn10_11PM);
			this->pnl12Hr->Controls->Add(this->rbtn9_10PM);
			this->pnl12Hr->Controls->Add(this->rbtn8_9PM);
			this->pnl12Hr->Controls->Add(this->rbtn7_8PM);
			this->pnl12Hr->Controls->Add(this->rbtn6_7PM);
			this->pnl12Hr->Controls->Add(this->rbtn5_6PM);
			this->pnl12Hr->Controls->Add(this->rbtn4_5PM);
			this->pnl12Hr->Controls->Add(this->rbtn3_4PM);
			this->pnl12Hr->Controls->Add(this->rbtn2_3PM);
			this->pnl12Hr->Controls->Add(this->rbtn1_2PM);
			this->pnl12Hr->Controls->Add(this->rbtn11_12PM);
			this->pnl12Hr->Controls->Add(this->rbtn10_11AM);
			this->pnl12Hr->Controls->Add(this->rbtn9_10AM);
			this->pnl12Hr->Controls->Add(this->rbtn8_9AM);
			this->pnl12Hr->Controls->Add(this->rbtn7_8AM);
			this->pnl12Hr->Controls->Add(this->rbtn6_7AM);
			this->pnl12Hr->Controls->Add(this->rbtn5_6AM);
			this->pnl12Hr->Location = System::Drawing::Point(108, 56);
			this->pnl12Hr->Name = L"pnl12Hr";
			this->pnl12Hr->Size = System::Drawing::Size(136, 310);
			this->pnl12Hr->TabIndex = 27;
			// 
			// rbtn11_12AM
			// 
			this->rbtn11_12AM->AutoSize = true;
			this->rbtn11_12AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn11_12AM->Location = System::Drawing::Point(0, 289);
			this->rbtn11_12AM->Name = L"rbtn11_12AM";
			this->rbtn11_12AM->Size = System::Drawing::Size(136, 17);
			this->rbtn11_12AM->TabIndex = 43;
			this->rbtn11_12AM->TabStop = true;
			this->rbtn11_12AM->Text = L"11:00 PM - 12:00 AM";
			this->rbtn11_12AM->UseVisualStyleBackColor = true;
			this->rbtn11_12AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn11_12AM_CheckedChanged);
			// 
			// rbtn10_11PM
			// 
			this->rbtn10_11PM->AutoSize = true;
			this->rbtn10_11PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn10_11PM->Location = System::Drawing::Point(0, 272);
			this->rbtn10_11PM->Name = L"rbtn10_11PM";
			this->rbtn10_11PM->Size = System::Drawing::Size(136, 17);
			this->rbtn10_11PM->TabIndex = 42;
			this->rbtn10_11PM->TabStop = true;
			this->rbtn10_11PM->Text = L"10:00 PM - 11:00 PM";
			this->rbtn10_11PM->UseVisualStyleBackColor = true;
			this->rbtn10_11PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn10_11PM_CheckedChanged);
			// 
			// rbtn9_10PM
			// 
			this->rbtn9_10PM->AutoSize = true;
			this->rbtn9_10PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn9_10PM->Location = System::Drawing::Point(0, 255);
			this->rbtn9_10PM->Name = L"rbtn9_10PM";
			this->rbtn9_10PM->Size = System::Drawing::Size(136, 17);
			this->rbtn9_10PM->TabIndex = 41;
			this->rbtn9_10PM->TabStop = true;
			this->rbtn9_10PM->Text = L"9:00 PM - 10:00 PM";
			this->rbtn9_10PM->UseVisualStyleBackColor = true;
			this->rbtn9_10PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn9_10PM_CheckedChanged);
			// 
			// rbtn8_9PM
			// 
			this->rbtn8_9PM->AutoSize = true;
			this->rbtn8_9PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn8_9PM->Location = System::Drawing::Point(0, 238);
			this->rbtn8_9PM->Name = L"rbtn8_9PM";
			this->rbtn8_9PM->Size = System::Drawing::Size(136, 17);
			this->rbtn8_9PM->TabIndex = 40;
			this->rbtn8_9PM->TabStop = true;
			this->rbtn8_9PM->Text = L"8:00 PM - 9:00 PM";
			this->rbtn8_9PM->UseVisualStyleBackColor = true;
			this->rbtn8_9PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn8_9PM_CheckedChanged);
			// 
			// rbtn7_8PM
			// 
			this->rbtn7_8PM->AutoSize = true;
			this->rbtn7_8PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn7_8PM->Location = System::Drawing::Point(0, 221);
			this->rbtn7_8PM->Name = L"rbtn7_8PM";
			this->rbtn7_8PM->Size = System::Drawing::Size(136, 17);
			this->rbtn7_8PM->TabIndex = 39;
			this->rbtn7_8PM->TabStop = true;
			this->rbtn7_8PM->Text = L"7:00 PM - 8:00 PM";
			this->rbtn7_8PM->UseVisualStyleBackColor = true;
			this->rbtn7_8PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn7_8PM_CheckedChanged);
			// 
			// rbtn6_7PM
			// 
			this->rbtn6_7PM->AutoSize = true;
			this->rbtn6_7PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn6_7PM->Location = System::Drawing::Point(0, 204);
			this->rbtn6_7PM->Name = L"rbtn6_7PM";
			this->rbtn6_7PM->Size = System::Drawing::Size(136, 17);
			this->rbtn6_7PM->TabIndex = 38;
			this->rbtn6_7PM->TabStop = true;
			this->rbtn6_7PM->Text = L"6:00 PM - 7:00 PM";
			this->rbtn6_7PM->UseVisualStyleBackColor = true;
			this->rbtn6_7PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn6_7PM_CheckedChanged);
			// 
			// rbtn5_6PM
			// 
			this->rbtn5_6PM->AutoSize = true;
			this->rbtn5_6PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn5_6PM->Location = System::Drawing::Point(0, 187);
			this->rbtn5_6PM->Name = L"rbtn5_6PM";
			this->rbtn5_6PM->Size = System::Drawing::Size(136, 17);
			this->rbtn5_6PM->TabIndex = 37;
			this->rbtn5_6PM->TabStop = true;
			this->rbtn5_6PM->Text = L"5:00 PM - 6:00 PM";
			this->rbtn5_6PM->UseVisualStyleBackColor = true;
			this->rbtn5_6PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn5_6PM_CheckedChanged);
			// 
			// rbtn4_5PM
			// 
			this->rbtn4_5PM->AutoSize = true;
			this->rbtn4_5PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn4_5PM->Location = System::Drawing::Point(0, 170);
			this->rbtn4_5PM->Name = L"rbtn4_5PM";
			this->rbtn4_5PM->Size = System::Drawing::Size(136, 17);
			this->rbtn4_5PM->TabIndex = 36;
			this->rbtn4_5PM->TabStop = true;
			this->rbtn4_5PM->Text = L"4:00 PM - 5:00 PM";
			this->rbtn4_5PM->UseVisualStyleBackColor = true;
			this->rbtn4_5PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn4_5PM_CheckedChanged);
			// 
			// rbtn3_4PM
			// 
			this->rbtn3_4PM->AutoSize = true;
			this->rbtn3_4PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn3_4PM->Location = System::Drawing::Point(0, 153);
			this->rbtn3_4PM->Name = L"rbtn3_4PM";
			this->rbtn3_4PM->Size = System::Drawing::Size(136, 17);
			this->rbtn3_4PM->TabIndex = 35;
			this->rbtn3_4PM->TabStop = true;
			this->rbtn3_4PM->Text = L"3:00 PM - 4:00 PM";
			this->rbtn3_4PM->UseVisualStyleBackColor = true;
			this->rbtn3_4PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn3_4PM_CheckedChanged);
			// 
			// rbtn2_3PM
			// 
			this->rbtn2_3PM->AutoSize = true;
			this->rbtn2_3PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn2_3PM->Location = System::Drawing::Point(0, 136);
			this->rbtn2_3PM->Name = L"rbtn2_3PM";
			this->rbtn2_3PM->Size = System::Drawing::Size(136, 17);
			this->rbtn2_3PM->TabIndex = 34;
			this->rbtn2_3PM->TabStop = true;
			this->rbtn2_3PM->Text = L"2:00 PM - 3:00 PM";
			this->rbtn2_3PM->UseVisualStyleBackColor = true;
			this->rbtn2_3PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn2_3PM_CheckedChanged);
			// 
			// rbtn1_2PM
			// 
			this->rbtn1_2PM->AutoSize = true;
			this->rbtn1_2PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn1_2PM->Location = System::Drawing::Point(0, 119);
			this->rbtn1_2PM->Name = L"rbtn1_2PM";
			this->rbtn1_2PM->Size = System::Drawing::Size(136, 17);
			this->rbtn1_2PM->TabIndex = 33;
			this->rbtn1_2PM->TabStop = true;
			this->rbtn1_2PM->Text = L"1:00 PM - 2:00 PM";
			this->rbtn1_2PM->UseVisualStyleBackColor = true;
			this->rbtn1_2PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn1_2PM_CheckedChanged);
			// 
			// rbtn11_12PM
			// 
			this->rbtn11_12PM->AutoSize = true;
			this->rbtn11_12PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn11_12PM->Location = System::Drawing::Point(0, 102);
			this->rbtn11_12PM->Name = L"rbtn11_12PM";
			this->rbtn11_12PM->Size = System::Drawing::Size(136, 17);
			this->rbtn11_12PM->TabIndex = 32;
			this->rbtn11_12PM->TabStop = true;
			this->rbtn11_12PM->Text = L"11:00 AM - 12:00 PM";
			this->rbtn11_12PM->UseVisualStyleBackColor = true;
			this->rbtn11_12PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn11_12PM_CheckedChanged);
			// 
			// rbtn10_11AM
			// 
			this->rbtn10_11AM->AutoSize = true;
			this->rbtn10_11AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn10_11AM->Location = System::Drawing::Point(0, 85);
			this->rbtn10_11AM->Name = L"rbtn10_11AM";
			this->rbtn10_11AM->Size = System::Drawing::Size(136, 17);
			this->rbtn10_11AM->TabIndex = 31;
			this->rbtn10_11AM->TabStop = true;
			this->rbtn10_11AM->Text = L"10:00 AM - 11:00 AM";
			this->rbtn10_11AM->UseVisualStyleBackColor = true;
			this->rbtn10_11AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn10_11AM_CheckedChanged);
			// 
			// rbtn9_10AM
			// 
			this->rbtn9_10AM->AutoSize = true;
			this->rbtn9_10AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn9_10AM->Location = System::Drawing::Point(0, 68);
			this->rbtn9_10AM->Name = L"rbtn9_10AM";
			this->rbtn9_10AM->Size = System::Drawing::Size(136, 17);
			this->rbtn9_10AM->TabIndex = 30;
			this->rbtn9_10AM->TabStop = true;
			this->rbtn9_10AM->Text = L"9:00 AM - 10:00 AM";
			this->rbtn9_10AM->UseVisualStyleBackColor = true;
			this->rbtn9_10AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn9_10AM_CheckedChanged);
			// 
			// rbtn8_9AM
			// 
			this->rbtn8_9AM->AutoSize = true;
			this->rbtn8_9AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn8_9AM->Location = System::Drawing::Point(0, 51);
			this->rbtn8_9AM->Name = L"rbtn8_9AM";
			this->rbtn8_9AM->Size = System::Drawing::Size(136, 17);
			this->rbtn8_9AM->TabIndex = 29;
			this->rbtn8_9AM->TabStop = true;
			this->rbtn8_9AM->Text = L"8:00 AM - 9:00 AM";
			this->rbtn8_9AM->UseVisualStyleBackColor = true;
			this->rbtn8_9AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn8_9AM_CheckedChanged);
			// 
			// rbtn7_8AM
			// 
			this->rbtn7_8AM->AutoSize = true;
			this->rbtn7_8AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn7_8AM->Location = System::Drawing::Point(0, 34);
			this->rbtn7_8AM->Name = L"rbtn7_8AM";
			this->rbtn7_8AM->Size = System::Drawing::Size(136, 17);
			this->rbtn7_8AM->TabIndex = 28;
			this->rbtn7_8AM->TabStop = true;
			this->rbtn7_8AM->Text = L"7:00 AM - 8:00 AM";
			this->rbtn7_8AM->UseVisualStyleBackColor = true;
			this->rbtn7_8AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn7_8AM_CheckedChanged);
			// 
			// rbtn6_7AM
			// 
			this->rbtn6_7AM->AutoSize = true;
			this->rbtn6_7AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn6_7AM->Location = System::Drawing::Point(0, 17);
			this->rbtn6_7AM->Name = L"rbtn6_7AM";
			this->rbtn6_7AM->Size = System::Drawing::Size(136, 17);
			this->rbtn6_7AM->TabIndex = 27;
			this->rbtn6_7AM->TabStop = true;
			this->rbtn6_7AM->Text = L"6:00 AM - 7:00 AM";
			this->rbtn6_7AM->UseVisualStyleBackColor = true;
			this->rbtn6_7AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn6_7AM_CheckedChanged);
			// 
			// rbtn5_6AM
			// 
			this->rbtn5_6AM->AutoSize = true;
			this->rbtn5_6AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn5_6AM->Location = System::Drawing::Point(0, 0);
			this->rbtn5_6AM->Name = L"rbtn5_6AM";
			this->rbtn5_6AM->Size = System::Drawing::Size(136, 17);
			this->rbtn5_6AM->TabIndex = 26;
			this->rbtn5_6AM->TabStop = true;
			this->rbtn5_6AM->Text = L"5:00 AM - 6:00 AM";
			this->rbtn5_6AM->UseVisualStyleBackColor = true;
			this->rbtn5_6AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn5_6AM_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(281, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Select Available Times:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(149, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Hours:";
			// 
			// btnSubmitTimes
			// 
			this->btnSubmitTimes->Location = System::Drawing::Point(121, 383);
			this->btnSubmitTimes->Name = L"btnSubmitTimes";
			this->btnSubmitTimes->Size = System::Drawing::Size(103, 23);
			this->btnSubmitTimes->TabIndex = 0;
			this->btnSubmitTimes->Text = L"Submit";
			this->btnSubmitTimes->UseVisualStyleBackColor = true;
			this->btnSubmitTimes->Click += gcnew System::EventHandler(this, &MyForm::btnSubmitTimes_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(183, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Create Event:";
			// 
			// pnl24Hr
			// 
			this->pnl24Hr->Controls->Add(this->rbtn23_00);
			this->pnl24Hr->Controls->Add(this->rbtn22_23);
			this->pnl24Hr->Controls->Add(this->rbtn21_22);
			this->pnl24Hr->Controls->Add(this->rbtn20_21);
			this->pnl24Hr->Controls->Add(this->rbtn19_20);
			this->pnl24Hr->Controls->Add(this->rbtn18_19);
			this->pnl24Hr->Controls->Add(this->rbtn17_18);
			this->pnl24Hr->Controls->Add(this->rbtn16_17);
			this->pnl24Hr->Controls->Add(this->rbtn15_16);
			this->pnl24Hr->Controls->Add(this->rbtn14_15);
			this->pnl24Hr->Controls->Add(this->rbtn13_14);
			this->pnl24Hr->Controls->Add(this->rbtn11_12);
			this->pnl24Hr->Controls->Add(this->rbtn10_11);
			this->pnl24Hr->Controls->Add(this->rbtn09_10);
			this->pnl24Hr->Controls->Add(this->rbtn08_09);
			this->pnl24Hr->Controls->Add(this->rbtn07_08);
			this->pnl24Hr->Controls->Add(this->rbtn06_07);
			this->pnl24Hr->Controls->Add(this->rbtn05_06);
			this->pnl24Hr->Location = System::Drawing::Point(108, 56);
			this->pnl24Hr->Name = L"pnl24Hr";
			this->pnl24Hr->Size = System::Drawing::Size(136, 310);
			this->pnl24Hr->TabIndex = 44;
			// 
			// rbtn23_00
			// 
			this->rbtn23_00->AutoSize = true;
			this->rbtn23_00->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn23_00->Location = System::Drawing::Point(0, 289);
			this->rbtn23_00->Name = L"rbtn23_00";
			this->rbtn23_00->Size = System::Drawing::Size(136, 17);
			this->rbtn23_00->TabIndex = 43;
			this->rbtn23_00->TabStop = true;
			this->rbtn23_00->Text = L"23:00 - 00:00";
			this->rbtn23_00->UseVisualStyleBackColor = true;
			this->rbtn23_00->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn23_00_CheckedChanged);
			// 
			// rbtn22_23
			// 
			this->rbtn22_23->AutoSize = true;
			this->rbtn22_23->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn22_23->Location = System::Drawing::Point(0, 272);
			this->rbtn22_23->Name = L"rbtn22_23";
			this->rbtn22_23->Size = System::Drawing::Size(136, 17);
			this->rbtn22_23->TabIndex = 42;
			this->rbtn22_23->TabStop = true;
			this->rbtn22_23->Text = L"22:00 - 23:00";
			this->rbtn22_23->UseVisualStyleBackColor = true;
			this->rbtn22_23->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn22_23_CheckedChanged);
			// 
			// rbtn21_22
			// 
			this->rbtn21_22->AutoSize = true;
			this->rbtn21_22->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn21_22->Location = System::Drawing::Point(0, 255);
			this->rbtn21_22->Name = L"rbtn21_22";
			this->rbtn21_22->Size = System::Drawing::Size(136, 17);
			this->rbtn21_22->TabIndex = 41;
			this->rbtn21_22->TabStop = true;
			this->rbtn21_22->Text = L"21:00 - 22:00";
			this->rbtn21_22->UseVisualStyleBackColor = true;
			this->rbtn21_22->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn21_22_CheckedChanged);
			// 
			// rbtn20_21
			// 
			this->rbtn20_21->AutoSize = true;
			this->rbtn20_21->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn20_21->Location = System::Drawing::Point(0, 238);
			this->rbtn20_21->Name = L"rbtn20_21";
			this->rbtn20_21->Size = System::Drawing::Size(136, 17);
			this->rbtn20_21->TabIndex = 40;
			this->rbtn20_21->TabStop = true;
			this->rbtn20_21->Text = L"20:00 - 21:00";
			this->rbtn20_21->UseVisualStyleBackColor = true;
			this->rbtn20_21->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn20_21_CheckedChanged);
			// 
			// rbtn19_20
			// 
			this->rbtn19_20->AutoSize = true;
			this->rbtn19_20->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn19_20->Location = System::Drawing::Point(0, 221);
			this->rbtn19_20->Name = L"rbtn19_20";
			this->rbtn19_20->Size = System::Drawing::Size(136, 17);
			this->rbtn19_20->TabIndex = 39;
			this->rbtn19_20->TabStop = true;
			this->rbtn19_20->Text = L"19:00 - 20:00";
			this->rbtn19_20->UseVisualStyleBackColor = true;
			this->rbtn19_20->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn19_20_CheckedChanged);
			// 
			// rbtn18_19
			// 
			this->rbtn18_19->AutoSize = true;
			this->rbtn18_19->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn18_19->Location = System::Drawing::Point(0, 204);
			this->rbtn18_19->Name = L"rbtn18_19";
			this->rbtn18_19->Size = System::Drawing::Size(136, 17);
			this->rbtn18_19->TabIndex = 38;
			this->rbtn18_19->TabStop = true;
			this->rbtn18_19->Text = L"18:00 - 19:00";
			this->rbtn18_19->UseVisualStyleBackColor = true;
			this->rbtn18_19->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn18_19_CheckedChanged);
			// 
			// rbtn17_18
			// 
			this->rbtn17_18->AutoSize = true;
			this->rbtn17_18->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn17_18->Location = System::Drawing::Point(0, 187);
			this->rbtn17_18->Name = L"rbtn17_18";
			this->rbtn17_18->Size = System::Drawing::Size(136, 17);
			this->rbtn17_18->TabIndex = 37;
			this->rbtn17_18->TabStop = true;
			this->rbtn17_18->Text = L"17:00 - 18:00";
			this->rbtn17_18->UseVisualStyleBackColor = true;
			this->rbtn17_18->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn17_18_CheckedChanged);
			// 
			// rbtn16_17
			// 
			this->rbtn16_17->AutoSize = true;
			this->rbtn16_17->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn16_17->Location = System::Drawing::Point(0, 170);
			this->rbtn16_17->Name = L"rbtn16_17";
			this->rbtn16_17->Size = System::Drawing::Size(136, 17);
			this->rbtn16_17->TabIndex = 36;
			this->rbtn16_17->TabStop = true;
			this->rbtn16_17->Text = L"16:00 - 17:00";
			this->rbtn16_17->UseVisualStyleBackColor = true;
			this->rbtn16_17->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn16_17_CheckedChanged);
			// 
			// rbtn15_16
			// 
			this->rbtn15_16->AutoSize = true;
			this->rbtn15_16->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn15_16->Location = System::Drawing::Point(0, 153);
			this->rbtn15_16->Name = L"rbtn15_16";
			this->rbtn15_16->Size = System::Drawing::Size(136, 17);
			this->rbtn15_16->TabIndex = 35;
			this->rbtn15_16->TabStop = true;
			this->rbtn15_16->Text = L"15:00 - 16:00";
			this->rbtn15_16->UseVisualStyleBackColor = true;
			this->rbtn15_16->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn15_16_CheckedChanged);
			// 
			// rbtn14_15
			// 
			this->rbtn14_15->AutoSize = true;
			this->rbtn14_15->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn14_15->Location = System::Drawing::Point(0, 136);
			this->rbtn14_15->Name = L"rbtn14_15";
			this->rbtn14_15->Size = System::Drawing::Size(136, 17);
			this->rbtn14_15->TabIndex = 34;
			this->rbtn14_15->TabStop = true;
			this->rbtn14_15->Text = L"14:00 - 15:00";
			this->rbtn14_15->UseVisualStyleBackColor = true;
			this->rbtn14_15->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn14_15_CheckedChanged);
			// 
			// rbtn13_14
			// 
			this->rbtn13_14->AutoSize = true;
			this->rbtn13_14->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn13_14->Location = System::Drawing::Point(0, 119);
			this->rbtn13_14->Name = L"rbtn13_14";
			this->rbtn13_14->Size = System::Drawing::Size(136, 17);
			this->rbtn13_14->TabIndex = 33;
			this->rbtn13_14->TabStop = true;
			this->rbtn13_14->Text = L"13:00 - 14:00";
			this->rbtn13_14->UseVisualStyleBackColor = true;
			this->rbtn13_14->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn13_14_CheckedChanged);
			// 
			// rbtn11_12
			// 
			this->rbtn11_12->AutoSize = true;
			this->rbtn11_12->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn11_12->Location = System::Drawing::Point(0, 102);
			this->rbtn11_12->Name = L"rbtn11_12";
			this->rbtn11_12->Size = System::Drawing::Size(136, 17);
			this->rbtn11_12->TabIndex = 32;
			this->rbtn11_12->TabStop = true;
			this->rbtn11_12->Text = L"11:00 - 12:00";
			this->rbtn11_12->UseVisualStyleBackColor = true;
			this->rbtn11_12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn11_12_CheckedChanged);
			// 
			// rbtn10_11
			// 
			this->rbtn10_11->AutoSize = true;
			this->rbtn10_11->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn10_11->Location = System::Drawing::Point(0, 85);
			this->rbtn10_11->Name = L"rbtn10_11";
			this->rbtn10_11->Size = System::Drawing::Size(136, 17);
			this->rbtn10_11->TabIndex = 31;
			this->rbtn10_11->TabStop = true;
			this->rbtn10_11->Text = L"10:00 - 11:00";
			this->rbtn10_11->UseVisualStyleBackColor = true;
			this->rbtn10_11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn10_11_CheckedChanged);
			// 
			// rbtn09_10
			// 
			this->rbtn09_10->AutoSize = true;
			this->rbtn09_10->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn09_10->Location = System::Drawing::Point(0, 68);
			this->rbtn09_10->Name = L"rbtn09_10";
			this->rbtn09_10->Size = System::Drawing::Size(136, 17);
			this->rbtn09_10->TabIndex = 30;
			this->rbtn09_10->TabStop = true;
			this->rbtn09_10->Text = L"09:00 - 10:00";
			this->rbtn09_10->UseVisualStyleBackColor = true;
			this->rbtn09_10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn09_10_CheckedChanged);
			// 
			// rbtn08_09
			// 
			this->rbtn08_09->AutoSize = true;
			this->rbtn08_09->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn08_09->Location = System::Drawing::Point(0, 51);
			this->rbtn08_09->Name = L"rbtn08_09";
			this->rbtn08_09->Size = System::Drawing::Size(136, 17);
			this->rbtn08_09->TabIndex = 29;
			this->rbtn08_09->TabStop = true;
			this->rbtn08_09->Text = L"08:00 - 09:00";
			this->rbtn08_09->UseVisualStyleBackColor = true;
			this->rbtn08_09->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn08_09_CheckedChanged);
			// 
			// rbtn07_08
			// 
			this->rbtn07_08->AutoSize = true;
			this->rbtn07_08->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn07_08->Location = System::Drawing::Point(0, 34);
			this->rbtn07_08->Name = L"rbtn07_08";
			this->rbtn07_08->Size = System::Drawing::Size(136, 17);
			this->rbtn07_08->TabIndex = 28;
			this->rbtn07_08->TabStop = true;
			this->rbtn07_08->Text = L"07:00 - 08:00";
			this->rbtn07_08->UseVisualStyleBackColor = true;
			this->rbtn07_08->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn07_08_CheckedChanged);
			// 
			// rbtn06_07
			// 
			this->rbtn06_07->AutoSize = true;
			this->rbtn06_07->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn06_07->Location = System::Drawing::Point(0, 17);
			this->rbtn06_07->Name = L"rbtn06_07";
			this->rbtn06_07->Size = System::Drawing::Size(136, 17);
			this->rbtn06_07->TabIndex = 27;
			this->rbtn06_07->TabStop = true;
			this->rbtn06_07->Text = L"06:00 - 07:00";
			this->rbtn06_07->UseVisualStyleBackColor = true;
			this->rbtn06_07->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn06_07_CheckedChanged);
			// 
			// rbtn05_06
			// 
			this->rbtn05_06->AutoSize = true;
			this->rbtn05_06->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn05_06->Location = System::Drawing::Point(0, 0);
			this->rbtn05_06->Name = L"rbtn05_06";
			this->rbtn05_06->Size = System::Drawing::Size(136, 17);
			this->rbtn05_06->TabIndex = 26;
			this->rbtn05_06->TabStop = true;
			this->rbtn05_06->Text = L"05:00 - 06:00";
			this->rbtn05_06->UseVisualStyleBackColor = true;
			this->rbtn05_06->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn05_06_CheckedChanged);
			// 
			// grpViewYourEvents
			// 
			this->grpViewYourEvents->Controls->Add(this->btnViewEvent);
			this->grpViewYourEvents->Controls->Add(this->lstYourEvents);
			this->grpViewYourEvents->Controls->Add(this->btnUserBack);
			this->grpViewYourEvents->Controls->Add(this->lblViewEvent);
			this->grpViewYourEvents->Controls->Add(this->btnViewEventsBack);
			this->grpViewYourEvents->Location = System::Drawing::Point(237, 72);
			this->grpViewYourEvents->Name = L"grpViewYourEvents";
			this->grpViewYourEvents->Size = System::Drawing::Size(200, 361);
			this->grpViewYourEvents->TabIndex = 9;
			this->grpViewYourEvents->TabStop = false;
			this->grpViewYourEvents->Visible = false;
			// 
			// btnViewEvent
			// 
			this->btnViewEvent->Location = System::Drawing::Point(44, 289);
			this->btnViewEvent->Name = L"btnViewEvent";
			this->btnViewEvent->Size = System::Drawing::Size(103, 23);
			this->btnViewEvent->TabIndex = 4;
			this->btnViewEvent->Text = L"View Event";
			this->btnViewEvent->UseVisualStyleBackColor = true;
			this->btnViewEvent->Click += gcnew System::EventHandler(this, &MyForm::btnViewEvent_Click);
			// 
			// lstYourEvents
			// 
			this->lstYourEvents->FormattingEnabled = true;
			this->lstYourEvents->Location = System::Drawing::Point(6, 46);
			this->lstYourEvents->Name = L"lstYourEvents";
			this->lstYourEvents->Size = System::Drawing::Size(188, 225);
			this->lstYourEvents->TabIndex = 3;
			// 
			// btnUserBack
			// 
			this->btnUserBack->Location = System::Drawing::Point(44, 318);
			this->btnUserBack->Name = L"btnUserBack";
			this->btnUserBack->Size = System::Drawing::Size(103, 23);
			this->btnUserBack->TabIndex = 12;
			this->btnUserBack->Text = L"Back";
			this->btnUserBack->UseVisualStyleBackColor = true;
			this->btnUserBack->Click += gcnew System::EventHandler(this, &MyForm::btnUserBack_Click);
			// 
			// lblViewEvent
			// 
			this->lblViewEvent->AutoSize = true;
			this->lblViewEvent->Location = System::Drawing::Point(55, 25);
			this->lblViewEvent->Name = L"lblViewEvent";
			this->lblViewEvent->Size = System::Drawing::Size(71, 13);
			this->lblViewEvent->TabIndex = 2;
			this->lblViewEvent->Text = L"Select Event:";
			// 
			// btnViewEventsBack
			// 
			this->btnViewEventsBack->Location = System::Drawing::Point(44, 318);
			this->btnViewEventsBack->Name = L"btnViewEventsBack";
			this->btnViewEventsBack->Size = System::Drawing::Size(103, 23);
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
			this->grpEventInfo->Location = System::Drawing::Point(237, 72);
			this->grpEventInfo->Name = L"grpEventInfo";
			this->grpEventInfo->Size = System::Drawing::Size(200, 185);
			this->grpEventInfo->TabIndex = 9;
			this->grpEventInfo->TabStop = false;
			this->grpEventInfo->Visible = false;
			// 
			// btnAttendees
			// 
			this->btnAttendees->Location = System::Drawing::Point(51, 91);
			this->btnAttendees->Name = L"btnAttendees";
			this->btnAttendees->Size = System::Drawing::Size(103, 23);
			this->btnAttendees->TabIndex = 10;
			this->btnAttendees->Text = L"View Attendees";
			this->btnAttendees->UseVisualStyleBackColor = true;
			this->btnAttendees->Visible = false;
			this->btnAttendees->Click += gcnew System::EventHandler(this, &MyForm::btnAttendees_Click);
			// 
			// btnEventInfoBack
			// 
			this->btnEventInfoBack->Location = System::Drawing::Point(51, 145);
			this->btnEventInfoBack->Name = L"btnEventInfoBack";
			this->btnEventInfoBack->Size = System::Drawing::Size(103, 23);
			this->btnEventInfoBack->TabIndex = 9;
			this->btnEventInfoBack->Text = L"Back";
			this->btnEventInfoBack->UseVisualStyleBackColor = true;
			this->btnEventInfoBack->Click += gcnew System::EventHandler(this, &MyForm::btnEventInfoBack_Click);
			// 
			// lblEventDate
			// 
			this->lblEventDate->Location = System::Drawing::Point(0, 57);
			this->lblEventDate->Name = L"lblEventDate";
			this->lblEventDate->Size = System::Drawing::Size(200, 13);
			this->lblEventDate->TabIndex = 8;
			this->lblEventDate->Text = L"EVENTDATE";
			this->lblEventDate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblEventDate->Click += gcnew System::EventHandler(this, &MyForm::lblEventDate_Click);
			// 
			// btnEditAvailability
			// 
			this->btnEditAvailability->Location = System::Drawing::Point(51, 118);
			this->btnEditAvailability->Name = L"btnEditAvailability";
			this->btnEditAvailability->Size = System::Drawing::Size(103, 23);
			this->btnEditAvailability->TabIndex = 6;
			this->btnEditAvailability->Text = L"Edit Availability";
			this->btnEditAvailability->UseVisualStyleBackColor = true;
			this->btnEditAvailability->Click += gcnew System::EventHandler(this, &MyForm::btnEditAvailability_Click);
			// 
			// lblEventName
			// 
			this->lblEventName->Location = System::Drawing::Point(1, 17);
			this->lblEventName->Name = L"lblEventName";
			this->lblEventName->Size = System::Drawing::Size(199, 17);
			this->lblEventName->TabIndex = 2;
			this->lblEventName->Text = L"EVENTNAME";
			this->lblEventName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblEventName->Click += gcnew System::EventHandler(this, &MyForm::lblEventName_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(441, 3);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 14;
			this->textBox5->Visible = false;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(285, 30);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 40;
			this->textBox6->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 563);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->grpMode);
			this->Controls->Add(this->grpAvailability);
			this->Controls->Add(this->grpCreateEvent);
			this->Controls->Add(this->grpViewYourEvents);
			this->Controls->Add(this->grpAdmin);
			this->Controls->Add(this->grpEventInfo);
			this->Controls->Add(this->grpLogin);
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
			this->panel5->ResumeLayout(false);
			this->pnl11_12PM->ResumeLayout(false);
			this->pnl11_12PM->PerformLayout();
			this->pnl6_7PM->ResumeLayout(false);
			this->pnl6_7PM->PerformLayout();
			this->pnl7_8AM->ResumeLayout(false);
			this->pnl7_8AM->PerformLayout();
			this->pnl8_9AM->ResumeLayout(false);
			this->pnl8_9AM->PerformLayout();
			this->pnl7_8PM->ResumeLayout(false);
			this->pnl7_8PM->PerformLayout();
			this->pnl8_9PM->ResumeLayout(false);
			this->pnl8_9PM->PerformLayout();
			this->pnl9_10AM->ResumeLayout(false);
			this->pnl9_10AM->PerformLayout();
			this->pnl5_6PM->ResumeLayout(false);
			this->pnl5_6PM->PerformLayout();
			this->pnl1_2PM->ResumeLayout(false);
			this->pnl1_2PM->PerformLayout();
			this->pnl10_11AM->ResumeLayout(false);
			this->pnl10_11AM->PerformLayout();
			this->pnl2_3PM->ResumeLayout(false);
			this->pnl2_3PM->PerformLayout();
			this->pnl9_10PM->ResumeLayout(false);
			this->pnl9_10PM->PerformLayout();
			this->pnl5_6AM->ResumeLayout(false);
			this->pnl5_6AM->PerformLayout();
			this->pnl10_11PM->ResumeLayout(false);
			this->pnl10_11PM->PerformLayout();
			this->pnl3_4PM->ResumeLayout(false);
			this->pnl3_4PM->PerformLayout();
			this->pnl4_5PM->ResumeLayout(false);
			this->pnl4_5PM->PerformLayout();
			this->pnl11_12AM->ResumeLayout(false);
			this->pnl11_12AM->PerformLayout();
			this->pnl6_7AM->ResumeLayout(false);
			this->pnl6_7AM->PerformLayout();
			this->pnl12Hr->ResumeLayout(false);
			this->pnl12Hr->PerformLayout();
			this->pnl24Hr->ResumeLayout(false);
			this->pnl24Hr->PerformLayout();
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
		lblEventDate->Text = gcnew String(myEvent.getDate().c_str());
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
};
}
