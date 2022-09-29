#pragma once
#include <fstream>
#include <Windows.h>
#include "HalfIncludes.h"
namespace BATPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SolutionsMain
	/// </summary>
	public ref class SolutionsMain : public System::Windows::Forms::Form
	{
	public:
		SolutionsMain(void)
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
		~SolutionsMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ Loud_Box;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ Pulse_Box;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ Vel_Box;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ Freq_Box;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ TotalCost_Text;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ Fitness_Text;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Loud_Box = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Pulse_Box = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Vel_Box = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Freq_Box = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TotalCost_Text = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Fitness_Text = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(392, 34);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 71);
			this->button2->TabIndex = 60;
			this->button2->Text = L"Open Solution File";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SolutionsMain::button2_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(409, 388);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(79, 20);
			this->label15->TabIndex = 58;
			this->label15->Text = L"Loudness";
			// 
			// Loud_Box
			// 
			this->Loud_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Loud_Box->Location = System::Drawing::Point(379, 411);
			this->Loud_Box->Name = L"Loud_Box";
			this->Loud_Box->Size = System::Drawing::Size(144, 29);
			this->Loud_Box->TabIndex = 57;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(417, 332);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(48, 20);
			this->label16->TabIndex = 56;
			this->label16->Text = L"Pulse";
			// 
			// Pulse_Box
			// 
			this->Pulse_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pulse_Box->Location = System::Drawing::Point(378, 355);
			this->Pulse_Box->Name = L"Pulse_Box";
			this->Pulse_Box->Size = System::Drawing::Size(144, 29);
			this->Pulse_Box->TabIndex = 55;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(417, 268);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 20);
			this->label13->TabIndex = 54;
			this->label13->Text = L"Velocity";
			// 
			// Vel_Box
			// 
			this->Vel_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vel_Box->Location = System::Drawing::Point(379, 292);
			this->Vel_Box->Name = L"Vel_Box";
			this->Vel_Box->Size = System::Drawing::Size(144, 29);
			this->Vel_Box->TabIndex = 53;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(409, 213);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(84, 20);
			this->label14->TabIndex = 52;
			this->label14->Text = L"Frequency";
			// 
			// Freq_Box
			// 
			this->Freq_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Freq_Box->Location = System::Drawing::Point(378, 236);
			this->Freq_Box->Name = L"Freq_Box";
			this->Freq_Box->Size = System::Drawing::Size(144, 29);
			this->Freq_Box->TabIndex = 51;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(389, 177);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(126, 24);
			this->label12->TabIndex = 50;
			this->label12->Text = L"Bat Properties";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(219, 268);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(109, 20);
			this->label11->TabIndex = 49;
			this->label11->Text = L"Total Demand";
			// 
			// TotalCost_Text
			// 
			this->TotalCost_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TotalCost_Text->Location = System::Drawing::Point(198, 292);
			this->TotalCost_Text->Name = L"TotalCost_Text";
			this->TotalCost_Text->Size = System::Drawing::Size(144, 29);
			this->TotalCost_Text->TabIndex = 48;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(219, 213);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(118, 20);
			this->label10->TabIndex = 47;
			this->label10->Text = L"Fitness (COST)";
			// 
			// Fitness_Text
			// 
			this->Fitness_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fitness_Text->Location = System::Drawing::Point(197, 236);
			this->Fitness_Text->Name = L"Fitness_Text";
			this->Fitness_Text->Size = System::Drawing::Size(144, 29);
			this->Fitness_Text->TabIndex = 46;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(233, 135);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 24);
			this->label9->TabIndex = 45;
			this->label9->Text = L"Outputs";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(61, 452);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 20);
			this->label8->TabIndex = 44;
			this->label8->Text = L"G5";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(6, 475);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(144, 29);
			this->textBox5->TabIndex = 43;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(61, 388);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 20);
			this->label7->TabIndex = 42;
			this->label7->Text = L"G4";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(6, 411);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(144, 29);
			this->textBox4->TabIndex = 41;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(61, 328);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 20);
			this->label6->TabIndex = 40;
			this->label6->Text = L"G3";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(6, 351);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(144, 29);
			this->textBox3->TabIndex = 39;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(61, 269);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 20);
			this->label5->TabIndex = 38;
			this->label5->Text = L"G2";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(6, 292);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(144, 29);
			this->textBox2->TabIndex = 37;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(61, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 20);
			this->label4->TabIndex = 36;
			this->label4->Text = L"G1";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(6, 236);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(144, 29);
			this->textBox1->TabIndex = 35;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 24);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Generators";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(233, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 24);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Period";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(190, 85);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(151, 32);
			this->comboBox1->TabIndex = 32;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SolutionsMain::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(218, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 25);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Solution";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(19, 34);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 71);
			this->button1->TabIndex = 59;
			this->button1->Text = L"Back To Main Form";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SolutionsMain::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &SolutionsMain::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &SolutionsMain::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &SolutionsMain::timer3_Tick);
			// 
			// SolutionsMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 519);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->Loud_Box);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->Pulse_Box);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->Vel_Box);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Freq_Box);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->TotalCost_Text);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Fitness_Text);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"SolutionsMain";
			this->Text = L"SolutionsMain";
			this->Load += gcnew System::EventHandler(this, &SolutionsMain::SolutionsMain_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SolutionsMain_Load(System::Object^ sender, System::EventArgs^ e) {
		this->comboBox1->Items->Clear();
		for (int x = 0; x <= nPeriods-1; x++) {
			this->comboBox1->Items->Add(x+1);
		}
		this->comboBox1->SelectedItem = 1;	
		this->timer1->Enabled = true;
		this->timer2->Enabled = true;
		this->timer3->Enabled = true;
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	system("start Solutions.txt");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	this->timer1->Enabled = false;
	this->timer2->Enabled = false;
	this->timer3->Enabled = false;
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	int current = this->comboBox1->SelectedIndex;
	int demand[nPeriods] = { NULL };
	int Fitness[nPeriods] = { NULL };
	std::ifstream READ1;
	READ1.open("FitANDdem.txt");
	for (int x = 0; x <= nPeriods; x++) {
		READ1 >> Fitness[x];
		READ1 >> demand[x];
	}
	READ1.close();
	System::String^ FIT = Fitness[current].ToString();
	System::String^ TOT = demand[current].ToString();
	this->Fitness_Text->Clear();
	this->TotalCost_Text->Clear();
	this->Fitness_Text->AppendText(FIT);
	this->TotalCost_Text->AppendText(TOT);
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	int current = this->comboBox1->SelectedIndex;
	int periods[nPeriods] = { NULL };
	int gens[nPeriods][nGens] = { NULL };
	int demand[nPeriods] = { NULL };
	int Fitness[nPeriods] = { NULL };

	std::ifstream READ;
	READ.open("Solutions.txt");
	for (int x = 0; x <= nPeriods-1; x++) {
		for (int y = 0; y <= nGens - 1; y++) {
			READ >> gens[x][y];
		}
	}
	READ.close();
	//	readsols2(periods, demand, Fitness);
	std::ofstream opt;
	opt.open("HELP.txt");
	opt << periods[current] << "\n";
	for (int x = 0; x <= nGens; x++) {
		opt << gens[current][x] << "\n";
	}
	opt << Fitness[current] << "\n";
	opt << demand[current] << "\n";
	opt.close();
	System::String^ g1 = gens[current][0].ToString();
	System::String^ g2 = gens[current][1].ToString();
	System::String^ g3 = gens[current][2].ToString();
	System::String^ g4 = gens[current][3].ToString();
	System::String^ g5 = gens[current][4].ToString();

	this->textBox1->Clear();
	this->textBox2->Clear();
	this->textBox3->Clear();
	this->textBox4->Clear();
	this->textBox5->Clear();
	this->textBox1->AppendText(g1);
	this->textBox2->AppendText(g2);
	this->textBox3->AppendText(g3);
	this->textBox4->AppendText(g4);
	this->textBox5->AppendText(g5);
}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	int current = this->comboBox1->SelectedIndex;
	float Freq[nPeriods] = { NULL };
	float Vel[nPeriods] = { NULL };
	float Pulse[nPeriods] = { NULL };
	float Loud[nPeriods] = { NULL };
	std::ifstream READ2;
	READ2.open("Details.txt");
	for (int x = 0; x <= nPeriods; x++) {
		READ2 >> Loud[x];
		READ2 >> Pulse[x];
		READ2 >> Freq[x];
		READ2 >> Vel[x];
	}
	READ2.close();
	System::String^ loud = Loud[current].ToString();
	System::String^ pulse = Pulse[current].ToString();
	System::String^ freq = Freq[current].ToString();
	System::String^ vel = Vel[current].ToString();
	this->Loud_Box->Clear();
	this->Pulse_Box->Clear();
	this->Vel_Box->Clear();
	this->Freq_Box->Clear();
	this->Loud_Box->AppendText(loud);
	this->Pulse_Box->AppendText(pulse);
	this->Vel_Box->AppendText(vel);
	this->Freq_Box->AppendText(freq);
}
};
}
