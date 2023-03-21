/**
    bespoke synth, a software modular synthesizer
    Copyright (C) 2021 Ryan Challinor (contact: awwbees@gmail.com)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
**/
//
//  ILockable.h
//  modularSynth
//

#ifndef __modularSynth__ILockable__
#define __modularSynth__ILockable__

#include "OpenFrameworksPort.h"

class ILockable
{
public:
   ofMutexGuard LockWithGuard() const
   {
      return ofMutexGuard(mMutex);
   }

protected:
   // This lock protects all member variables
   mutable ofMutex mMutex;
};

#endif /* __modularSynth__ILockable__ */
