/*
    This file is part of Helio Workstation.

    Helio is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Helio is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Helio. If not, see <http://www.gnu.org/licenses/>.
*/

//[Headers]
#include "Common.h"
//[/Headers]

#include "SeparatorHorizontalReversed.h"

//[MiscUserDefs]
//[/MiscUserDefs]

SeparatorHorizontalReversed::SeparatorHorizontalReversed()
{

    //[UserPreSize]
    this->setInterceptsMouseClicks(false, false);
    //[/UserPreSize]

    setSize (32, 32);

    //[Constructor]
    //[/Constructor]
}

SeparatorHorizontalReversed::~SeparatorHorizontalReversed()
{
    //[Destructor_pre]
    //[/Destructor_pre]


    //[Destructor]
    //[/Destructor]
}

void SeparatorHorizontalReversed::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
#if 0
    //[/UserPrePaint]

    g.setColour (Colour (0x0dffffff));
    g.fillRect (0, 0, getWidth() - 0, 1);

    g.setColour (Colour (0x1a000000));
    g.fillRect (0, 1, getWidth() - 0, 1);

    //[UserPaint] Add your own custom painting code here..
#endif

    g.setColour(Colour(0x09ffffff));
    g.drawHorizontalLine(0, 0.f, float(this->getWidth()));

    g.setColour (Colour (0x0b000000));
    g.drawHorizontalLine(1, 0.f, float(this->getWidth()));

    //[/UserPaint]
}

void SeparatorHorizontalReversed::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}


//[MiscUserCode]
//[/MiscUserCode]

#if 0
/*
BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="SeparatorHorizontalReversed"
                 template="../../Template" componentName="" parentClasses="public Component"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="1" initialWidth="32"
                 initialHeight="32">
  <BACKGROUND backgroundColour="0">
    <RECT pos="0 0 0M 1" fill="solid: dffffff" hasStroke="0"/>
    <RECT pos="0 1 0M 1" fill="solid: 1a000000" hasStroke="0"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
