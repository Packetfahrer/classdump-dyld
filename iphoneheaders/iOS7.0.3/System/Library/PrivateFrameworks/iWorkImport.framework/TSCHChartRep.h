/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextHostRep.h>
#import <iWorkImport/TSCHChartRepPlatformProtocols.h>
#import <iWorkImport/TSCHSupportsRendering.h>

@class NSArray, TSCHSelectionPath, TSCHRendererLayer, TSCHChartLayout, TSCHMessageView, CAShapeLayer, CALayer, TSCHLegendMoveKnob, TSCHChartDrawableInfo, TSCHSearchSelection, NSString;

@interface TSCHChartRep : TSWPTextHostRep <TSCHChartRepPlatformProtocols, TSCHSupportsRendering> {

	NSArray* mRenderers;
	BOOL mBuildingChunks;
	int mChunkPhase;
	int mCurrentChunk;
	BOOL mBuildingFinalBackground;
	BOOL mBuildingFinalElements;
	BOOL mChunkTexturesValid;
	BOOL mInZoom;
	unsigned mInDynamicStandinOperation;
	unsigned mInDynamicStandinLayoutOperation;
	BOOL mIsKPFExportForMultiData;
	TSCHSelectionPath* mActiveTextEditingPath;
	TSCHRendererLayer* mLegendLayer;
	BOOL mForceSeparateLegendLayer;
	BOOL mIsLayerBasedRep;
	BOOL mInvalidateLegendLayerForLayerBasedRep;
	TSCHChartLayout* mChartLayout;
	BOOL mWantsPreviewLayout;
	BOOL mEditorIsEditingInfo;
	TSCHMessageView* mMessageView;
	BOOL mMessageViewValid;
	BOOL mMediatorEditingHaloLayerPathValid;
	CAShapeLayer* mMediatorEditingHaloLayer;
	BOOL mLegendBorderHaloLayerPathValid;
	CAShapeLayer* mLegendBorderHaloLayer;
	BOOL mChartRepGoingAway;
	BOOL mCDEIsEditingInfo;
	BOOL mCDECausedSetNeedsDisplay;
	BOOL mDrawingSearchReference;
	CALayer* mSubselectionKnobLayer;
	BOOL mFinishedBecomingSelected;
	TSCHLegendMoveKnob* mDynamicLegendKnob;
	/*^block*/ id mDrawingOpStartBlock;
	/*^block*/ id mDrawingOpEndBlock;
	int mRenderPassChunkPhase;

}

