/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MBNotificationCenter : NSObject {

	NSMutableDictionary* _tokensByName;
	NSObject<OS_dispatch_queue>* _queue;

}
+(id)sharedNotificationCenter;
-(void)postNotification:(id)arg1 ifStateChanged:(unsigned long long)arg2 ;
-(int)_tokenForName:(id)arg1 ;
-(unsigned long long)_stateForToken:(int)arg1 ;
-(void)_setState:(unsigned long long)arg1 forToken:(int)arg2 ;
-(unsigned long long)stateForNotification:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 forNotification:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)postNotification:(id)arg1 ;
-(void)_postNotification:(id)arg1 ;
@end

