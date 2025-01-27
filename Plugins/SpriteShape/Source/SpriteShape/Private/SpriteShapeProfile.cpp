#include "SpriteShapeProfile.h"

USpriteShapeProfile::USpriteShapeProfile() {
    this->Rules.AddDefaulted(1);
    this->InteriorFill = NULL;
    this->CornerMode = ESpriteShapeCornerMode::Off;
    this->MinSlopeDiffForCorner = 50.00f;
    this->Corner_OuterTopRight = NULL;
    this->Corner_OuterTopLeft = NULL;
    this->Corner_OuterBottomRight = NULL;
    this->Corner_OuterBottomLeft = NULL;
    this->Corner_InnerTopRight = NULL;
    this->Corner_InnerTopLeft = NULL;
    this->Corner_InnerBottomRight = NULL;
    this->Corner_InnerBottomLeft = NULL;
    this->CornerDrawOrder = 100;
}


