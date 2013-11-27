/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_xpc_object;
@class NSObject, NSString, SYDServer;

@interface SYDPeer : NSObject {

	NSObject<OS_xpc_object>* _connection;
	NSString* _bundleIdentifier;
	NSString* _storeIdentifier;
	SYDServer* _server;
	BOOL _checkedBundleIdentifier;
	BOOL _checkedCanManage;
	BOOL _canManage;
	BOOL _isDebugged;

}

@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * storeIdentifier; 
@property (nonatomic,readonly) BOOL canManage; 
@property (nonatomic,readonly) BOOL isDebugged; 
-(void)shutdownWithHandler:(/*^block*/ id)arg1 ;
-(id)storeIdentifier;
-(BOOL)isDebugged;
-(id)initWithConnection:(id)arg1 server:(id)arg2 ;
-(BOOL)canManage;
-(void)dealloc;
-(id)description;
-(id)bundleIdentifier;
-(void)finalize;
@end
