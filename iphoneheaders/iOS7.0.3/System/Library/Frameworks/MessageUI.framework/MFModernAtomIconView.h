/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface MFModernAtomIconView : UIView {

	NSArray* _iconImages;
	float _iconPadding;
	CGPoint _drawingOffset;

}

@property (nonatomic,retain) NSArray * iconImages;               //@synthesize iconImages=_iconImages - In the implementation block
@property (assign,nonatomic) float iconPadding;                  //@synthesize iconPadding=_iconPadding - In the implementation block
@property (assign,nonatomic) CGPoint drawingOffset;              //@synthesize drawingOffset=_drawingOffset - In the implementation block
-(void)setDrawingOffset:(CGPoint)arg1 ;
-(void)setIconImages:(id)arg1 ;
-(float)preferredWidth;
-(id)iconImages;
-(CGPoint)drawingOffset;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setIconPadding:(float)arg1 ;
-(float)iconPadding;
@end
