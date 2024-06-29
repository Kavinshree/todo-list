//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "todo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::addButtonClick(TObject *Sender)
{

		 String taskedit=editor->Text;
		 if(taskedit!="")
		 todolist->Items->Add(taskedit);
		 editor->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::todolistItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
		int index=Item->Index;
		todolist->Items->Delete(index);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::editorEnter(TObject *Sender)
{
		 String taskedit=editor->Text;
		 if(taskedit!="")
		 todolist->Items->Add(taskedit);
		 editor->Text="";
}
//---------------------------------------------------------------------------
