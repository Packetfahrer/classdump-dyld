/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyController.h>
#import <Setup/BuddyAppleIDFindMyPhonePageDelegate.h>

@protocol BuddyControllerDelegate;
@class BuddyAppleIDFindMyPhonePage, BuddyAppleIDController;

@interface BuddyAppleIDFMiPUpdateController : NSObject <BuddyController, BuddyAppleIDFindMyPhonePageDelegate> {

	BuddyAppleIDFindMyPhonePage* _findMyPhonePage;
	<BuddyControllerDelegate>* _delegate;
	BuddyAppleIDController* _appleIDController;

}

@property (assign,nonatomic) <BuddyControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)controllerNeedsToRun;
-(BOOL)shouldAllowStartOver;
-(void)buddyControllerDone:(id)arg1 ;
-(BOOL)controllerAllowsNavigatingBack;
-(id)navControllerForCreateAppleIDPages:(id)arg1 ;
-(void)appleIDFindMyPhoneAboutPressed;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)viewController;
@end

