#include "wx_pch.h"
#include "GameScreen.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(GameScreen)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(GameScreen)
//*)

//(*IdInit(GameScreen)
//*)

BEGIN_EVENT_TABLE(GameScreen,wxPanel)
	//(*EventTable(GameScreen)
	//*)
END_EVENT_TABLE()

GameScreen::GameScreen(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(GameScreen)
	Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
	//*)
}

GameScreen::~GameScreen()
{
	//(*Destroy(GameScreen)
	//*)
}

    