/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPageViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>

@protocol MSCarDisplayServiceProvider;
@class MPAVController, MPMediaQuery, NSMutableArray, UIButton, MSNowPlayingButton;

@interface MSGeniusMixesViewController : UIPageViewController <UIPageViewControllerDataSource> {

	MPAVController* _player;
	<MSCarDisplayServiceProvider>* _serviceProvider;
	MPMediaQuery* _query;
	NSMutableArray* _viewControllers;
	UIButton* _pageRightButton;
	UIButton* _pageLeftButton;
	MSNowPlayingButton* _nowPlayingButton;

}
-(void)_itemChanged:(id)arg1 ;
-(void)dealloc;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)_moveWithEvent:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(int)presentationCountForPageViewController:(id)arg1 ;
-(int)presentationIndexForPageViewController:(id)arg1 ;
-(id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(void)_updateNowPlayingVisibility;
-(void)_nowPlayingButtonTapped:(id)arg1 ;
-(void)updatePageArrows;
-(void)knobPressed:(id)arg1 ;
-(void)_pageRightButtonTouchUpInside:(id)arg1 ;
-(void)_pageLeftButtonTouchUpInside:(id)arg1 ;
-(void).cxx_destruct;
@end

