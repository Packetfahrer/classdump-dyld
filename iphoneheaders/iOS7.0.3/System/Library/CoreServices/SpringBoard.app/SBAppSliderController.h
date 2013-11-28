/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBAppSliderIconControllerDelegate.h>
#import <SpringBoard/SBAppSliderScrollingViewDelegate.h>
#import <UIKit/_UISettingsKeyObserver.h>
#import <SpringBoard/SBVolumePressBandit.h>

@protocol SBAppSliderControllerDelegate, OS_dispatch_queue;
@class NSMutableArray, SBAppSwitcherServices, NSMutableDictionary, SBAppSliderScrollingViewController, SBAppSliderIconController, UIView, NSMutableSet, NSString, NSDictionary, SBAppSliderSettings, NSObject, SBFakeStatusBarViewCache, NSArray;

@interface SBAppSliderController : UIViewController <SBAppSliderIconControllerDelegate, SBAppSliderScrollingViewDelegate, _UISettingsKeyObserver, SBVolumePressBandit> {

	<SBAppSliderControllerDelegate>* _delegate;
	NSMutableArray* _appList;
	SBAppSwitcherServices* _switcherServices;
	NSMutableDictionary* _switcherServiceViewControllerMap;
	unsigned _appListAccessCount;
	SBAppSliderScrollingViewController* _pageController;
	SBAppSliderIconController* _iconController;
	UIView* _containerView;
	UIView* _contentView;
	UIView* _pageView;
	UIView* _iconView;
	UIView* _iconParallaxView;
	UIView* _iconParallaxCorrectionView;
	NSMutableSet* _hostedApplications;
	NSMutableDictionary* _appSnapshots;
	NSRange _lastVisibleRange;
	unsigned _startAnchorIndex;
	int _startingInterfaceOrientation;
	int _layoutInterfaceOrientation;
	BOOL _interactionEnabled;
	BOOL _visible;
	int _mode;
	BOOL _deferredWorkComplete;
	unsigned _startingIndex;
	NSString* _startingDisplayIdentifier;
	NSDictionary* _startingViews;
	int _enterSide;
	SBAppSliderSettings* _settings;
	NSObject<OS_dispatch_queue>* _snapshotQueue;
	NSMutableArray* _servicesRemovedWhileAwayFromSwitcher;
	SBFakeStatusBarViewCache* _statusBarCache;
	CGAffineTransform _wallpaperTransform;

}

