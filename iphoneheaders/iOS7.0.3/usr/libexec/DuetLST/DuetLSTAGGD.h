/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/DuetLST
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <DuetLST/DuetLST-Structs.h>
@class NSObject, DuetLST;

@interface DuetLSTAGGD : NSObject {

	NSObject<OS_dispatch_queue>* DuetLSTAGGDQueue;
	NSObject<OS_dispatch_source>* DuetLSTAGGDTimer;
	CFDictionaryRef subscribedChannels;
	IOReportSubscriptionCFRef subscription;
	CFDictionaryRef lastReading;
	DuetLST* lst;

}

@property (nonatomic,retain) DuetLST * lst; 
-(void)setLst:(id)arg1 ;
-(id)lst;
-(id)initWithLSTinstance:(id)arg1 ;
-(void)DuetLSTAGGD_runTask;
-(CFDictionaryRef)createChannelForDriver:(const char*)arg1 ;
-(void)DuetLSTAGGD_init;
-(void).cxx_destruct;
@end
