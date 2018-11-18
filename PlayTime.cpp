#include "wx_pch.h"
#include "PlayTime.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(PlayTime)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(PlayTime)
//*)

//(*IdInit(PlayTime)
const long PlayTime::ID_BUTTON1 = wxNewId();
const long PlayTime::ID_BUTTON3 = wxNewId();
const long PlayTime::ID_BUTTON2 = wxNewId();
const long PlayTime::ID_BUTTON4 = wxNewId();
const long PlayTime::ID_BUTTON5 = wxNewId();
const long PlayTime::ID_BUTTON6 = wxNewId();
const long PlayTime::ID_BUTTON7 = wxNewId();
const long PlayTime::ID_BUTTON8 = wxNewId();
const long PlayTime::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(PlayTime,wxFrame)
	//(*EventTable(PlayTime)
	//*)
END_EVENT_TABLE()

PlayTime::PlayTime(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(PlayTime)
	wxGridSizer* GridSizer1;
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	GridSizer1 = new wxGridSizer(2, 8, 0, 0);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("1"), wxDefaultPosition, wxSize(20,25), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	GridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("2"), wxDefaultPosition, wxSize(20,25), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	GridSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("3"), wxDefaultPosition, wxSize(20,25), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	GridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button4 = new wxButton(Panel1, ID_BUTTON4, _("4"), wxDefaultPosition, wxSize(20,25), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	GridSizer1->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button5 = new wxButton(Panel1, ID_BUTTON5, _("5"), wxDefaultPosition, wxSize(20,25), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	GridSizer1->Add(Button5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button6 = new wxButton(Panel1, ID_BUTTON6, _("6"), wxDefaultPosition, wxSize(20,25), 0, wxDefaultValidator, _T("ID_BUTTON6"));
	GridSizer1->Add(Button6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button7 = new wxButton(Panel1, ID_BUTTON7, _("7"), wxDefaultPosition, wxSize(20,25), 0, wxDefaultValidator, _T("ID_BUTTON7"));
	GridSizer1->Add(Button7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button8 = new wxButton(Panel1, ID_BUTTON8, _("8"), wxDefaultPosition, wxSize(20,25), 0, wxDefaultValidator, _T("ID_BUTTON8"));
	GridSizer1->Add(Button8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(GridSizer1);
	GridSizer1->Fit(Panel1);
	GridSizer1->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
	//wxWindow::SetScrollbar(wxVERTICAL,0,16,64);
}

PlayTime::~PlayTime()
{
	//(*Destroy(PlayTime)
	//*)
}

