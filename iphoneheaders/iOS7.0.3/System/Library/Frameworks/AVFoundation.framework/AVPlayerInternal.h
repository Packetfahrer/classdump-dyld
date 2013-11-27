/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVPropertyStorage, AVPixelBufferAttributeMediator, NSMutableDictionary, NSArray, AVPlayerItem, NSMutableSet, NSObject, NSString, NSError, NSDictionary, AVAudioSessionMediaPlayerOnly;

@interface AVPlayerInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigPlayerRef figPlayer;
	OpaqueCMClockRef figMasterClock;
	AVPropertyStorage* propertyStorage;
	AVPixelBufferAttributeMediator* pixelBufferAttributeMediator;
	NSMutableDictionary* pendingFigPlayerProperties;
	NSArray* expectedAssetTypes;
	AVPlayerItem* currentItem;
	AVPlayerItem* lastItem;
	OpaqueFigPlaybackItemRef figPlaybackItemToIdentifyNextCurrentItem;
	NSMutableSet* items;
	NSObject<OS_dispatch_queue>* layersQ;
	NSMutableSet* caLayers;
	NSString* externalPlaybackVideoGravity;
	int status;
	NSError* error;
	NSObject<OS_dispatch_queue>* stateDispatchQueue;
	NSArray* displaysUsedForPlayback;
	BOOL needsToCreateFigPlayer;
	BOOL logPerformanceData;
	NSDictionary* cachedFigMediaSelectionCriteriaProperty;
	BOOL reevaluateBackgroundPlayback;
	BOOL hostApplicationInForeground;
	BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;
	BOOL iapdExtendedModeIsActive;
	AVAudioSessionMediaPlayerOnly* audioSessionMediaPlayerOnly;
	NSDictionary* vibrationPattern;
	OpaqueFigSimpleMutexRef prerollIDMutex;
	int nextPrerollIDToGenerate;
	int pendingPrerollID;
	/*^block*/ id prerollCompletionHandler;
	NSObject<OS_dispatch_queue>* subtitleQueue;
	NSDictionary* currentSubtitlesPayload;
	BOOL autoSwitchStreamVariants;
	BOOL preparesItemsForPlaybackAsynchronously;

}
@end
