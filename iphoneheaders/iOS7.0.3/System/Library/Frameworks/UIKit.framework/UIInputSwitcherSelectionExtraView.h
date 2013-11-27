/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKeyboardMenuView;

@interface UIInputSwitcherSelectionExtraView : UIView {

	float m_pointerOffset;
	int _roundedCorners;
	UIKeyboardMenuView* _menu;
	CGRect _keyRect;

}

@property (assign,nonatomic) float pointerOffset; 
@property (assign,nonatomic) CGRect keyRect;                         //@synthesize keyRect=_keyRect - In the implementation block
@property (assign,nonatomic) int roundedCorners;                     //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (assign,nonatomic) UIKeyboardMenuView * menu;              //@synthesize menu=_menu - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)menu;
-(void)setMenu:(id)arg1 ;
-(CGRect)keyRect;
-(float)pointerOffset;
-(void)setPointerOffset:(float)arg1 ;
-(void)setKeyRect:(CGRect)arg1 ;
-(int)roundedCorners;
-(void)setRoundedCorners:(int)arg1 ;
@end
