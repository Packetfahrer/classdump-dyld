/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/ACDS.vvservice/ACDS
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray;

@interface ACDSTaskQueue : NSObject {

	NSMutableArray* _pendedTasks;

}
-(void)dealloc;
-(id)init;
-(BOOL)isEmpty;
-(void)removeTask:(id)arg1 ;
-(id)taskOfType:(int)arg1 ;
-(void)enqueueTask:(id)arg1 ;
-(id)nextTaskOfType:(id)arg1 ;
-(id)nextNonKeyExchangeTask;
-(id)taskOfServiceTaskType:(int)arg1 ;
-(void)drainWithError:(id)arg1 forService:(id)arg2 ;
-(id)nextTask;
-(id)dequeueNextReadyTask;
-(void)_removeTask:(id)arg1 atIndex:(int)arg2 ;
-(id)_taskOfType:(int)arg1 serviceType:(BOOL)arg2 ;
@end
