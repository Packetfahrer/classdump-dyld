/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class _UIRefreshControlContentView, UIScrollView, UIColor, NSAttributedString;

@interface UIRefreshControl : UIControl {

	int _style;
	_UIRefreshControlContentView* _contentView;
	UIScrollView* _scrollView;
	float _refreshControlHeight;
	float _visibleHeight;
	float _snappingHeight;
	float _additionalTopInset;
	BOOL _insetsApplied;
	BOOL _adjustingInsets;
	UIEdgeInsets _appliedInsets;
	int _refreshControlState;

}

@property (getter=isRefreshing,nonatomic,readonly) BOOL refreshing; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,readonly) int refreshControlState;                                       //@synthesize refreshControlState=_refreshControlState - In the implementation block
@property (nonatomic,readonly) int style; 
@property (nonatomic,readonly) float _refreshControlHeight; 
@property (nonatomic,readonly) float _snappingHeight; 
@property (nonatomic,readonly) float _visibleHeight; 
@property (getter=_isApplyingInsets,nonatomic,readonly) BOOL _applyingInsets; 
@property (getter=_appliedInsets,nonatomic,readonly) UIEdgeInsets appliedInsets; 
+(Class)_contentViewClassForStyle:(int)arg1 ;
+(id)_defaultColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(id)_contentView;
-(void)setBounds:(CGRect)arg1 ;
-(void)setAttributedTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
-(void)sizeToFit;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_didScroll;
-(void)_setTintColor:(id)arg1 ;
-(id)_tintColor;
-(float)_refreshControlHeight;
-(BOOL)_isApplyingInsets;
-(int)refreshControlState;
-(void)_removeInsets;
-(void)_update;
-(void)_addInsets;
-(void)beginRefreshing;
-(void)endRefreshing;
-(UIEdgeInsets)_appliedInsets;
-(id)initWithStyle:(int)arg1 ;
-(id)attributedTitle;
-(float)_visibleHeight;
-(void)_setAttributedTitle:(id)arg1 ;
-(id)_attributedTitle;
-(void)_updateSnappingHeight;
-(void)setRefreshControlState:(int)arg1 ;
-(void)_resizeToFitContents;
-(void)_removeInsetHeight:(float)arg1 ;
-(void)_addInsetHeight:(float)arg1 ;
-(float)revealedFraction;
-(int)_recomputeNewState;
-(void)_updateHiddenStateIfNeeded;
-(void)_updateConcealingMask;
-(CGPoint)_originForContentOffset:(CGPoint)arg1 ;
-(float)_visibleHeightForContentOffset:(CGPoint)arg1 origin:(CGPoint)arg2 ;
-(void)_setVisibleHeight:(float)arg1 ;
-(float)_stiffnessForVelocity:(float)arg1 ;
-(void)_setRefreshControlState:(int)arg1 notify:(BOOL)arg2 ;
-(BOOL)_canTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(BOOL)isRefreshing;
-(float)_snappingHeight;
-(float)_scrollViewHeight;
@end

