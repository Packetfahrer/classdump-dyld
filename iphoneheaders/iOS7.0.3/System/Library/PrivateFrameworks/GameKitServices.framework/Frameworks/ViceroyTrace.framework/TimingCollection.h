/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TimingCollection : NSObject {

	NSMutableDictionary* timings;
	NSObject<OS_dispatch_queue>* queue;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)startTimingForKey:(id)arg1 ;
-(void)stopTimingForKey:(id)arg1 ;
-(float)totalTimeForKey:(id)arg1 ;
-(float)timingForKey:(id)arg1 ;
-(BOOL)hasKey:(id)arg1 ;
-(void)removeTimingForKey:(id)arg1 ;
-(void)resetTotalTimeForKey:(id)arg1 ;
@end
