/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputView.h>

@protocol UIKeyboardCandidateList;
@class UIKeyboardCandidateBar, UIKeyboardCandidateSortControl, UIKeyboardCandidateGrid, UIView, UIImageView, UIKeyboardCandidateUnsplitKeyboardToggleButton, UIKeyboardCandidateSplitKeyboardToggleButton;

@interface UIKeyboardCandidateView : UIInputView {

	UIKeyboardCandidateBar* _bar;
	UIKeyboardCandidateSortControl* _sortControl;
	UIKeyboardCandidateGrid* _extendedView;
	UIView<UIKeyboardCandidateList>* _inlineView;
	UIImageView* _leftBackground;
	UIImageView* _rightBackground;
	UIKeyboardCandidateUnsplitKeyboardToggleButton* _leftButton;
	UIKeyboardCandidateSplitKeyboardToggleButton* _rightButton;
	struct {
		unsigned isExtended;
		unsigned didMinimizeKeyboard;
		unsigned isSplit;
	}  _candidateBarFlags;

}

@property (nonatomic,retain) UIView<UIKeyboardCandidateList> * inlineView;              //@synthesize inlineView=_inlineView - In the implementation block
+(id)sharedInstance;
+(id)activeCandidateView;
+(id)sharedInstanceForInlineView:(BOOL)arg1 ;
+(id)activeCandidateList;
+(void)setActiveCandidateView:(id)arg1 ;
+(float)defaultExtendedControlHeight;
+(id)sharedInstanceForInlineView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)candidatesDidChange;
-(id)inlineView;
-(id)activeCandidateList;
-(void)setCandidateViewExtended:(BOOL)arg1 ;
-(BOOL)isExtended;
-(void)_toggleExtendedCandidateView:(id)arg1 ;
-(void)updatePageControlStatus;
-(void)setCandidateBarCanExtend:(BOOL)arg1 ;
-(unsigned)_numberOfColumns:(BOOL)arg1 ;
-(float)barHeight;
-(void)setCandidatesToExtendedViewFromCollapsedView:(id)arg1 ;
-(void)setInlineView:(id)arg1 ;
@end
