/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosGridViewController.h>
#import <PhotosUI/PUSectionedGridLayoutDelegate.h>

@class PUPhotosPickerViewController;

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate> {

	PUPhotosPickerViewController* _activePhotosPickerViewController;
	NSObject* _album;

}

@property (nonatomic,retain) NSObject<PLAlbumProtocol> * album;              //@synthesize album=_album - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSObject*)album;
-(void)setAlbum:(NSObject*)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(CGPoint)contentOffsetForPreheating;
-(id)newGridLayout;
-(BOOL)canBeginStackCollapseTransition;
-(BOOL)wantsGlobalFooter;
-(void)configureGlobalFooterView:(id)arg1 ;
-(id)sessionInfoForTransferredAssets:(id)arg1 ;
-(void)handleAddFromAction;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(void)updateTitle;
-(void)saveSlideshowSettings:(id)arg1 ;
-(id)savedSlideshowSettings;
-(void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2 ;
-(id)localizedTitleForAssets:(id)arg1 ;
-(BOOL)_hasScrollableContent;
-(void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2 ;
-(void)setupScrubber;
-(void).cxx_destruct;
@end
