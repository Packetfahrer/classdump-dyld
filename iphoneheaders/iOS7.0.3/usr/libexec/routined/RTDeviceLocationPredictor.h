/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, RTStateModel;

@interface RTDeviceLocationPredictor : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_source>* _processRawLocationsTimer;
	NSObject<OS_dispatch_source>* _cleanHouseTimer;
	RTStateModel* _stateModel;

}

@property (nonatomic,retain) NSObject<OS_dispatch_queue> * queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_source> * processRawLocationsTimer;              //@synthesize processRawLocationsTimer=_processRawLocationsTimer - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_source> * cleanHouseTimer;                       //@synthesize cleanHouseTimer=_cleanHouseTimer - In the implementation block
@property (nonatomic,retain) RTStateModel * stateModel;                                            //@synthesize stateModel=_stateModel - In the implementation block
+(id)sharedInstance;
-(void)fetchNextLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(/*^block*/ id)arg4 ;
-(void)onEncryptedDataAvailabilityNotification:(id)arg1 ;
-(id)stateModel;
-(void)setStateModel:(id)arg1 ;
-(id)processRawLocationsTimer;
-(id)cleanHouseTimer;
-(void)_fetchNextLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(/*^block*/ id)arg4 ;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(/*^block*/ id)arg3 ;
-(void)fetchLocationsOfInterestOfType:(int)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)fetchAllLocationsOfInterestWithHandler:(/*^block*/ id)arg1 ;
-(void)setProcessRawLocationsTimer:(id)arg1 ;
-(void)setCleanHouseTimer:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clear;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(void).cxx_destruct;
@end
