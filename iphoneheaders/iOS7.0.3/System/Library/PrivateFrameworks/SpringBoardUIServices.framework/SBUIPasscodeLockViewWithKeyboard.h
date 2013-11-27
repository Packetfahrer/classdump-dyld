/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>
#import <SpringBoardUIServices/SBUIPasscodeEntryFieldDelegate.h>

@class SBPasscodeKeyboard, SBUIAlphanumericPasscodeEntryField, UILabel, UIView, SBUIRingViewLabelButton;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate> {

	SBPasscodeKeyboard* _keyboard;
	SBUIAlphanumericPasscodeEntryField* _alphaEntryField;
	UILabel* _statusField;
	UIView* _statusFieldBackground;
	SBUIRingViewLabelButton* _emergencyCallButton;
	UIView* _emergencyCallToTopFiller;
	UIView* _emergencyCallLeftFiller;
	UIView* _emergencyCallRightFiller;
	UIView* _statusFieldToTopOrEmergencyCallBottomFiller;
	UIView* _entryFieldToBottomFiller;
	BOOL _wasMinimizedWhenAnimationStarted;
	BOOL _previousKeyboardShowedInlineCandidates;
	BOOL _disableAnimationsDuringMinMax;
	BOOL _triedToMinMaxWhileRotating;
	BOOL _isAnimating;

}

@property (nonatomic,retain) UILabel * statusField;              //@synthesize statusField=_statusField - In the implementation block
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setBackgroundAlpha:(float)arg1 ;
-(float)backgroundAlpha;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)_acceptOrCancelReturnKeyPress;
-(void)setShowsStatusField:(BOOL)arg1 ;
-(void)_updateStatusText:(id)arg1 animated:(BOOL)arg2 ;
-(id)_newStatusField;
-(void)setStatusField:(id)arg1 ;
-(CGRect)_keyboardFrameForInterfaceOrientation:(int)arg1 ;
-(void)_hardwareReturnKeyPressed:(id)arg1 ;
-(void)_geometryChanged:(id)arg1 ;
-(void)_handleWillRotateNotification:(id)arg1 ;
-(void)_handleWillAnimateNotification:(id)arg1 ;
-(void)_handleDidRotateNotification:(id)arg1 ;
-(void)_toggleForEmergencyCall;
-(void)_toggleForStatusField;
-(void)_layoutForMinimizationState:(BOOL)arg1 ;
-(BOOL)_canMinMaxKeyboard;
-(BOOL)_isMinimized;
-(void)_notifyDelegatePasscodeEntered;
-(void)_notifyDelegatePasscodeCancelled;
-(void)_notifyDelegateThatEmergencyCallButtonWasPressed;
-(id)statusField;
-(float)_keyboardToEntryFieldOffset;
-(float)_statusFieldHeight;
-(float)_statusTitleWidth;
-(void)_setMinimized:(BOOL)arg1 ;
-(void)_minimize;
-(void)_maximize;
-(void)passcodeEntryFieldDidAcceptEntry:(id)arg1 ;
-(void)passcodeEntryFieldDidCancelEntry:(id)arg1 ;
-(BOOL)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2 ;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
-(id)passcode;
@end
