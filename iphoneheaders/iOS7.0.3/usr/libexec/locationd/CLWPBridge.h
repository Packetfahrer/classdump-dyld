/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <locationd/WirelessProximityDelegate.h>

@class NSRecursiveLock, WirelessProximity;

@interface CLWPBridge : NSObject <WirelessProximityDelegate> {

	NSRecursiveLock* _instanceLock;
	WirelessProximity* _proximity;
	int _state;
	/*^block*/ id _stateHandler;

}

@property (nonatomic,copy) id stateHandler;              //@synthesize stateHandler=_stateHandler - In the implementation block
-(void)setStateHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)stateHandler;
-(void)registerForStateUpdates:(/*^block*/ id)arg1 ;
-(void)unregisterForStateUpdates;
-(id)initWithQueue:(id)arg1 ;
-(void)dealloc;
-(void)wirelessProximity:(id)arg1 didChangePowerState:(int)arg2 ;
@end
