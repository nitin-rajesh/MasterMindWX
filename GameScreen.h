#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(GameScreen)
	#include <wx/panel.h>
	//*)
#endif
//(*Headers(GameScreen)
//*)

class GameScreen: public wxPanel
{
	public:

		GameScreen(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~GameScreen();

		//(*Declarations(GameScreen)
		//*)

	protected:

		//(*Identifiers(GameScreen)
		//*)

	private:

		//(*Handlers(GameScreen)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
    