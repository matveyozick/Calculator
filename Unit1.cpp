//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
float x, y = 0;
String operation;
int c = 0;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
if (c == 0) {
		Edit1->Text = ((TButton*)Sender)->Caption;
		c = 1;
	}
	else
		Edit1->Text += ((TButton*)Sender)->Caption;
	y = StrToFloat(Edit1->Text);
    

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button11Click(TObject *Sender)
{
if (!c) {
		Edit1->Text = "0,";
		c = 1;
	}
	else if (Edit1->Text.Pos(",") == 0)
		Edit1->Text = Edit1->Text + ",";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
int EditLen = Edit1->Text.Length();
	if (EditLen == 0){
		ShowMessage("Edit is empty.");
	}
	else{
		Edit1->Text="Result = " + (FloatToStrF(x, ffGeneral, 5,2));
	}
	if (operation == ""){
		 ShowMessage("Choose the operation.");
	}
	else if (operation == '+') {
		x = x + y;
		c = 0;
		Edit1->Text="Result = " + (FloatToStrF(x, ffGeneral, 5,2));
	}
	else if (operation == '-') {
		x = x - y;
		c = 0;
		Edit1->Text="Result = " + (FloatToStrF(x, ffGeneral, 5,2));
	}
	else if (operation == '*') {
		x = x * y;
		c = 0;
		Edit1->Text="Result = " + (FloatToStrF(x, ffGeneral, 5,2));
	}
	else if (operation == '/') {
		x = x / y;
		c = 0;
		Edit1->Text="Result = " + (FloatToStrF(x, ffGeneral, 5,2));
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
if (c) {
		x = StrToFloat(Edit1->Text);
		operation = ((TButton*)Sender)->Caption;
		Edit1->Text+=(((TButton*)Sender)->Caption);
		c = 0;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{
if (c) {
		x = StrToFloat(Edit1->Text);
		operation = ((TButton*)Sender)->Caption;
		Edit1->Text+=(((TButton*)Sender)->Caption);
		c = 0;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
if (c) {
		x = StrToFloat(Edit1->Text);
		operation = ((TButton*)Sender)->Caption;
		Edit1->Text+=(((TButton*)Sender)->Caption);
		c = 0;
	}
}
//---------------------------------------------------------------------------

