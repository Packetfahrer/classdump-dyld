/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary;

@interface ACDAuthenticationHandlerQueueManager : NSObject {

	NSMutableDictionary* _verificationHandlerQueues;
	NSMutableDictionary* _renewalHandlerQueues;
	NSMutableDictionary* _promptHandlerQueues;

}
-(id)init;
-(BOOL)hasVerificationQueueForAccountID:(id)arg1 ;
-(BOOL)hasPromptQueueForAccountID:(id)arg1 ;
-(void)pushVerificationHandler:(/*^block*/ id)arg1 forAccountID:(id)arg2 ;
-(/*^block*/ id)popVerificationHandlerForAccountID:(id)arg1 ;
-(BOOL)hasRenewalQueueForRenewalID:(id)arg1 ;
-(void)pushRenewalHandler:(/*^block*/ id)arg1 forRenewalID:(id)arg2 ;
-(/*^block*/ id)popRenewalHandlerForRenewalID:(id)arg1 ;
-(void)pushPromptHandler:(/*^block*/ id)arg1 forAccountID:(id)arg2 ;
-(/*^block*/ id)popPromptHandlerForAccountID:(id)arg1 ;
-(void).cxx_destruct;
@end
