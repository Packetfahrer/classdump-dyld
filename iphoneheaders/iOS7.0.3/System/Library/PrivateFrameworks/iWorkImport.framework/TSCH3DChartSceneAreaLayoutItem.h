/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAbstractAreaLayoutItem.h>

@class TSCH3DChartResizerHelper, TSCH3DScene, TSCH3DVector;

@interface TSCH3DChartSceneAreaLayoutItem : TSCHChartAbstractAreaLayoutItem {

	CGRect mChartBodyLayoutRect;
	TSCH3DChartResizerHelper* mResizerHelper;
	TSCH3DScene* mScene;
	tvec2<float> mChartBodyLayoutOffsetInChartAreaLayoutSpace;
	BOOL mIsInvariant;
	BOOL mIsInvalidated;
	tvec4<float> mInitialInfoChartScale;

}

@property (assign,nonatomic) CGRect chartBodyLayoutRect; 
@property (nonatomic,readonly) tvec2<int> containingViewport; 
@property (nonatomic,readonly) TSCH3DVector * containingViewportVector; 
@property (nonatomic,readonly) const ChartProjectedBoundsSpaces* projectedBounds; 
@property (nonatomic,readonly) TSCH3DScene * scene; 
@property (assign,nonatomic) BOOL isInvariant; 
+(id)worldBoundsDescriptionForScene:(id)arg1 ;
-(const ChartProjectedBoundsSpaces*)projectedBounds;
-(id)containingViewportVector;
-(id)boundsLayout;
-(void)invalidateBounds;
-(tvec2<int>)containingViewport;
-(void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(int)arg2 ;
-(void)p_validate;
-(void)clearAll;
-(id)p_updatedResizerHelper;
-(id)boundsLayout:(CGRect)arg1 scene:(id)arg2 allowsEmptyBodyLayoutBounds:(BOOL)arg3 ;
-(CGRect)calcDrawingRect;
-(void)p_updateBodyLayoutRect;
-(void)p_updateLayoutSize:(CGSize)arg1 chartBodyLayoutOffsetInChartAreaLayoutSpace:(const tvec2<float>*)arg2 ;
-(tvec2<int>)p_currentModelSize;
-(BOOL)p_validCacheItem:(id)arg1 inward:(BOOL)arg2 ;
-(void)p_updateFromCacheItem:(id)arg1 ;
-(BOOL)p_needsRefinementForInwardLayout;
-(void)p_layoutInward;
-(id)p_cache;
-(BOOL)p_inwardLayoutCanUseCacheItem:(id)arg1 ;
-(id)p_cacheInwardLayout;
-(void)p_layoutOutward;
-(BOOL)p_outwardLayoutCanUseCacheItem:(id)arg1 ;
-(id)p_cacheOutwardLayout;
-(void)setLayoutOffset:(CGPoint)arg1 ;
-(id)renderersWithRep:(id)arg1 ;
-(const ChartProjectedBoundsSpaces*)projectedBoundsWithScene:(id)arg1 allowsEmptyBodyLayoutBounds:(BOOL)arg2 ;
-(id)debug_rotationBounds;
-(void)setStabilizedChartBodyLayoutRectUsingConverter:(const ChartProjectedBoundsConverter*)arg1 ;
-(void)setChartBodyLayoutSize:(CGSize)arg1 ;
-(CGRect)chartBodyLayoutRect;
-(void)setChartBodyLayoutRect:(CGRect)arg1 ;
-(BOOL)isInvariant;
-(void)setIsInvariant:(BOOL)arg1 ;
-(id)scene;
-(void)dealloc;
-(id).cxx_construct;
-(void)clearScene;
-(id)initWithParent:(id)arg1 ;
@end
