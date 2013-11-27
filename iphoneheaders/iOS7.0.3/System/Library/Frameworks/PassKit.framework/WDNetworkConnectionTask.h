/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <passd/WDNetworkTask.h>

@class WDSecureConnectionManager;

@interface WDNetworkConnectionTask : WDNetworkTask {

	WDSecureConnectionManager* _connectionManager;

}
-(void)performCancel;
-(void)performStart:(BOOL)arg1 ;
-(void)performReset;
-(void)_destroyConnectionManager;
-(void)_startConnection:(BOOL)arg1 ;
-(void)_handleConnectionSuccessWithResponse:(id)arg1 data:(id)arg2 ;
-(void)_handleConnectionFailureWithError:(id)arg1 ;
-(void)handleResponse:(id)arg1 data:(id)arg2 ;
-(void)dealloc;
-(id)request;
-(void)handleError:(id)arg1 ;
@end
