/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebInspectorXPCWrapperDelegate.h>
#import <WebKit/WebInspectorClientRegistryDelegate.h>

@class WebInspectorXPCWrapper, WebInspectorServerWebViewConnectionController;

@interface WebInspectorServer : NSObject <WebInspectorXPCWrapperDelegate, WebInspectorClientRegistryDelegate> {

	BOOL _isEnabled;
	BOOL _hasActiveDebugSession;
	int _notifyToken;
	WebInspectorXPCWrapper* _xpcConnection;
	WebInspectorServerWebViewConnectionController* _connectionController;

}
-(void)dealloc;
-(id)init;
-(BOOL)isEnabled;
-(void)start;
-(void)stop;
-(id)xpcConnection;
-(void)pushListing;
-(void)didRegisterClient:(WebInspectorClient*)arg1 ;
-(void)didUnregisterClient:(WebInspectorClient*)arg1 ;
-(void)setupXPCConnectionIfNeeded;
-(void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3 ;
-(void)xpcConnectionFailed:(id)arg1 ;
-(BOOL)hasActiveDebugSession;
-(void)setHasActiveDebugSession:(BOOL)arg1 ;
@end
