#pragma once
#include <fstream>
#include "FlagDebug.h"
#include "MapForm.h"
#include "SolutionsMain.h"
#include "BAT.h"
#include "CoefficientImprovement.h"
#include "SolutionOutFormat.h"
#include <thread>
#include "Windows.h"

bool CalcComplete = 0;
//----------------------------------------------
int pe = 0;
int repe = 0;
int maxgen = 0;
int relativeveiwgen_x = 0;
bool collected = true;
int recorededpos[2][nPeriods] = { NULL };
//----------------------------------------------
namespace BATPROJECT { // main namespace for all forms

	using namespace System; //calls all WinForms namespaces as default to reduce repetition
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	public ref class NewMainForm : public System::Windows::Forms::Form // creates a winforms class give properties of winforms defaults
	{
	public:
		NewMainForm(void)
		{
			InitializeComponent(); // starts the declaration of a form
		}

	protected:

		~NewMainForm()
		{
			if (components)
			{
				delete components; // delectes all un used items 
				//makes sure we are more memory efficient
			}
		}
		
	// delcares all the itmes we want to add properties (everything we want on the screen)
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	protected: 
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::CheckBox^ checkBox1;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Show_Solutions;
	private: System::Windows::Forms::Button^ Show_Visual;
	private: System::Windows::Forms::Button^ Calculate_Button;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox10;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;


	private: System::ComponentModel::IContainer^ components;

	private:
#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{

			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NewMainForm::typeid));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Show_Solutions = (gcnew System::Windows::Forms::Button());
			this->Show_Visual = (gcnew System::Windows::Forms::Button());
			this->Calculate_Button = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(200, 390);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(276, 12);
			this->progressBar1->TabIndex = 57;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(556, 380);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 15);
			this->label13->TabIndex = 56;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(501, 380);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(49, 15);
			this->label14->TabIndex = 55;
			this->label14->Text = L"File Dir:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(496, 330);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 45);
			this->button2->TabIndex = 54;
			this->button2->Text = L"Calibration Data";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NewMainForm::button2_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(493, 226);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(177, 18);
			this->label12->TabIndex = 53;
			this->label12->Text = L"Show All Calculation Data";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(571, 247);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 52;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &NewMainForm::checkBox1_CheckedChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(480, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(192, 31);
			this->label9->TabIndex = 49;
			this->label9->Text = L"Import Options";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(123, 10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(176, 31);
			this->label8->TabIndex = 48;
			this->label8->Text = L"Input Options";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(485, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 57);
			this->button1->TabIndex = 47;
			this->button1->Text = L"Coefficient Improvement";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewMainForm::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(281, 187);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 24);
			this->label7->TabIndex = 46;
			this->label7->Text = L"Best Epsilon";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(234, 155);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(207, 29);
			this->textBox6->TabIndex = 44;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(281, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 24);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Best Gamma";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(234, 84);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(207, 29);
			this->textBox5->TabIndex = 42;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(281, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 24);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Best Epsilon";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(11, 295);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(174, 29);
			this->textBox4->TabIndex = 40;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(39, 268);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 24);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Prev Gen Cap";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(11, 236);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(174, 29);
			this->textBox3->TabIndex = 38;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 24);
			this->label3->TabIndex = 37;
			this->label3->Text = L"After Gen Costs";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(11, 167);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(174, 29);
			this->textBox2->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 24);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Prev Gen Costs";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(11, 91);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(174, 29);
			this->textBox1->TabIndex = 34;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 48);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Enter Sucsessive\r\n        Forcast";
			// 
			// Show_Solutions
			// 
			this->Show_Solutions->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_Solutions->Location = System::Drawing::Point(26, 414);
			this->Show_Solutions->Name = L"Show_Solutions";
			this->Show_Solutions->Size = System::Drawing::Size(146, 65);
			this->Show_Solutions->TabIndex = 32;
			this->Show_Solutions->Text = L"Show\r\nSolutions";
			this->Show_Solutions->UseVisualStyleBackColor = true;
			this->Show_Solutions->Click += gcnew System::EventHandler(this, &NewMainForm::Show_Solutions_Click);
			// 
			// Show_Visual
			// 
			this->Show_Visual->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_Visual->Location = System::Drawing::Point(499, 414);
			this->Show_Visual->Name = L"Show_Visual";
			this->Show_Visual->Size = System::Drawing::Size(146, 65);
			this->Show_Visual->TabIndex = 31;
			this->Show_Visual->Text = L"Show \r\nVisualisation";
			this->Show_Visual->UseVisualStyleBackColor = true;
			this->Show_Visual->Click += gcnew System::EventHandler(this, &NewMainForm::Show_Visual_Click);
			// 
			// Calculate_Button
			// 
			this->Calculate_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Calculate_Button->Location = System::Drawing::Point(199, 408);
			this->Calculate_Button->Name = L"Calculate_Button";
			this->Calculate_Button->Size = System::Drawing::Size(281, 72);
			this->Calculate_Button->TabIndex = 30;
			this->Calculate_Button->Text = L"Calculate";
			this->Calculate_Button->UseVisualStyleBackColor = true;
			this->Calculate_Button->Click += gcnew System::EventHandler(this, &NewMainForm::Calculate_Button_Click);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(523, 295);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(106, 29);
			this->textBox7->TabIndex = 58;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &NewMainForm::textBox7_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(538, 271);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(82, 18);
			this->label15->TabIndex = 59;
			this->label15->Text = L"Specify Bat";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(520, 139);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 18);
			this->label10->TabIndex = 60;
			this->label10->Text = L"Calibration Off";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(523, 196);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(106, 29);
			this->textBox8->TabIndex = 61;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(496, 157);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(167, 36);
			this->label11->TabIndex = 62;
			this->label11->Text = L"Number Of Calibrations \r\n   Recommended 2500";
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &NewMainForm::timer1_Tick);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(227, 353);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(208, 24);
			this->label16->TabIndex = 63;
			this->label16->Text = L"Calculation Complete";
			this->label16->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(11, 357);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(174, 29);
			this->textBox9->TabIndex = 65;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(39, 330);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(126, 24);
			this->label17->TabIndex = 64;
			this->label17->Text = L"Max Gen Cap";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(234, 219);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(207, 29);
			this->textBox10->TabIndex = 66;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(244, 315);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(191, 39);
			this->button3->TabIndex = 68;
			this->button3->Text = L"Show Convergence";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &NewMainForm::button3_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(952, 395);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 13);
			this->label18->TabIndex = 69;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(952, 426);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 13);
			this->label19->TabIndex = 70;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(952, 453);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 13);
			this->label20->TabIndex = 71;
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &NewMainForm::timer2_Tick);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 10);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 28);
			this->button4->TabIndex = 72;
			this->button4->Text = L"info";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &NewMainForm::button4_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(905, 453);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(40, 13);
			this->label21->TabIndex = 73;
			this->label21->Text = L"Period:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(889, 426);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(56, 13);
			this->label22->TabIndex = 74;
			this->label22->Text = L"Loudness:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(888, 395);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(57, 13);
			this->label23->TabIndex = 75;
			this->label23->Text = L"Total Gen:";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(234, 280);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(207, 29);
			this->textBox11->TabIndex = 77;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(259, 253);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(157, 24);
			this->label24->TabIndex = 76;
			this->label24->Text = L"Number Of BATS";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(1103, 395);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 13);
			this->label25->TabIndex = 78;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(1103, 426);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 13);
			this->label26->TabIndex = 79;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(1030, 426);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 13);
			this->label27->TabIndex = 81;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(1030, 395);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(0, 13);
			this->label28->TabIndex = 80;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(1030, 380);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(27, 13);
			this->label29->TabIndex = 82;
			this->label29->Text = L"This";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(1103, 380);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(29, 13);
			this->label30->TabIndex = 83;
			this->label30->Text = L"Next";
			// 
			// NewMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1282, 489);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Show_Solutions);
			this->Controls->Add(this->Show_Visual);
			this->Controls->Add(this->Calculate_Button);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"NewMainForm";
			this->Text = L"CBAT";
			this->Load += gcnew System::EventHandler(this, &NewMainForm::NewMainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//#include "BaseBatAlgorithm.h"
	private: System::Void Calculate_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox11->Text != "" ) {
			auto bats = int::Parse(this->textBox11->Text);
			nBATS = bats;
		}
		else {
			nBATS = 25;
		}
		this->progressBar1->Value = 0.0f;
		//this->progressBar1->Step = 1/nPeriods;
		float bestgamma;
		float bestalpha;
		float bestepsilon;
		if (improv == true) {
			int nimprov = int::Parse(this->textBox8->Text);
			std::chrono::duration<double> bestime;
			
			//if (nimprov <= 10000) {
			//	MessageBox::Show("NUMBER OF IMPROVEMENTS IS LESS THAN OR EQUAL TO 10000: ERROR CODE: 0x006");
			//}
			//else {
			MessageBox::Show("THIS MAY TAKE A WHILE");
			this->progressBar1->Step = 1 / nimprov;
			this->progressBar1->Maximum = nimprov;
				for (int l = 0; l <= nimprov; l++) {
					auto start = std::chrono::system_clock::now();
					std::thread g (BAT5);
					g.join();
					im++;
					auto end = std::chrono::system_clock::now();
					std::chrono::duration<double> elapsed_seconds = end - start;
					if (elapsed_seconds < bestime) {
						bestgamma = Coefficients[0][im];
						bestalpha = 0.999f;
						bestepsilon = Coefficients[2][im];
					}
					int prop = ((nimprov) / (this->progressBar1->Maximum));
					this->progressBar1->Value = prop * l;
				}
				MessageBox::Show("FOUND BEST COEFFIECIENT!!");
				CalcComplete = 1;
		}
		else {
			im = NULL;
			for (int x = 0; x<=((this->progressBar1->Maximum)/2); x++) {
				this->progressBar1->Value = x;
				Sleep(30);
			}
			//MessageBox::Show("HERE");
			std::thread f(BAT5);
			f.join();
			//MessageBox::Show("HERE11");
			bestepsilon = 0.0f;
			bestgamma = 0.4f;
			bestalpha = 0.999f;
			SolutionOut();
			for (int x = 0; x <=  ((this->progressBar1->Maximum)/2); x++) {
				this->progressBar1->Value = (this->progressBar1->Maximum / 2) + x;
				Sleep(30);
			}
			CalcComplete = 1;
		}
		
		//this->progressBar1->Value = (x / nPeriods);
		
		this->textBox5->Text = bestepsilon.ToString();
		this->textBox6->Text = bestgamma.ToString();
		this->textBox10->Text = bestalpha.ToString();
		this->button3->Visible = true;
		this->progressBar1->Value = this->progressBar1->Maximum;
		this->label16->Visible = true;
		
	}
