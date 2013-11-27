/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <FaceTime/PhoneNavigationController.h>

@class PHVoicemailListViewController, PHVoicemailSetupViewController, PHVoicemailNoContentViewController, TPAlertViewHelper;

@interface PHVoicemailNavigationController : PhoneNavigationController {

	PHVoicemailListViewController* _inboxViewController;
	PHVoicemailListViewController* _trashViewController;
	PHVoicemailListViewController* _blockedViewController;
	PHVoicemailSetupViewController* _setupViewController;
	PHVoicemailNoContentViewController* _noContentViewController;
	TPAlertViewHelper* _mailboxFullAlertViewHelper;
	BOOL _active;
	BOOL _mailboxRequiresSetupPreviousValue;
	BOOL _sharedServiceIsSubscribedPreviousValue;

}

@property (readonly) PHVoicemailListViewController * inboxViewController; 
@property (readonly) PHVoicemailListViewController * trashViewController; 
@property (readonly) PHVoicemailListViewController * blockedViewController; 
@property (readonly) PHVoicemailSetupViewController * setupViewController; 
@property (readonly) PHVoicemailNoContentViewController * noContentViewController; 
@property (assign) BOOL mailboxRequiresSetupPreviousValue;                                      //@synthesize mailboxRequiresSetupPreviousValue=_mailboxRequiresSetupPreviousValue - In the implementation block
@property (assign) BOOL sharedServiceIsSubscribedPreviousValue;                                 //@synthesize sharedServiceIsSubscribedPreviousValue=_sharedServiceIsSubscribedPreviousValue - In the implementation block
+(id)tabBarIconImage;
+(id)tabBarIconImageSelected;
+(id)tabBarIconName;
+(int)tabViewType;
+(id)tabBarIconImageName;
+(SCD_Struct_Ph0)badge;
-(BOOL)shouldSnapshot;
-(void)_handleStoreChanged:(id)arg1 ;
-(id)trashViewController;
-(id)blockedViewController;
-(void)_handleSetupRequirementChanged:(id)arg1 ;
-(void)_handleOnlineStateChanged:(id)arg1 ;
-(void)_handleMessageWaitingStateChanged:(id)arg1 ;
-(void)_handleTaskEndedOrCancelled:(id)arg1 ;
-(void)_voicemailsAdded:(id)arg1 ;
-(void)_handleSuspend:(id)arg1 ;
-(void)_handleActiveNotification:(id)arg1 ;
-(void)_updateUIStateForce:(BOOL)arg1 ;
-(void)_checkMailboxUsage;
-(id)inboxViewController;
-(BOOL)mailboxRequiresSetupPreviousValue;
-(BOOL)sharedServiceIsSubscribedPreviousValue;
-(id)setupViewController;
-(id)noContentViewController;
-(void)setMailboxRequiresSetupPreviousValue:(BOOL)arg1 ;
-(void)setSharedServiceIsSubscribedPreviousValue:(BOOL)arg1 ;
-(void)_updateUIState;
-(void)_invalidateBadge;
-(void)_playVoicemailSound;
-(void)_handleCTIndicatorsVoicemailNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
@end
