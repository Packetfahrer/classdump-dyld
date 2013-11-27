/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, TPShineLabel;

@interface TPShineLabelView : UIView {

	UILabel* _backgroundLabel;
	TPShineLabel* _shineLabel;

}

@property (retain) UILabel * backgroundLabel;              //@synthesize backgroundLabel=_backgroundLabel - In the implementation block
@property (retain) TPShineLabel * shineLabel;              //@synthesize shineLabel=_shineLabel - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 labelText:(id)arg2 font:(id)arg3 ;
-(id)backgroundLabel;
-(void)setBackgroundLabel:(id)arg1 ;
-(id)shineLabel;
-(void)setShineLabel:(id)arg1 ;
@end
