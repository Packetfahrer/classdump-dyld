/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol APSConnectionServerDelegate <NSObject>
@required
-(void)connectionWasClosed:(id)arg1;
-(void)connection:(id)arg1 handleAckIncomingMessageWithGuid:(id)arg2;
-(void)connectionTopicsChanged:(id)arg1;
-(BOOL)connectionDelegateHasIdentity:(id)arg1;
-(BOOL)connectionDelegateIsConnectedToService:(id)arg1;
-(void)connectionChangedCriticalReliability:(id)arg1;
-(void)connection:(id)arg1 didReceiveOutgoingMessageToSend:(id)arg2;
-(void)connection:(id)arg1 didReceiveCancellationForOutgoingMessageWithID:(unsigned)arg2;
-(void)connection:(id)arg1 didReceiveFakeMessageToSend:(id)arg2;
-(void)connection:(id)arg1 didRequestPublicTokenForTopic:(id)arg2 identifier:(id)arg3;
-(void)connection:(id)arg1 didInvalidatePublicTokenForTopic:(id)arg2 identifier:(id)arg3;
@end
