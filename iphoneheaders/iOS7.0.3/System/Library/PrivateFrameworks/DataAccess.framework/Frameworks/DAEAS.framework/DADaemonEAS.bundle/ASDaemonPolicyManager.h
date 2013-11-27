/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAEAS/ASPolicyManager.h>
#import <DADaemonEAS/ASPolicyPreflighterDelegate.h>

@class ASAccount, ASPolicyPreflighter;

@interface ASDaemonPolicyManager : ASPolicyManager <ASPolicyPreflighterDelegate> {

	ASAccount* _account;
	ASPolicyPreflighter* _preflighter;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)_populateCurrentPolicy;
-(void)_tearDownPreflighter;
-(void)requestPolicyUpdate;
-(void)preflighter:(id)arg1 error:(id)arg2 ;
-(void)preflighterRemoteWipeRequested:(id)arg1 ;
-(void)preflighter:(id)arg1 needsComplianceWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3 ;
-(void)preflighter:(id)arg1 successWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3 policyKey:(id)arg4 ;
-(void)preflighterRemoteWipeRequestResponseAcknowledged:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end
