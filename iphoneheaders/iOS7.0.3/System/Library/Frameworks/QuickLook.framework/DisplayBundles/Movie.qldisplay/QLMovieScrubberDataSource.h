/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Movie.qldisplay/Movie
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Movie/Movie-Structs.h>
#import <UIKit/UIMovieScrubberDataSource.h>

@class UIMovieScrubber, AVAsset, NSArray, NSLock, NSMutableDictionary;

@interface QLMovieScrubberDataSource : NSObject <UIMovieScrubberDataSource> {

	UIMovieScrubber* _scrubber;
	AVAsset* _videoAsset;
	CGSize _presentationSize;
	CGSize _thumbnailSize;
	NSArray* _imageGenerators;
	NSLock* _thumbnailReqlock;
	unsigned _currentThumbnailRequestID;
	unsigned _previewFrameRequestID;
	CGSize _previewRequestSize;
	NSMutableDictionary* _thumbnailRequests;
	NSMutableDictionary* _requestsBeingProcessed;
	NSMutableDictionary* _cachedThumbnails;
	NSArray* _landscapeSummaryThumbnailTimestamps;
	NSArray* _portraitSummaryThumbnailTimestamps;
	unsigned _isPortraitOrientation : 1;
	unsigned _isEnabled : 1;
	BOOL canCreateMetadata;

}

@property (assign,nonatomic) BOOL canCreateMetadata; 
@property (assign,getter=isPotraitOrientation,nonatomic) BOOL portraitOrientation; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
-(void)_removeThumbnailRequestForRequestID:(id)arg1 ;
-(void)_updateThumbnailSize;
-(void)_serviceImageGenerationRequest;
-(int)addThumbnailRequestForTimestamp:(id)arg1 ;
-(void)setPortraitOrientation:(BOOL)arg1 ;
-(id)initWithScrubber:(id)arg1 avAsset:(id)arg2 presentationSize:(CGSize)arg3 portraitOrientation:(BOOL)arg4 ;
-(void)setCanCreateMetadata:(BOOL)arg1 ;
-(BOOL)_videoIsPortraitOrientation;
-(BOOL)isPotraitOrientation;
-(double)_videoDuration;
-(CGSize)_videoSize;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(double)movieScrubberDuration:(id)arg1 ;
-(id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4 ;
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 ;
-(float)movieScrubberThumbnailAspectRatio:(id)arg1 ;
-(BOOL)canCreateMetadata;
-(void)_clearImageGenerators;
-(void)_savePreviewPosterFrameImage:(CGImageRef)arg1 ;
-(void)_requestPreviewPosterFrameForVideoSize:(CGSize)arg1 ;
-(id)movieScrubber:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(int)arg4 ;
@end
