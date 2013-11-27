/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface _MPUBorderView : UIView {

	UIColor* _borderColor;
	float _borderWidth;
	float _borderAlpha;
	UIColor* _fillColor;
	float _fillAlpha;
	float _dropShadowAlpha;
	unsigned _dropShadowEdges;
	float _dropShadowWidth;
	UIColor* _dropShadowColor;

}

@property (nonatomic,retain) UIColor * borderColor;                  //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) float borderWidth;                      //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) float borderAlpha;                      //@synthesize borderAlpha=_borderAlpha - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) float fillAlpha;                        //@synthesize fillAlpha=_fillAlpha - In the implementation block
@property (assign,nonatomic) float dropShadowAlpha;                  //@synthesize dropShadowAlpha=_dropShadowAlpha - In the implementation block
@property (assign,nonatomic) unsigned dropShadowEdges;               //@synthesize dropShadowEdges=_dropShadowEdges - In the implementation block
@property (assign,nonatomic) float dropShadowWidth;                  //@synthesize dropShadowWidth=_dropShadowWidth - In the implementation block
@property (nonatomic,retain) UIColor * dropShadowColor;              //@synthesize dropShadowColor=_dropShadowColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(id)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(id)fillColor;
-(float)borderWidth;
-(id)borderColor;
-(void)setDropShadowAlpha:(float)arg1 ;
-(void)setBorderAlpha:(float)arg1 ;
-(void)setFillAlpha:(float)arg1 ;
-(float)dropShadowAlpha;
-(unsigned)dropShadowEdges;
-(float)dropShadowWidth;
-(float)borderAlpha;
-(float)fillAlpha;
-(void)setDropShadowEdges:(unsigned)arg1 ;
-(void)setDropShadowWidth:(float)arg1 ;
-(id)dropShadowColor;
-(void)setDropShadowColor:(id)arg1 ;
-(void).cxx_destruct;
@end