@property (nonatomic,readonly) int currentChunk; 
@property (nonatomic,readonly) TSCHChartDrawableInfo * chartInfo; 
@property (nonatomic,readonly) TSCHChartLayout * chartLayout; 
@property (nonatomic,readonly) unsigned chartDeliveryStyle; 
@property (nonatomic,readonly) TSCHSearchSelection * selection; 
@property (nonatomic,readonly) BOOL forceRenderBlankBackground; 
@property (assign,nonatomic) BOOL chunkTexturesValid; 
@property (nonatomic,readonly) TSCHSelectionPath * activeTextEditingPath; 
@property (nonatomic,readonly) BOOL drawingSearchReference; 
@property (nonatomic,readonly) NSString * animationFilter; 
@property (nonatomic,readonly) float viewScale; 
@property (nonatomic,readonly) float contentsScale; 
@property (nonatomic,readonly) BOOL chartRepGoingAway; 
@property (nonatomic,copy) id drawingOpStartBlock; 
@property (nonatomic,copy) id drawingOpEndBlock; 
@property (nonatomic,retain) TSCHLegendMoveKnob * dynamicLegendKnob; 
@property (assign,nonatomic) BOOL forceSeparateLegendLayer; 
+(float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 ;
-(void)willBeginZooming;
-(void)didEndZooming;
-(float)viewScale;
-(id)renderSeriesIndexSetForFinalElements:(BOOL)arg1 ;
-(id)renderValueIndexSetForSeries:(unsigned)arg1 finalElements:(BOOL)arg2 ;
-(int)planeState:(int)arg1 finalElements:(BOOL)arg2 ;
-(id)chartInfo;
-(id)renderSeriesIndexSetForFinalElements:(BOOL)arg1 currentChunk:(int)arg2 ;
-(id)renderValueIndexSetForSeries:(unsigned)arg1 finalElements:(BOOL)arg2 currentChunk:(int)arg3 ;
-(int)currentChunk;
-(unsigned)chartDeliveryStyle;
-(id)animationFilter;
-(void)processChanges:(id)arg1 ;
-(id)chartLayout;
-(void)renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(void)knobTrackingDidBegin:(id)arg1 ;
-(void)knobTrackingDidEnd:(id)arg1 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(BOOL)isLayerBasedRep;
-(void)clearRenderers;
-(BOOL)chartRepGoingAway;
-(void)willBeRemoved;
-(id)renderers;
-(CGRect)geometryFrame;
-(CGRect)outerShadowFrame;
-(BOOL)renderLegendIntoSeparateLayer;
-(CGRect)frameInUnscaledCanvas;
-(CGRect)convertUnscaledToBoundsRect:(CGRect)arg1 ;
-(void)willUpdateLayer:(id)arg1 ;
-(id)p_legendRenderer;
-(void)didUpdateLayer:(id)arg1 ;
-(id)legendLayerForLayerBasedRep;
-(BOOL)isCanvasTextEditing;
-(void)didDrawInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(BOOL)isDrawingIntoPDF;
-(id)drawableLayout;
-(void)invalidateLegendLayerForLayerBasedRep;
-(void)becameSelected;
-(void)becameNotSelected;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)shouldShowLegendHighlight;
-(BOOL)shouldShowKnobs;
-(void)editorIsSelectingInfos:(id)arg1 ;
-(void)editorIsDeselectingInfo;
-(void)dynamicDragDidBegin;
-(id)dynamicResizeDidBegin;
-(void)dynamicResizeDidEndWithTracker:(id)arg1 ;
-(void)viewScaleDidChange;
-(void)setTextureStage:(unsigned)arg1 ;
-(BOOL)isLegendOn;
-(id)legendLayer;
-(id)knobForDynamicStyleChangeKey:(id)arg1 ;
-(void)addChartKnobsToArray:(id)arg1 ;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(id)newTrackerForKnob:(id)arg1 ;
-(void)endCanvasTextEditing;
-(void)invalidateSubselectionKnobs;
-(id)hitChartElements:(CGPoint)arg1 passingTest:(/*^block*/ id)arg2 ;
-(void)tswpTextEditingDidEndEditing:(id)arg1 ;
-(void)invalidateKnobPositions;
-(void)willAnimateIntoCDE;
-(void)didAnimateFromCDE;
-(void)protected_dynamicStyleChangeWillBegin:(id)arg1 ;
-(void)protected_dynamicStyleChangeDidEnd:(id)arg1 ;
-(BOOL)shouldApplyFractionalTranslationInRootForLegendLayer;
-(BOOL)shouldUseLegendLayerForLayerBasedRep;
-(BOOL)directlyManagesLayerContent;
-(BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(BOOL)canDrawInBackgroundDuringScroll;
-(BOOL)canDrawInParallel;
-(id)textureForContext:(id)arg1 ;
-(BOOL)rotationKnobHitByNaturalPoint:(CGPoint)arg1 ;
-(id)commandController;
-(BOOL)forceRenderBlankBackground;
-(BOOL)renderElementsShadowOnly;
-(BOOL)renderElementsWithoutShadows;
-(id)renderSeriesIndexSet;
-(id)renderValueIndexSetForSeries:(unsigned)arg1 ;
-(BOOL)renderElements;
-(BOOL)renderLabels;
-(id)activeTextEditingPath;
-(BOOL)drawingSearchReference;
-(void)protected_dynamicStyleLayoutChangeWillBegin:(id)arg1 ;
-(void)protected_dynamicStyleLayoutChangeDidEnd:(id)arg1 ;
-(void)p_findUIStateChanged:(id)arg1 ;
-(void)releaseLegendLayer;
-(void)p_deleteMessageView;
-(void)dismissMessageOverlayNowWithAnimation:(BOOL)arg1 ;
-(void)p_invalidateLegendSelectionHalo;
-(void)p_invalidateMediatorEditingHaloLayer;
-(void)updateFromLayout;
-(BOOL)p_usingSeparateLegendLayerForLayerBasedRep;
-(id)subselectionLayer;
-(void)p_invalidateMessageOverlay;
-(void)p_removeOrShowAndPositionMessageOverlay;
-(BOOL)p_textEditingInLegend;
-(id)overlayLayers;
-(void)p_validateLegendSelectionHalo;
-(void)p_validateMediatorEditingHaloLayer;
-(CGPoint)scaledSubpixelOffsetFromLayerFrameInScaledCanvas;
-(void)setupForDrawingInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(BOOL)inPrintPreviewMode;
-(BOOL)buildShouldUseRenderer:(id)arg1 ;
-(BOOL)shouldUseRenderer:(id)arg1 ;
-(BOOL)messageIsVisible;
-(void)p_positionMessageView;
-(void)p_topBarsShowedUp:(id)arg1 ;
-(void)p_messageAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(BOOL)p_hasAnySubselection;
-(id)itemsToAddToEditMenu;
-(BOOL)planeIsVisible:(int)arg1 ;
-(BOOL)chunkTexturesValid;
-(void)protected_renderChunkInBounds:(CGRect)arg1 textureSet:(id)arg2 ;
-(void)setChunkTexturesValid:(BOOL)arg1 ;
-(int)planeState:(int)arg1 finalElements:(BOOL)arg2 chunkStage:(int)arg3 ;
-(int)p_backgroundLikePlaneStateForEffectiveStage:(int)arg1 ;
-(BOOL)p_hasBackgroundLayerForPieChart;
-(void)p_forceDismissTransientMessage;
-(void)dynamicallyResizingWithTracker:(id)arg1 ;
-(void)setDynamicLegendKnob:(id)arg1 ;
-(id)dynamicLegendKnob;
-(BOOL)p_legendIsSelected;
-(int)dragTypeAtCanvasPoint:(CGPoint)arg1 ;
-(BOOL)legendHitByUnscaledPoint:(CGPoint)arg1 distanceFromCenter:(CGPoint*)arg2 ;
-(BOOL)p_legendHitByLayoutPoint:(CGPoint)arg1 ;
-(void)addKnobsToArray:(id)arg1 ;
-(void)invalidateKnobs;
-(void)p_centerToLegendFrameForNonactiveLegendMoveKnob:(id)arg1 legendDrawingFrameInNaturalSpace:(CGRect)arg2 ;
-(void)p_updateLegendLayerPositionForLegendMoveKnobUsingUnscaledPosition:(id)arg1 ;
-(void)p_updatePositionForLegendMoveKnob:(id)arg1 ;
-(void)p_updateLegendLayerPositionForLegendMoveKnobUsingRelativePosition:(id)arg1 ;
-(void)p_updatePositionOfLegendResizeKnob:(id)arg1 ;
-(void)p_centerToLegendFrameEdgeForNonactiveLegendResizeKnob:(id)arg1 legendFrameInNaturalSpace:(CGRect)arg2 ;
-(void)p_updatePositionOfLegendKnob:(id)arg1 ;
-(void)p_updatePositionsOfLegendKnobs:(id)arg1 ;
-(void)p_createLegendLayer;
-(void)setCurrentKnobTracker:(id)arg1 ;
-(void)setForceSeparateLegendLayer:(BOOL)arg1 ;
-(id)p_currentChartEditor;
-(id)p_primaryChartEditor;
-(id)p_findRendererForSelectionPath:(id)arg1 ;
-(BOOL)beginCanvasTextEditingForSelectionPath:(id)arg1 ;
-(CGPathRef)p_newPathForSearchSelection:(id)arg1 ;
-(CGPathRef)newPathForSearchReference:(id)arg1 ;
-(id)p_textImageForPath:(CGPathRef)arg1 renderer:(id)arg2 selection:(id)arg3 shouldPulsate:(BOOL)arg4 ;
-(void)p_validateChartTitleSelection;
-(BOOL)p_legendIsBeingMoved;
-(BOOL)p_legendIsBeingResized;
-(BOOL)shouldLayoutTilingLayer:(id)arg1 ;
-(BOOL)forceSeparateLegendLayer;
-(CGRect)visibleBoundsForTilingLayer:(id)arg1 ;
-(BOOL)hasSubselection;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(id)protected_haloLayersForHaloPositions:(id)arg1 ;
-(id)protected_knobLayersForKnobPositions:(id)arg1 ;
-(void)beginDrawingOperation;
-(/*^block*/ id)drawingOpStartBlock;
-(/*^block*/ id)drawingOpEndBlock;
-(BOOL)renderTrendLinesForSeriesIndex:(unsigned)arg1 ;
-(CGRect)snapRectForDynamicDragWithOffset:(CGPoint)arg1 ;
-(BOOL)p_hasBackgroundFill;
-(BOOL)p_chartShouldDisplayMessage;
-(void)displayMessage:(id)arg1 zPosition:(float)arg2 style:(int)arg3 ;
-(void)updateMessageOverlayNow;
-(id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2 ;
-(void)updateKnobs;
-(unsigned)adjustedKnobForComputingResizeGeometry:(unsigned)arg1 ;
-(BOOL)canEditWithEditor:(id)arg1 ;
-(id)p_findRendererForTextEditingSelectionPath:(id)arg1 ;
-(id)currentTextEditingSupporter;
-(void)beginCanvasTextEditingForSearchSelection:(id)arg1 ;
-(void)selectAllEditedText;
-(id)imageForSearchReference:(id)arg1 forPath:(CGPathRef)arg2 shouldPulsate:(BOOL)arg3 ;
-(void)beginChartDataEditing;
-(void)endChartDataEditing;
-(id)hitChartElements:(CGPoint)arg1 ;
-(void)endDrawingOperation;
-(void)setDrawingOpStartBlock:(/*^block*/ id)arg1 ;
-(void)setDrawingOpEndBlock:(/*^block*/ id)arg1 ;
-(BOOL)shadowsEnabled;
-(void)dealloc;
-(void)setNeedsDisplay;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(float)contentsScale;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isEditing;
-(id)selection;
-(id)beginEditing;
-(CGRect)rectForSelection:(id)arg1 ;
-(id)geometry;
-(BOOL)isDraggable;
-(void)drawInContext:(CGContextRef)arg1 ;
-(int)tilingMode;
@end
