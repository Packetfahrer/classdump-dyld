/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/nsnetworkd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSURLSessionTask, NSObject, NSMutableArray;

@interface NDTaskMonitor : NSObject {

	NSURLSessionTask* _task;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_source>* _timeoutTimer;
	NSObject<OS_dispatch_source>* _throughputTimer;
	NSMutableArray* _progressTimestamps;
	NSMutableArray* _progressValues;
	unsigned _throughputInterval;

}
-(void)setThroughputTimerForCurrentInterval;
-(long long)currentIntervalEndDelta;
-(void)setupTimeoutTimerWithTimeout:(long long)arg1 ;
-(void)setupThroughputTimer;
-(double)currentThroughputThreshold;
-(void)calculateThroughput;
-(id)initWithTask:(id)arg1 timeout:(long long)arg2 ;
-(void)taskTransferredData:(unsigned)arg1 ;
-(void)cancel;
-(void).cxx_destruct;
@end
