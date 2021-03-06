//============================================================================
//
//   SSSS    tt          lll  lll       
//  SS  SS   tt           ll   ll        
//  SS     tttttt  eeee   ll   ll   aaaa 
//   SSSS    tt   ee  ee  ll   ll      aa
//      SS   tt   eeeeee  ll   ll   aaaaa  --  "An Atari 2600 VCS Emulator"
//  SS  SS   tt   ee      ll   ll  aa  aa
//   SSSS     ttt  eeeee llll llll  aaaaa
//
// Copyright (c) 1995-2010 by Bradford W. Mott, Stephen Anthony
// and the Stella Team
//
// See the file "License.txt" for information on usage and redistribution of
// this file, and for a DISCLAIMER OF ALL WARRANTIES.
//
// $Id: CommandMenu.hxx,v 1.1.1.1 2010-10-26 03:44:58 cvs Exp $
//============================================================================

#ifndef COMMAND_MENU_HXX
#define COMMAND_MENU_HXX

class Properties;
class OSystem;

#include "DialogContainer.hxx"

/**
  The base dialog for common commands in Stella.

  @author  Stephen Anthony
  @version $Id: CommandMenu.hxx,v 1.1.1.1 2010-10-26 03:44:58 cvs Exp $
*/
class CommandMenu : public DialogContainer
{
  public:
    /**
      Create a new menu stack
    */
    CommandMenu(OSystem* osystem);

    /**
      Destructor
    */
    virtual ~CommandMenu();
};

#endif
