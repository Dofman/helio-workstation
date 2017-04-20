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

#pragma once

#include "Origami.h"

class OrigamiVertical : public Origami
{
public:

    void addPage(Component *nonOwnedComponent,
                         bool addShadowAtStart = false,
                         bool addShadowAtEnd = true,
                         bool fixedWidth = false,
                         int minSize = ORIGAMI_DEFAULT_MIN_SIZE,
                         int maxSize = ORIGAMI_DEFAULT_MAX_SIZE,
                         int insertIndex = -1) override;
    
    void onPageResized(Component *component) override;

    void resized() override;

private:

    int getCommonFixedWidth() const;

};
