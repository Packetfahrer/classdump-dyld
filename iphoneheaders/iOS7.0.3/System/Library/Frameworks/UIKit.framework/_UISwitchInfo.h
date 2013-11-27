/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage, UIView, UIColor, CALayer;

@interface _UISwitchInfo : NSObject {

	int imageState;
	UIImage* images[8];
	UIView* rightEdgeView;
	UIView* leftEdgeView;
	float position;
	UIColor* onButtonColor;
	CALayer* maskLayer;
	struct {
		unsigned on : 1;
		unsigned pressed : 1;
		unsigned useAlternateColors : 1;
		unsigned skipValueChangedAction : 1;
	}  _switchFlags;

}
-(void)dealloc;
-(void)setMinimumTrackImage:(id)arg1 forStates:(unsigned)arg2 ;
@end
