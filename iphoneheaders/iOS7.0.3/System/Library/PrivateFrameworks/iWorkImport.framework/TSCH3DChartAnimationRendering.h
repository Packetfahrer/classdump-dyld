/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSCH3DChartAnimationRendering
@required
-(void)animationWillBeginForChunkStage:(int)arg1;
-(void)animationDidEndForChunkStage:(int)arg1;
-(void)setAnimationType:(int)arg1 chunkStage:(int)arg2 buildType:(int)arg3 textureDeliveryStyle:(unsigned)arg4 attributes:(id)arg5;
-(id)animationLayerWithFrame:(CGRect)arg1 scale:(float)arg2 colorSpace:(CGColorSpaceRef)arg3 returningDrawingFrame:(CGRect*)arg4 TSDGLLayer:(id*)arg5;
-(void)renderAnimationFrame:(float)arg1 drawingFrame:(CGRect)arg2 chunkStage:(int)arg3;
@end
