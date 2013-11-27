/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UITextField.h>

@class UILabel;

@interface SBPasscodeTextField : UITextField {

	float _letterSpacing;
	BOOL _usesLargeClearButton;
	UILabel* _hiddenLabel;

}

@property (assign,nonatomic) float letterSpacing;                    //@synthesize letterSpacing=_letterSpacing - In the implementation block
@property (assign,nonatomic) BOOL usesLargeClearButton;              //@synthesize usesLargeClearButton=_usesLargeClearButton - In the implementation block
-(void)dealloc;
-(BOOL)resignFirstResponder;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(id)_style;
-(void)attachFieldEditor:(id)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(id)createTextLabelWithTextColor:(id)arg1 ;
-(void)_endedEditing;
-(BOOL)usesLargeClearButton;
-(void)setUsesLargeClearButton:(BOOL)arg1 ;
-(float)letterSpacing;
-(void)setLetterSpacing:(float)arg1 ;
@end
