/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRenderer.h>

@interface TSCHLegendRenderer : TSCHRenderer {

	CGPoint _textEditingPixelAlignmentOffset;

}

@property (assign,nonatomic) CGPoint textEditingPixelAlignmentOffset;              //@synthesize textEditingPixelAlignmentOffset=_textEditingPixelAlignmentOffset - In the implementation block
-(BOOL)canRenderSelectionPath:(id)arg1 ;
-(void)renderIntoContext:(CGContextRef)arg1 selection:(id)arg2 ;
-(void)addSelection:(id)arg1 toCGPath:(CGPathRef)arg2 ;
-(void)setTextEditingPixelAlignmentOffset:(CGPoint)arg1 ;
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(void)p_drawLineAreaBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(void)p_drawPieBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(void)p_draw3DLineBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(void)p_drawDefaultBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(id)p_selectionPathForCell:(id)arg1 ;
-(void)p_drawBadgeForCell:(id)arg1 intoContext:(CGContextRef)arg2 ;
-(void)p_drawLabelForCell:(id)arg1 intoContext:(CGContextRef)arg2 rangePtr:(NSRange*)arg3 ;
-(CGPoint)textEditingPixelAlignmentOffset;
@end
