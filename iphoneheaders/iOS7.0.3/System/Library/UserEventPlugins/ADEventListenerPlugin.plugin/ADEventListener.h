/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class ADApplicationStateChangeEventListener, ADPowerEventListener, PLAggregateLogger, ADNetworkStatisticsListener;

@interface ADEventListener : NSObject {

	ADApplicationStateChangeEventListener* _appStateChangeEventListener;
	ADPowerEventListener* _powerEventListener;
	PLAggregateLogger* _aggregateLogger;
	ADNetworkStatisticsListener* _networkStatisticsListener;

}
-(void)registerForThermalNotification;
-(void)checkForDeviceBoot;
-(id)initWithQueue:(id)arg1 ;
-(void)dealloc;
@end

