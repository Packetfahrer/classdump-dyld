/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>
#import <UIKit/UIKeyboardCandidateBarLayoutDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol UIKeyboardCandidateBarDelegate, UIKeyboardCandidateListDelegate;
@class NSString, UIImageView, , NSArray, UIKBThemedView, TIKeyboardCandidateResultSet, NSIndexPath, UIKBCandidateCollectionView;

@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateBarLayoutDelegate, UICollectionViewDataSource> {

	BOOL _canExtend;
	BOOL _shouldSkipLayoutUntilScrollViewAnimationEnds;
	BOOL _didSkipLayout;
	NSString* _inlineText;
	UIImageView* _candidateMaskView;
	<UIKeyboardCandidateBarDelegate>* _delegate;
	float _upArrowWidth;
	<UIKeyboardCandidateListDelegate>* _candidateListDelegate;
	NSArray* _candidateViews;
	unsigned _currentCandidateViewIndex;
	UIKBThemedView* _secondaryCandidatesViewEdgeGradient;
	TIKeyboardCandidateResultSet* _candidateResultSet;
	NSArray* _filteredCandidates;
	NSIndexPath* _dragStartNextPageIndexPath;
	NSIndexPath* _dragStartPreviousPageIndexPath;
	/*^block*/ id _skippedSetCandidatesBlock;
	CGPoint _dragStartOffset;

}

