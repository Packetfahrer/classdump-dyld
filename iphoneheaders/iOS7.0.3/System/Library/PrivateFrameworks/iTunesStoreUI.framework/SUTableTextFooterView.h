/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIFont, UIColor, NSArray;

@interface SUTableTextFooterView : UIView {

	UIFont* _font;
	UIColor* _shadowColor;
	int _textAlignment;
	UIColor* _textColor;
	NSArray* _textLines;

}

@property (nonatomic,retain) UIFont * font;                      //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;              //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) int textAlignment;                  //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSArray * textLines;                //@synthesize textLines=_textLines - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)sizeToFit;
-(void)setFont:(id)arg1 ;
-(id)font;
-(id)shadowColor;
-(void)setTextColor:(id)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(id)textColor;
-(int)textAlignment;
-(void)setTextLines:(id)arg1 ;
-(id)textLines;
@end
