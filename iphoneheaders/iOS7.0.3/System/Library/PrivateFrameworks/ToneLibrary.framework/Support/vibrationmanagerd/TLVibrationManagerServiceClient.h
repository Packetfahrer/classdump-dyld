/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/Support/vibrationmanagerd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface TLVibrationManagerServiceClient : NSObject
+(void)sendMessage:(id)arg1 asynchronously:(BOOL)arg2 completionBlock:(/*^block*/ id)arg3 ;
+(void)_sendXPCMessage:(id)arg1 asynchronously:(BOOL)arg2 remainingAttempts:(unsigned)arg3 previousError:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
+(id)_sharedConnection;
@end