@property (nonatomic,readonly) TIKeyboardCandidateResultSet * candidates; 
@property (nonatomic,copy) NSString * inlineText;                                                    //@synthesize inlineText=_inlineText - In the implementation block
@property (nonatomic,retain) UIImageView * candidateMaskView;                                        //@synthesize candidateMaskView=_candidateMaskView - In the implementation block
@property (assign,nonatomic) <UIKeyboardCandidateBarDelegate> * delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float upArrowWidth;                                                     //@synthesize upArrowWidth=_upArrowWidth - In the implementation block
@property (assign,nonatomic) <UIKeyboardCandidateListDelegate> * candidateListDelegate;              //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,retain) NSArray * candidateViews;                                               //@synthesize candidateViews=_candidateViews - In the implementation block
@property (assign,nonatomic) unsigned currentCandidateViewIndex;                                     //@synthesize currentCandidateViewIndex=_currentCandidateViewIndex - In the implementation block
@property (nonatomic,readonly) UIKBCandidateCollectionView * currentCandidateView; 
@property (nonatomic,retain) UIKBThemedView * secondaryCandidatesViewEdgeGradient;                   //@synthesize secondaryCandidatesViewEdgeGradient=_secondaryCandidatesViewEdgeGradient - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;                      //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (nonatomic,retain) NSArray * filteredCandidates;                                           //@synthesize filteredCandidates=_filteredCandidates - In the implementation block
@property (assign,nonatomic) BOOL canExtend;                                                         //@synthesize canExtend=_canExtend - In the implementation block
@property (assign,nonatomic) CGPoint dragStartOffset;                                                //@synthesize dragStartOffset=_dragStartOffset - In the implementation block
@property (nonatomic,copy) NSIndexPath * dragStartNextPageIndexPath;                                 //@synthesize dragStartNextPageIndexPath=_dragStartNextPageIndexPath - In the implementation block
@property (nonatomic,copy) NSIndexPath * dragStartPreviousPageIndexPath;                             //@synthesize dragStartPreviousPageIndexPath=_dragStartPreviousPageIndexPath - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipLayoutUntilScrollViewAnimationEnds;                      //@synthesize shouldSkipLayoutUntilScrollViewAnimationEnds=_shouldSkipLayoutUntilScrollViewAnimationEnds - In the implementation block
@property (assign,nonatomic) BOOL didSkipLayout;                                                     //@synthesize didSkipLayout=_didSkipLayout - In the implementation block
@property (nonatomic,copy) id skippedSetCandidatesBlock;                                             //@synthesize skippedSetCandidatesBlock=_skippedSetCandidatesBlock - In the implementation block
+(unsigned)numberOfRows;
+(float)height;
+(float)heightForInterfaceOrientation:(int)arg1 ;
+(void)setScreenTraits:(id)arg1 ;
+(unsigned)numberOfRowsForInterfaceOrientation:(int)arg1 ;
+(float)heightForRowAtIndex:(unsigned)arg1 interfaceOrientation:(int)arg2 ;
+(float)heightForRowAtIndex:(unsigned)arg1 ;
+(float)heightForLastRow;
+(float)defaultCandidateWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(unsigned)count;
-(void)setFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)delegate;
-(BOOL)hasCandidates;
-(BOOL)hasNextPage;
-(id)candidates;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(id)candidateResultSet;
-(void)setCandidateResultSet:(id)arg1 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5 ;
-(void)candidateListSelectionDidChange:(id)arg1 ;
-(BOOL)isExtendedList;
-(BOOL)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(void)showCandidateAtIndex:(unsigned)arg1 ;
-(void)showCandidate:(id)arg1 ;
-(void)showNextCandidate;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned)arg1 ;
-(id)keyboardBehaviors;
-(id)statisticsIdentifier;
-(unsigned)selectedSortIndex;
-(void)setInlineText:(id)arg1 ;
-(BOOL)hasPreviousPage;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(id)inlineText;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)candidateListDelegate;
-(void)setCandidateListDelegate:(id)arg1 ;
-(void)candidateListShouldBeDismissed:(id)arg1 ;
-(void)_clearData;
-(id)candidateViews;
-(int)_sectionForSectionIndex:(unsigned)arg1 candidateView:(id)arg2 ;
-(unsigned)_countOfItemsInSection:(int)arg1 ;
-(id)_itemAtIndex:(unsigned)arg1 inSection:(int)arg2 ;
-(Class)_barCellClassForSection:(int)arg1 ;
-(float)_widthOfItemAtIndex:(unsigned)arg1 inSection:(int)arg2 ;
-(void)_updateCanExtendState;
-(void)setCurrentCandidateViewIndex:(unsigned)arg1 ;
-(BOOL)_showingInitiallyHiddenCandidates;
-(void)setShouldSkipLayoutUntilScrollViewAnimationEnds:(BOOL)arg1 ;
-(BOOL)shouldSkipLayoutUntilScrollViewAnimationEnds;
-(void)_scrollToFirstCandidateInSection:(int)arg1 withAnimation:(BOOL)arg2 ;
-(id)currentCandidateView;
-(BOOL)didSkipLayout;
-(void)_performSkippedLayoutIfNeeded;
-(void)setDragStartOffset:(CGPoint)arg1 ;
-(id)_nextPageIndexPath;
-(void)setDragStartNextPageIndexPath:(id)arg1 ;
-(id)_previousPageIndexPath;
-(void)setDragStartPreviousPageIndexPath:(id)arg1 ;
-(CGPoint)dragStartOffset;
-(id)_indexPathForFirstVisibleItem;
-(id)dragStartNextPageIndexPath;
-(BOOL)canExtend;
-(id)_candidateViewForSection:(int)arg1 ;
-(id)dragStartPreviousPageIndexPath;
-(id)_indexPathForLastVisibleItem;
-(void)setSkippedSetCandidatesBlock:(/*^block*/ id)arg1 ;
-(void)setDidSkipLayout:(BOOL)arg1 ;
-(void)setFilteredCandidates:(id)arg1 ;
-(id)filteredCandidates;
-(void)_reloadDataByAppendingAtEnd:(BOOL)arg1 initiallyHiddenCandidatesChanged:(BOOL)arg2 ;
-(void)_reloadData;
-(void)_showCandidateAtIndex:(unsigned)arg1 inSection:(int)arg2 scrollCellToVisible:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)_stepSelectedCandidateInDirection:(BOOL)arg1 ;
-(void)_showPageAtIndexPath:(id)arg1 ;
-(id)_indexPathForCandidateFromIndexPath:(id)arg1 inCandidateView:(id)arg2 ;
-(unsigned)currentCandidateViewIndex;
-(void)_stepSelectedCandidateInDirection:(BOOL)arg1 candidateView:(id)arg2 section:(int)arg3 ;
-(void)setCandidateViews:(id)arg1 ;
-(float)upArrowWidth;
-(id)secondaryCandidatesViewEdgeGradient;
-(void)setSecondaryCandidatesViewEdgeGradient:(id)arg1 ;
-(void)_updateCandidateViews;
-(/*^block*/ id)skippedSetCandidatesBlock;
-(unsigned)_sectionIndexForSection:(int)arg1 ;
-(id)_indexPathForCurrentCandidateViewFromIndexPath:(id)arg1 ;
-(void)setCanExtend:(BOOL)arg1 ;
-(CGSize)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2 ;
-(void)candidateBarLayoutDidFinishPreparingLayout;
-(float)_emptySpaceForItemsToIndex:(unsigned)arg1 inSection:(int)arg2 ;
-(void)setUpArrowWidth:(float)arg1 ;
-(id)candidateMaskView;
-(void)setCandidateMaskView:(id)arg1 ;
@end
