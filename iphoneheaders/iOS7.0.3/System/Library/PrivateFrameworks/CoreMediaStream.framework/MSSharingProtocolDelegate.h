/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MSSharingProtocolDelegate <NSObject>
@required
-(void)sharingProtocol:(id)arg1 didFindShareState:(id)arg2;
-(void)sharingProtocol:(id)arg1 didCompleteTransactionWithError:(id)arg2;
-(void)sharingProtocol:(id)arg1 didFailToSendInvitations:(id)arg2;
-(void)sharingProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
@end
