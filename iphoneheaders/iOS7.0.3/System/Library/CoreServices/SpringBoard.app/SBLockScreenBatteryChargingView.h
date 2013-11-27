/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIView, _UIBackdropView, SBLockScreenBatteryFillView, _UILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenBatteryChargingView : UIView {

	UIView* _batteryContainerView;
	_UIBackdropView* _batteryBlurView;
	SBLockScreenBatteryFillView* _batteryFillView;
	_UILegibilityLabel* _chargePercentLabel;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) BOOL batteryVisible; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(void)setChargePercentage:(int)arg1 detailed:(BOOL)arg2 ;
-(BOOL)batteryVisible;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(void)_setChargeString:(id)arg1 ;
-(id)_chargePercentFont;
-(CGPoint)_batteryOrigin;
-(float)_chargingTextBaselineOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)legibilitySettings;
-(void)setLegibilitySettings:(id)arg1 ;
@end
