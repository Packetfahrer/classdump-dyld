/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <MobilePhoneSettings/TPSetPINViewControllerDelegate.h>

@protocol PHSIMPINUnlockViewControllerDelegate;
@class , TPSetPINViewController;

@interface PHSIMPINUnlockViewController : UIViewController <TPSetPINViewControllerDelegate> {

	BOOL _locking;
	<PHSIMPINUnlockViewControllerDelegate>* _delegate;
	TPSetPINViewController* _setPINViewController;

}

@property (assign) <PHSIMPINUnlockViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) TPSetPINViewController * setPINViewController;                  //@synthesize setPINViewController=_setPINViewController - In the implementation block
@property (assign) BOOL locking;                                                   //@synthesize locking=_locking - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(void)setSetPINViewController:(id)arg1 ;
-(id)setPINViewController;
-(id)initForLocking:(BOOL)arg1 ;
-(void)setLocking:(BOOL)arg1 ;
-(void)_simLockChangedAfterSave:(id)arg1 ;
-(BOOL)locking;
-(void)setPINViewControllerFinished:(id)arg1 success:(BOOL)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
@end
