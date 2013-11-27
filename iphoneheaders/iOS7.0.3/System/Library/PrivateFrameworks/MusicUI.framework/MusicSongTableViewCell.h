/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicUI/MusicTableViewCell.h>
#import <StoreKitUI/SKUIItemOfferButtonDelegate.h>

@class MPMediaDownloadObserver, MPStoreOffer;

@interface MusicSongTableViewCell : MusicTableViewCell <SKUIItemOfferButtonDelegate> {

	BOOL _displayAsDisabled;
	BOOL _playing;
	BOOL _downloadable;
	BOOL _purchasable;
	BOOL _downloadingCollectionOffer;
	MPMediaDownloadObserver* _downloadObserver;
	MPStoreOffer* _storeOffer;
	/*^block*/ id _downloadButtonActionBlock;

}

@property (assign,getter=isDisplayingAsDisabled,nonatomic) BOOL displayAsDisabled;                               //@synthesize displayAsDisabled=_displayAsDisabled - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                                      //@synthesize playing=_playing - In the implementation block
@property (getter=isDownloadable,nonatomic,readonly) BOOL downloadable;                                          //@synthesize downloadable=_downloadable - In the implementation block
@property (getter=isPurchasable,nonatomic,readonly) BOOL purchasable;                                            //@synthesize purchasable=_purchasable - In the implementation block
@property (getter=isDownloadingCollectionOffer,nonatomic,readonly) BOOL downloadingCollectionOffer;              //@synthesize downloadingCollectionOffer=_downloadingCollectionOffer - In the implementation block
@property (nonatomic,readonly) MPMediaDownloadObserver * downloadObserver;                                       //@synthesize downloadObserver=_downloadObserver - In the implementation block
@property (nonatomic,retain) MPStoreOffer * storeOffer;                                                          //@synthesize storeOffer=_storeOffer - In the implementation block
@property (nonatomic,copy) id downloadButtonActionBlock;                                                         //@synthesize downloadButtonActionBlock=_downloadButtonActionBlock - In the implementation block
+(Class)contentViewClass;
-(BOOL)isPlaying;
-(BOOL)isDownloadable;
-(void)dealloc;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)songCellContentView;
-(BOOL)isDisplayingAsDisabled;
-(void)setDisplayAsDisabled:(BOOL)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setDownloadable:(BOOL)arg1 purchasable:(BOOL)arg2 downloadObserver:(id)arg3 storeOffer:(id)arg4 downloadingCollectionOffer:(BOOL)arg5 animated:(BOOL)arg6 ;
-(void)setDownloadButtonActionBlock:(/*^block*/ id)arg1 ;
-(BOOL)isPurchasable;
-(void)_updateItemOfferButtonAnimated:(BOOL)arg1 ;
-(BOOL)isDownloadingCollectionOffer;
-(id)downloadObserver;
-(id)storeOffer;
-(void)setStoreOffer:(id)arg1 ;
-(/*^block*/ id)downloadButtonActionBlock;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)_itemOfferButtonAction:(id)arg1 ;
-(void).cxx_destruct;
@end
