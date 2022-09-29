#pragma once

#include "GraphForm.h"
//#include "Halfincludes.h"
#include "ShortestPathVaribles.h"
namespace BATPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	/// <summary>
	/// Summary for MapForm
	/// </summary>
	public ref class MapForm : public System::Windows::Forms::Form
	{
	public:
		MapForm(void)
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
		~MapForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;

	private: System::Windows::Forms::PictureBox^ pictureBox11;

	private: System::Windows::Forms::PictureBox^ pictureBox13;

	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::PictureBox^ pictureBox26;

	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label8;
	private: System::ComponentModel::IContainer^ components;






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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MapForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(124, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(36, 35);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(400, 56);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(45, 35);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(85, 320);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(46, 35);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(81, 440);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 35);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(347, 374);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(41, 35);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(415, 127);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(52, 35);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(236, 127);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(41, 35);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Location = System::Drawing::Point(590, 262);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(41, 35);
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MapForm::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Location = System::Drawing::Point(183, 394);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(41, 35);
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox11->Location = System::Drawing::Point(340, 204);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(48, 35);
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox13->Location = System::Drawing::Point(265, 320);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(41, 35);
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox15->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.InitialImage")));
			this->pictureBox15->Location = System::Drawing::Point(722, 78);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(50, 41);
			this->pictureBox15->TabIndex = 14;
			this->pictureBox15->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(793, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Powered Object";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(793, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Unpowered Object";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(94, 774);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Factory Cluster";
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox16->Location = System::Drawing::Point(33, 757);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(40, 41);
			this->pictureBox16->TabIndex = 27;
			this->pictureBox16->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(94, 727);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Home Cluster";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(94, 682);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Powerplant";
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox17->Location = System::Drawing::Point(33, 710);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(40, 41);
			this->pictureBox17->TabIndex = 24;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.BackgroundImage")));
			this->pictureBox19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox19->Location = System::Drawing::Point(33, 667);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(40, 37);
			this->pictureBox19->TabIndex = 23;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox14->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.InitialImage")));
			this->pictureBox14->Location = System::Drawing::Point(722, 33);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(50, 41);
			this->pictureBox14->TabIndex = 29;
			this->pictureBox14->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(755, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 18);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Powered Key";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(55, 636);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 18);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Object Key";
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox18->Location = System::Drawing::Point(637, 606);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(41, 35);
			this->pictureBox18->TabIndex = 32;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.BackgroundImage")));
			this->pictureBox20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox20->Location = System::Drawing::Point(404, 691);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(41, 35);
			this->pictureBox20->TabIndex = 33;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
			this->pictureBox21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox21->Location = System::Drawing::Point(511, 340);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(41, 35);
			this->pictureBox21->TabIndex = 34;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.BackgroundImage")));
			this->pictureBox22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox22->Location = System::Drawing::Point(462, 481);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(41, 35);
			this->pictureBox22->TabIndex = 35;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.BackgroundImage")));
			this->pictureBox23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox23->Location = System::Drawing::Point(680, 421);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(41, 35);
			this->pictureBox23->TabIndex = 36;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.BackgroundImage")));
			this->pictureBox24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox24->Location = System::Drawing::Point(292, 565);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(41, 35);
			this->pictureBox24->TabIndex = 37;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.BackgroundImage")));
			this->pictureBox25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox25->Location = System::Drawing::Point(283, 459);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(41, 35);
			this->pictureBox25->TabIndex = 38;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.BackgroundImage")));
			this->pictureBox26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox26->Location = System::Drawing::Point(478, 227);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(41, 35);
			this->pictureBox26->TabIndex = 39;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &MapForm::pictureBox26_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.BackgroundImage")));
			this->pictureBox27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox27->Location = System::Drawing::Point(689, 187);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(41, 35);
			this->pictureBox27->TabIndex = 40;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &MapForm::pictureBox27_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox10->Location = System::Drawing::Point(32, 204);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(41, 35);
			this->pictureBox10->TabIndex = 41;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox12->Location = System::Drawing::Point(578, 495);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(41, 35);
			this->pictureBox12->TabIndex = 42;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.BackgroundImage")));
			this->pictureBox28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox28->Location = System::Drawing::Point(796, 533);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(41, 35);
			this->pictureBox28->TabIndex = 43;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.BackgroundImage")));
			this->pictureBox29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox29->Location = System::Drawing::Point(563, 691);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(41, 35);
			this->pictureBox29->TabIndex = 44;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.BackgroundImage")));
			this->pictureBox30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox30->Location = System::Drawing::Point(772, 669);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(41, 35);
			this->pictureBox30->TabIndex = 45;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.BackgroundImage")));
			this->pictureBox31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox31->Location = System::Drawing::Point(236, 669);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(41, 35);
			this->pictureBox31->TabIndex = 46;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.BackgroundImage")));
			this->pictureBox32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox32->Location = System::Drawing::Point(758, 299);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(41, 35);
			this->pictureBox32->TabIndex = 47;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.BackgroundImage")));
			this->pictureBox33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox33->Location = System::Drawing::Point(164, 240);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(48, 35);
			this->pictureBox33->TabIndex = 48;
			this->pictureBox33->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 62);
			this->button1->TabIndex = 49;
			this->button1->Text = L"Back To Caclulation";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MapForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(784, 742);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 59);
			this->button2->TabIndex = 50;
			this->button2->Text = L"Graphed Solutions";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MapForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(383, 751);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 41);
			this->button3->TabIndex = 51;
			this->button3->Text = L"Render Connections";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MapForm::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MapForm::timer1_Tick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(238, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 52;
			this->label8->Text = L"label8";
			// 
			// MapForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 813);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MapForm";
			this->Text = L"CBAT";
			this->Load += gcnew System::EventHandler(this, &MapForm::MapForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BATPROJECT::GraphForm GraphForm;
	GraphForm.ShowDialog();
	this->Show();
}
private: System::Void MapForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->timer1->Enabled = true;

}
	 
		
	   int element(int x) {
		   for (int p = 0; p <= 15; p++) {
			   if (F[p] == x) {
				   return factory_w;
			   }
			   else if (H[p] == x) {
				   return home_w;
			   }
			   else if (P[p] == x) {
				   return plant_w;
			   }
			   else {
				   return 8;
			   }
		   }
	   }
	   void dykstras(int shortest_connection[], int defined_nodes[28][28], int starting_node, int node_connection[]) {
		   std::ofstream dyks_debug;
		   dyks_debug.open("dyks_debug.txt");
		   int current_node = starting_node;
		   int displacement = 0;
		   shortest_connection[starting_node] = 0;
		 //  dyks_debug << "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28\n";
		   for (int x = 0; x <= 27; x++) {
			  
			//   dyks_debug << x + 1 << " ";
			   for (int y = 0; y <= 27; y++) {
				   bool itterupt = false;
				   int current_node = NULL;
				   if (defined_nodes[x][y] == 1) {
					   defined_nodes[x][y] = element(set_order[y]);
				   }
				   dyks_debug << defined_nodes[x][y] << " ";
			   }
			   dyks_debug << "\n";
		   }
		   for (int x = 0; x <= 27; x++) {
				   if (defined_nodes[current_node][x] == 1) {
					   if (x == current_node) {
						   node_connection[x] = 1;
					   }
				   }
				   dyks_debug << node_connection[x] << "\n";
		   }
		   dyks_debug.close();
	   }

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int shortest_connection[28];
	int node_connection[28];
	int starting_node = 4;
	int defined_nodes[28][28] = {  //Defines the connections between the nodes
	{0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0},
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
	{1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,1,0},
	{0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0},
	{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	};
	for (int x = 0; x <= 27; x++) {
		shortest_connection[x] = inf;
		node_connection[x] = NULL;
	}
	dykstras(shortest_connection,defined_nodes,starting_node, node_connection);
	//Lines->DrawLine(Line, (this->pictureBox7->Left), (this->pictureBox7->Top), (this->pictureBox2->Left), (this->pictureBox2->Top));
	
}
private: System::Void pictureBox26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox27_Click(System::Object^ sender, System::EventArgs^ e) {

	auto pos = this->Cursor->Position;
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ Lines = CreateGraphics();
	Pen^ Line = gcnew Pen(Color::Black);
	Line->Width = 3;
	int picw = this->pictureBox1->Width;
	int pich = this->pictureBox1->Height / 2;

	Lines->DrawLine(Line, (this->pictureBox1->Left + picw), (this->pictureBox1->Top + pich), (this->pictureBox7->Left + picw), (this->pictureBox7->Top + pich));
	Lines->DrawLine(Line, (this->pictureBox1->Left + picw), (this->pictureBox1->Top + pich), (this->pictureBox10->Left + (this->pictureBox10->Width / 2)), (this->pictureBox10->Top));
	Lines->DrawLine(Line, (this->pictureBox1->Left + picw), (this->pictureBox1->Top + pich), (this->pictureBox33->Left + (this->pictureBox33->Width / 2)), (this->pictureBox33->Top));
	Lines->DrawLine(Line, (this->pictureBox4->Left), (this->pictureBox4->Top), (this->pictureBox3->Left), (this->pictureBox3->Top + this->pictureBox3->Width / 2));
	Lines->DrawLine(Line, (this->pictureBox4->Left), (this->pictureBox4->Top), (this->pictureBox9->Left + this->pictureBox9->Height / 2), (this->pictureBox9->Top));
	Lines->DrawLine(Line, (this->pictureBox4->Left), (this->pictureBox4->Top), (this->pictureBox25->Left), (this->pictureBox25->Top));
	Lines->DrawLine(Line, (this->pictureBox4->Left), (this->pictureBox4->Top), (this->pictureBox24->Left), (this->pictureBox24->Top));
	Lines->DrawLine(Line, (this->pictureBox9->Left), (this->pictureBox9->Top), (this->pictureBox13->Left), (this->pictureBox13->Top));
	Lines->DrawLine(Line, (this->pictureBox20->Left), (this->pictureBox20->Top), (this->pictureBox24->Left), (this->pictureBox24->Top));
	Lines->DrawLine(Line, (this->pictureBox31->Left), (this->pictureBox31->Top), (this->pictureBox20->Left), (this->pictureBox20->Top));
	Lines->DrawLine(Line, (this->pictureBox20->Left), (this->pictureBox20->Top), (this->pictureBox12->Left), (this->pictureBox12->Top));
	Lines->DrawLine(Line, (this->pictureBox29->Left), (this->pictureBox29->Top), (this->pictureBox20->Left), (this->pictureBox20->Top));
	Lines->DrawLine(Line, (this->pictureBox24->Left), (this->pictureBox24->Top), (this->pictureBox22->Left), (this->pictureBox22->Top));
	Lines->DrawLine(Line, (this->pictureBox18->Left), (this->pictureBox18->Top), (this->pictureBox12->Left), (this->pictureBox12->Top));
	Lines->DrawLine(Line, (this->pictureBox20->Left), (this->pictureBox20->Top), (this->pictureBox22->Left), (this->pictureBox22->Top));

	Lines->DrawLine(Line, (this->pictureBox18->Left), (this->pictureBox18->Top), (this->pictureBox30->Left), (this->pictureBox30->Top));

	Lines->DrawLine(Line, (this->pictureBox7->Left), (this->pictureBox7->Top), (this->pictureBox11->Left), (this->pictureBox11->Top));
	Lines->DrawLine(Line, (this->pictureBox8->Left), (this->pictureBox8->Top), (this->pictureBox26->Left), (this->pictureBox26->Top));
	Lines->DrawLine(Line, (this->pictureBox8->Left), (this->pictureBox8->Top), (this->pictureBox21->Left), (this->pictureBox21->Top));
	Lines->DrawLine(Line, (this->pictureBox18->Left), (this->pictureBox18->Top), (this->pictureBox23->Left), (this->pictureBox23->Top));
	Lines->DrawLine(Line, (this->pictureBox8->Left), (this->pictureBox8->Top), (this->pictureBox32->Left), (this->pictureBox32->Top));
	Lines->DrawLine(Line, (this->pictureBox8->Left), (this->pictureBox8->Top), (this->pictureBox27->Left), (this->pictureBox27->Top));

	Lines->DrawLine(Line, (this->pictureBox32->Left), (this->pictureBox32->Top), (this->pictureBox28->Left), (this->pictureBox28->Top));
	Lines->DrawLine(Line, (this->pictureBox28->Left), (this->pictureBox28->Top), (this->pictureBox32->Left), (this->pictureBox32->Top));
	Lines->DrawLine(Line, (this->pictureBox6->Left), (this->pictureBox6->Top), (this->pictureBox27->Left), (this->pictureBox27->Top));
	Lines->DrawLine(Line, (this->pictureBox2->Left), (this->pictureBox2->Top), (this->pictureBox6->Left), (this->pictureBox6->Top));
	Lines->DrawLine(Line, (this->pictureBox26->Left), (this->pictureBox26->Top), (this->pictureBox5->Left), (this->pictureBox5->Top));
	Lines->DrawLine(Line, (this->pictureBox6->Left), (this->pictureBox6->Top), (this->pictureBox27->Left), (this->pictureBox27->Top));
	Lines->DrawLine(Line, (this->pictureBox7->Left), (this->pictureBox7->Top), (this->pictureBox2->Left), (this->pictureBox2->Top));
	Lines->DrawLine(Line, (this->pictureBox21->Left), (this->pictureBox21->Top), (this->pictureBox24->Left), (this->pictureBox24->Top));
	delete Lines;
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