@property (assign,nonatomic) <SBAppSliderControllerDelegate> * delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * startingDisplayIdentifier;                        //@synthesize startingDisplayIdentifier=_startingDisplayIdentifier - In the implementation block
@property (assign,nonatomic) CGAffineTransform wallpaperTransform;                      //@synthesize wallpaperTransform=_wallpaperTransform - In the implementation block
@property (nonatomic,readonly) NSArray * applicationList; 
@property (nonatomic,readonly) SBAppSliderIconController * iconController; 
@property (nonatomic,retain) NSDictionary * startingViews;                              //@synthesize startingViews=_startingViews - In the implementation block
+(BOOL)shouldProvideSnapshotIfPossible;
+(BOOL)shouldProvideHomeSnapshotIfPossible;
+(BOOL)_shouldUseSerialSnapshotQueue;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(BOOL)allowShowHide;
-(void)animatePresentationFromDisplayIdentifier:(id)arg1 withViews:(id)arg2 fromSide:(int)arg3 withCompletion:(/*^block*/ id)arg4 ;
-(void)switcherWasPresented:(BOOL)arg1 ;
-(void)switcherWillBeDismissed:(BOOL)arg1 ;
-(id)applicationList;
-(void)animateDismissalToDisplayIdentifier:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)_snapshotChangedOnDisk:(id)arg1 ;
-(void)_switcherServiceRemoved:(id)arg1 ;
-(void)_noteLockScreenCameraDidShow;
-(void)_appActivationStateDidChange:(id)arg1 ;
-(float)_sliderThumbnailVerticalPositionOffset;
-(CGRect)_nominalPageViewFrame;
-(void)setStartingDisplayIdentifier:(id)arg1 ;
-(void)setStartingViews:(id)arg1 ;
-(void)_updatePageViewScale:(float)arg1 xTranslation:(float)arg2 ;
-(id)_beginAppListAccess;
-(void)_temporarilyHostAppForQuitting:(id)arg1 ;
-(void)_reverseAppList;
-(void)_layoutInOrientation:(int)arg1 ;
-(id)_iconListForAppList:(id)arg1 ;
-(void)_updateForAnimationFrame:(float)arg1 withAnchor:(unsigned)arg2 ;
-(void)_bringIconViewToFront;
-(id)_transitionAnimationFactory;
-(id)_animationSettingsForIconAlphaTransition;
-(void)_updateSnapshots;
-(void)_endAppListAccess;
-(void)_setInteractionEnabled:(BOOL)arg1 ;
-(void)_disableContextHostingForApp:(id)arg1 ;
-(BOOL)_inMode:(int)arg1 ;
-(id)_displayIDAtIndex:(unsigned)arg1 ;
-(float)_scaleForFullscreenPageView;
-(id)_snapshotViewForDisplayIdentifier:(id)arg1 ;
-(void)_quitAppAtIndex:(unsigned)arg1 ;
-(id)startingViews;
-(id)_viewForService:(id)arg1 ;
-(id)startingDisplayIdentifier;
-(unsigned)_totalSnapshotsToKeepAround;
-(BOOL)_isSnapshotDisplayIdentifier:(id)arg1 ;
-(void)sliderIconScroller:(id)arg1 contentOffsetChanged:(float)arg2 ;
-(void)sliderIconScroller:(id)arg1 activate:(id)arg2 ;
-(void)sliderIconScrollerBeganPanning:(id)arg1 ;
-(unsigned)sliderIconScroller:(id)arg1 settledIndexForNormalizedOffset:(inout float*)arg2 andXVelocity:(float)arg3 ;
-(void)sliderIconScrollerDidEndScrolling:(id)arg1 ;
-(unsigned)sliderScrollerItemCount:(id)arg1 ;
-(id)sliderScroller:(id)arg1 viewForIndex:(unsigned)arg2 ;
-(CGSize)sliderScrollerItemSize:(id)arg1 forOrientation:(int)arg2 ;
-(float)sliderScrollerDistanceBetweenItemCenters:(id)arg1 forOrientation:(int)arg2 ;
-(void)sliderScroller:(id)arg1 contentOffsetChanged:(float)arg2 ;
-(void)sliderScroller:(id)arg1 itemTapped:(unsigned)arg2 ;
-(void)sliderScrollerBeganPanning:(id)arg1 ;
-(BOOL)sliderScroller:(id)arg1 itemWantsToBeKeptInViewHierarchy:(unsigned)arg2 ;
-(void)sliderScrollerDidEndScrolling:(id)arg1 ;
-(id)iconController;
-(id)pageForDisplayIdentifier:(id)arg1 ;
-(float)_frameScaleValueForAnimation;
-(void)_updatePageViewScale:(float)arg1 ;
-(CGAffineTransform)wallpaperTransform;
-(void)setWallpaperTransform:(CGAffineTransform)arg1 ;
-(void)forceDismissAnimated:(BOOL)arg1 ;
-(id)_generateCellViewForIndex:(unsigned)arg1 ;
-(void)sliderScroller:(id)arg1 itemWantsToBeRemoved:(unsigned)arg2 ;
-(void)switcherWasDismissed:(BOOL)arg1 ;
-(BOOL)sliderScroller:(id)arg1 isIndexRemovable:(unsigned)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)wantsFullScreenLayout;
-(int)_windowInterfaceOrientation;
-(void)loadView;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_SB3*)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)_layout;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)isScrolling;
-(id)pageController;
@end
