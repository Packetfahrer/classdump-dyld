/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WirelessProximity/XPCClientDelegate.h>

@protocol WPTapDelegate;
@class , XPCClient;

@interface WPTap : NSObject <XPCClientDelegate> {

	<WPTapDelegate>* _delegate;
	XPCClient* _xpcClient;
	int _state;

}

@property (readonly) int state;              //@synthesize state=_state - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(int)state;
-(void).cxx_destruct;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)connectionInterrupted;
-(void)startWirelessTouchServer:(id)arg1 withUUID:(id)arg2 allowTransport:(unsigned char)arg3 ;
-(void)startWirelessTouchClient:(id)arg1 withUUID:(id)arg2 withTransport:(unsigned char)arg3 ;
-(void)stopWirelessTouchServer;
-(void)stopWirelessTouchClient;
@end
