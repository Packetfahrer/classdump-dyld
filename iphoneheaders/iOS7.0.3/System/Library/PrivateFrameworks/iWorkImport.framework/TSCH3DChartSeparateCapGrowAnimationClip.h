/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartGrowAnimationClip.h>

@interface TSCH3DChartSeparateCapGrowAnimationClip : TSCH3DChartGrowAnimationClip
-(id)makeClipEffectAtIndex:(const tvec2<int>*)arg1 sceneObject:(id)arg2 scene:(id)arg3 ;
-(void)renderAnimationElementInfo:(const ChartAnimationElementInfo*)arg1 ;
-(void)enableBlendingForProcessor:(id)arg1 enableDepth:(BOOL)arg2 ;
-(void)p_submitGrowState:(ChartGrowAnimationState*)arg1 info:(const ChartAnimationElementInfo*)arg2 portion:(int)arg3 ;
-(BOOL)p_renderCapWithAnimationElementInfo:(const ChartAnimationElementInfo*)arg1 ;
-(BOOL)p_renderBodyWithAnimationElementInfo:(const ChartAnimationElementInfo*)arg1 ;
@end