private: System::Void NewMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Show_Visual_Click(System::Object^ sender, System::EventArgs^ e) {
	if(CalcComplete == 1) {
		this->Hide();
		BATPROJECT::MapForm MapForm;
		MapForm.ShowDialog();
		this->Show();
	}
	else {
		MessageBox::Show("CALCULATION HAS NOT BEEN COMPLETE: ERROR CODE: 0x001");
	}
}
private: System::Void Show_Solutions_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CalcComplete == 1) {
		this->Hide();
		BATPROJECT::SolutionsMain SolutionsMain;
		SolutionsMain.ShowDialog();
		this->Show();
	}
	else {
		MessageBox::Show("CALCULATION HAS NOT BEEN COMPLETE: ERROR CODE: 0x001");
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flag = !flag;
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (flag == true) {
		if (this->textBox7->Text == "") {
			findp = NULL;
		}
		else {

			int BAT = int::Parse(this->textBox7->Text);
			findp = BAT - 1;
			if (findp > nBATS-1) {
				MessageBox::Show("BAT SPECIFICATION IS GREATER THAN MAX NUMBER OF BATS: ERROR CODE: 0x004");
			}
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	improv = !improv;
	if (improv == true) {
		this->label10->Text = "Calibration On";
	}
	else {
		this->label10->Text = "Calibration Off";
	}
}
private: bool antigo = false;
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//Declared/ Called upon the event of button3_click
	//------
	// this allows for the itteration of the varibles to flick through an array without the need of a for loop, but rather a reocurring timer
	pe = 0; //period count

	//----------
	//This delares the box corners for the visualisation of convergence on the main page
	// It is dynamic to the current window shize and width
	// May need to be adjested if the width x offset is placed greater or < the current box width else visualisation will occur outside the selected view window
	int veiwportbottom = this->Height - 50;
	int veiwporttop = 10;
	int veiwportleft = ((this->Width + 80) / 2);
	int veiwportright = (this->Width - 30);
	//---------
	//Selects the max total possible gen for the system
	//So it is the most the generators can produce if they are at full capacity
	//Loops thrugh until the all the gens have been ittered ie: nGens (number of Gens)
	// -1 because we itterat from 0 not 1, so if we wanted to itterate 5 times we would go from 0 to 4.
	for (int x = 0; x <= nGens - 1; x++) {
		maxgen = maxgen + QTYMAX[x];
	}
	//Then decides the ammount on the x each pixel should reprent in terms of gen ie: 1px = 2 gen values
	relativeveiwgen_x = (veiwportright - veiwportleft) / maxgen;

	//------------
	//Declares graphics improt to define the varible TopBox to have the properties of the windows Drawing::Drawing2D libary/namespace
	Graphics^ TopBox = CreateGraphics();
	//--------------
	//Allows for the pen colours/ draw width to be set with teh initalisation of the pens in a class and passing in the parameters (colour) to the instance Pen.
	Pen^ pen1 = gcnew Pen(Color::Black);
	Pen^ pen2 = gcnew Pen(Color::Gray);
	Pen^ pen3 = gcnew Pen(Color::Red);
	//--------------
	//Draws a static line using the iniated graphics varible "TopBox" into class function
	//Passes paramertes (Pen type, start x, start y, end x, end y)
	TopBox->DrawLine(pen1, ((this->Width +80)/2), 10, (this->Width - 30), 10);
	//removes TopBox from memory
	delete TopBox;
	//---------------
	//Same repeated for each line of the box, ie: bottom box draws the bottom line, top the top line ect...
	Graphics^ BottomBox = CreateGraphics();
	BottomBox->DrawLine(pen1, ((this->Width +80)/ 2), (this->Height - 50), (this->Width - 30), (this->Height - 50));
	delete BottomBox;

	Graphics^ LeftBox = CreateGraphics();
	LeftBox->DrawLine(pen1, veiwportleft, veiwporttop, veiwportleft, veiwportbottom);
	delete LeftBox;

	Graphics^ RightBox = CreateGraphics();
	RightBox->DrawLine(pen1, veiwportright, veiwporttop, veiwportright, veiwportbottom);
	delete RightBox;
	//---------
	//Enables the visualisation itteration timer using pe, ba, ge itterative global varibles above
	this->timer1->Enabled = true;
	//----------
	//int veiwportbottom = this->Height - 50;
	//int veiwporttop = 10;
	//int veiwportleft = ((this->Width + 80) / 2);
	//int veiwportright = (this->Width - 30);
	//float currentpulse = pulsetotals[ba][ge][pe];
	float randomval = float(rand()) / float(RAND_MAX);
	//if (randomval <= 0.5) {
	//	currentpulse = currentpulse;
	//}

	Pen^ SolutionFound = gcnew Pen(Color::Red); //SETS PENS AS DEFINABLE ITEMS FROM THE DRAWING2D LIBARY
	Pen^ BAT1 = gcnew Pen(Color::Purple);
	Pen^ Background = gcnew Pen(Color::Gray);
	Background->Width = 3;
	BAT1->Width = 3;
	SolutionFound->Width = 4;
//	this->label18->Text = totals[ba][ge][pe].ToString(); //SETS THE ITMES IN THE LABLE TO THE CONVERTED STRING OF THE ITEMS
//	this->label19->Text = Atotals[ba][ge][pe].ToString();
	int currentperiod = pe + 1;
	this->label20->Text = currentperiod.ToString();
	Graphics^ Entity = CreateGraphics(); //CREATES AN ENTRY POINT TO EXECUTE GRAPHICS ON

	//-------- SMOOTHING ------------------------
		//MessageBox::Show("SAT");
	for (int ge = 0; ge <= itterations-1; ge++) {
		
		int nextge[100][2] = { NULL };
		int prev_x[100] = { NULL };
		int prev_y[100] = { NULL };
		int last_x[100] = { NULL };
		bool once[100] = { false };
		int finalpos[100][2] = { NULL };
		for (int x = 0; x <= 100; x++) {
			once[0] = false;
		}
		for (int x = 0; x <= 2; x++) {
			nextge[x][0] = totals[x][ge + 1];
			nextge[x][1] = Atotals[x][ge + 1];
			nextge[x][1] = nextge[x][1] * nextge[x][1] * nextge[x][1] * nextge[x][1];
			nextge[x][1] = nextge[x][1] * 400;
			if (x == 0) {
				this->label25->Text = nextge[x][0].ToString();
				this->label26->Text = nextge[x][1].ToString();
				float currentA = Atotals[x][ge];
				currentA = currentA * currentA * currentA * currentA; //loudness to power 4
				//currentA = 1 / currentA;
				currentA = currentA * 400; // INCREASES CONVERGENCE AREA
				this->label28->Text = totals[x][ge].ToString();
				this->label27->Text = currentA.ToString();
			}
		}
		//Sleep(100000);
		for (int mod = 0; mod <= 100; mod++) {
			for (int x = 0; x <= 2; x++) {
				if (abs(mod) > abs(nextge[x][0] - totals[x][ge])) {}
				else {
					Entity->DrawEllipse(Background, prev_x[x], prev_y[x], 3, 3);
				}
				float currentA = Atotals[x][ge];
				currentA = currentA * currentA * currentA * currentA; //loudness to power 4
				//currentA = 1 / currentA;
				currentA = currentA * 400; // INCREASES CONVERGENCE AREA
				//int rnum = (rand() / RAND_MAX);

				int gradient = (nextge[x][1] - currentA) / (nextge[x][0] - totals[x][ge]);
				//currentA = rnum * currentA;
			//	if (x == 0) {
				//	this->label25->Text = gradient.ToString();
				//	Sleep(100);
				//}


				int y_pos = gradient * mod;
				if (abs(mod) > abs(nextge[x][0] - totals[x][ge])) {
					if (once[x] == false) {
						finalpos[x][0] = (veiwportleft + (totals[x][ge] + mod));
						finalpos[x][1] = (veiwporttop + 30 + int(currentA) + y_pos);
						once[x] = true;

					}
					else {
						Entity->DrawEllipse(BAT1, finalpos[x][0], finalpos[x][1], 3, 3);
					}

				}
				else {
					Entity->DrawEllipse(BAT1, (veiwportleft + (totals[x][ge] + mod)), (veiwporttop + 30 + int(currentA) + y_pos), 3, 3); //DRAWS A CIRCLE AT THE POSITION OF THE CURRENT PLACEMENT IN LOUNDESS IE: Y AND X IN TOTAL GEN
					prev_y[x] = (veiwporttop + 30 + int(currentA) + y_pos);
					prev_x[x] = (veiwportleft + (totals[x][ge] + mod));
				}






				//Sleep(1000);
			}
			Sleep(100);
		}
	}


		//Sleep(100000);
		//for (int x = 0; x <= nBATS - 1; x++) {
		//	float currentA = Atotals[x][ge][pe];
		//	currentA = currentA * currentA * currentA * currentA * currentA * currentA * currentA; //loudness to power 7
		//	//currentA = 1 / currentA;
		//	currentA = currentA * 400; // INCREASES CONVERGENCE AREA
	//
		//	Entity->DrawEllipse(Background, (veiwportleft + (totals[ba][ge][pe] * 1.5)), (veiwporttop + 30 + int(currentA)), 3, 3); // DELETES THE CIRCLE DRAWN BY OVERLAPPING IT WITH THE SAME COLOUR AS THE BACKGROUND
		//}
		//-------------------------------------------
		/*for (int x = 0; x <= 10; x++) {
			if (totals[x][ge][0] == global_best_total[0].gb_gentot && pulsetotals[x][ge][pe] == global_best_total[0].gb_R) { //LOGIC TO DETERMINE IF THE CURRENT ITEM IS THE GLOBAL BEST WE FOUND
				float currentA = Atotals[x][ge][pe];
				currentA = currentA * currentA * currentA * currentA; //loudness to power 7
				//currentA = 1 / currentA;
				currentA = currentA * 400; // INCREASES CONVERGENCE AREA
				Graphics^ Complete = CreateGraphics();
				recorededpos[0][pe] = ((veiwportleft + (totals[x][ge][pe] * 1.5)));
				recorededpos[1][pe] = (veiwporttop + 30 + int(currentA));

				Complete->DrawEllipse(SolutionFound, ((veiwportleft + (totals[x][ge][pe] * 1.5))), ((veiwporttop + 30 + int(currentA))), 3, 3);

				delete Complete;
				this->timer2->Enabled = true;
				pe++;

			}
		}
		if (pe == nPeriods - 1) {

			this->timer2->Enabled = false;
		}
		this->timer1->Enabled = false;*/
	

}

private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	//Called upon the next tick/cycle of the timer.
	//---------
	//Same varibles called as above for delaring key points in the grid
	int veiwportbottom = this->Height - 50;
	int veiwporttop = 10;
	int veiwportleft = ((this->Width + 80) / 2);
	int veiwportright = (this->Width - 30);

	Graphics^ TopBox = CreateGraphics();
	Pen^ pen1 = gcnew Pen(Color::Black);
	Pen^ pen2 = gcnew Pen(Color::Gray);
	Pen^ pen3 = gcnew Pen(Color::Red);
	TopBox->DrawLine(pen1, ((this->Width + 80) / 2), 10, (this->Width - 30), 10);
	delete TopBox;

	Graphics^ BottomBox = CreateGraphics();
	BottomBox->DrawLine(pen1, ((this->Width + 80) / 2), (this->Height - 50), (this->Width - 30), (this->Height - 50));
	delete BottomBox;

	Graphics^ LeftBox = CreateGraphics();
	LeftBox->DrawLine(pen1, veiwportleft, veiwporttop, veiwportleft, veiwportbottom);
	delete LeftBox;

	Graphics^ RightBox = CreateGraphics();
	RightBox->DrawLine(pen1, veiwportright, veiwporttop, veiwportright, veiwportbottom);
	delete RightBox;
	Pen^ SolutionFound = gcnew Pen(Color::Red);
	SolutionFound->Width = 3;
	Graphics^ SolutionReidentify = CreateGraphics();
	SolutionReidentify->DrawEllipse(SolutionFound,(recorededpos[0][repe]), (recorededpos[1][repe]),3,3);

	repe++;
	if (repe == nPeriods - 1) {
		repe = 0;
	}
	delete SolutionReidentify;
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
