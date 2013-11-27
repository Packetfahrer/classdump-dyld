/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VOTElementLabelCache : NSObject {

	NSMutableDictionary* _labelCache;
	NSObject<OS_dispatch_queue>* _labelCacheAccessQueue;

}
+(id)sharedManager;
-(id)userLabelForIdentification:(id)arg1 ;
-(void)storeUserLabel:(id)arg1 forIdentification:(id)arg2 ;
-(void)_icloudDataChanged:(id)arg1 ;
-(void)_iCloudReconcileDataStore:(id)arg1 ;
-(void)_iCloudPublishData:(id)arg1 ;
-(void)_syncLabelCache;
-(void)dealloc;
-(id)init;
@end
