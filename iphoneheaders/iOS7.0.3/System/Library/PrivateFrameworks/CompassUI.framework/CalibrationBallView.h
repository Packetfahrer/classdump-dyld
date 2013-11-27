/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CompassUI/CompassUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CalibrationBallView : UIView {

	float _currentAngle;
	UIView* _ballView;
	float _ballRadius;
	float _trackRadius;

}

@property (assign,nonatomic) float trackRadius;                                //@synthesize trackRadius=_trackRadius - In the implementation block
@property (assign,setter=setAngle:,nonatomic) float currentAngle;              //@synthesize currentAngle=_currentAngle - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAngle:(float)arg1 ;
-(id)ballView;
-(id)initWithFrame:(CGRect)arg1 ballRadius:(float)arg2 ;
-(void)setTrackRadius:(float)arg1 ;
-(float)trackRadius;
-(float)currentAngle;
@end
