/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBAlertItem.h>

@protocol OS_dispatch_source;
@class NSObject, NSString, NSDictionary, NSTimer, SBUISound, BKSProcessAssertion;

@interface SBUserNotificationAlert : SBAlertItem {

	unsigned _replyPort;
	NSObject<OS_dispatch_source>* _portWatcher;
	NSObject<OS_dispatch_source>* _expirationTimer;
	BOOL _cleanedUp;
	int _token;
	int _timeout;
	unsigned long _requestFlags;
	NSString* _alertHeader;
	id _alertMessage;
	NSString* _alertMessageDelimiter;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	NSString* _otherButtonTitle;
	NSString* _soundPath;
	NSDictionary* _avControllerAttributes;
	NSDictionary* _avItemAttributes;
	double _soundRepeatDuration;
	NSTimer* _soundStopTimer;
	id _keyboardTypes;
	id _autocapitalizationTypes;
	id _autocorrectionTypes;
	id _textFieldButtonDisplayDefaultButtonURLs;
	id _textFieldButtonImagePaths;
	id _textFieldTitles;
	id _textFieldValues;
	id _textFieldButtonDisplayTitles;
	id _textFieldButtonDisplayDefaultButtonTitles;
	int _currentTextFieldButtonDisplayIndex;
	double _creationTime;
	int _defaultButtonTag;
	int _unlockActionButtonTag;
	unsigned _replyFlags;
	int _defaultButtonIndex;
	int _alternateButtonIndex;
	int _otherButtonIndex;
	NSString* _defaultResponseLaunchBundleID;
	unsigned _cancel : 1;
	unsigned _isActivated : 1;
	unsigned _aboveLock : 1;
	unsigned _displayActionButtonOnLockScreen : 1;
	unsigned _dismissOnLock : 1;
	unsigned _dontDismissOnUnlock : 1;
	unsigned _behavesSuperModally : 1;
	unsigned _allowMenuButtonDismissal : 1;
	unsigned _forcesModalAlertAppearance : 1;
	unsigned _oneButtonPerLine : 1;
	unsigned _groupsTextFields : 1;
	unsigned _usesUndoStyle : 1;
	unsigned _configuredLocked : 1;
	unsigned _configuredNeedsPasscode : 1;
	unsigned _defaultResponseAppLaunchWaitingForPasscode : 1;
	SBUISound* _sound;
	BKSProcessAssertion* _processAssertion;

}

@property (retain) id keyboardTypes;                                          //@synthesize keyboardTypes=_keyboardTypes - In the implementation block
@property (retain) id autocapitalizationTypes;                                //@synthesize autocapitalizationTypes=_autocapitalizationTypes - In the implementation block
@property (retain) id autocorrectionTypes;                                    //@synthesize autocorrectionTypes=_autocorrectionTypes - In the implementation block
@property (retain) id textFieldButtonImagePaths;                              //@synthesize textFieldButtonImagePaths=_textFieldButtonImagePaths - In the implementation block
@property (retain) id textFieldButtonDisplayDefaultButtonURLs;                //@synthesize textFieldButtonDisplayDefaultButtonURLs=_textFieldButtonDisplayDefaultButtonURLs - In the implementation block
@property (retain) id textFieldTitles;                                        //@synthesize textFieldTitles=_textFieldTitles - In the implementation block
@property (retain) id textFieldValues;                                        //@synthesize textFieldValues=_textFieldValues - In the implementation block
@property (retain) id textFieldButtonDisplayTitles;                           //@synthesize textFieldButtonDisplayTitles=_textFieldButtonDisplayTitles - In the implementation block
@property (retain) id textFieldButtonDisplayDefaultButtonTitles;              //@synthesize textFieldButtonDisplayDefaultButtonTitles=_textFieldButtonDisplayDefaultButtonTitles - In the implementation block
@property (retain) NSString * soundPath;                                      //@synthesize soundPath=_soundPath - In the implementation block
@property (retain) NSDictionary * avControllerAttributes;                     //@synthesize avControllerAttributes=_avControllerAttributes - In the implementation block
@property (retain) NSDictionary * avItemAttributes;                           //@synthesize avItemAttributes=_avItemAttributes - In the implementation block
@property (retain) NSString * alertHeader;                                    //@synthesize alertHeader=_alertHeader - In the implementation block
@property (retain) NSString * alertMessage;                                   //@synthesize alertMessage=_alertMessage - In the implementation block
@property (retain) NSString * alertMessageDelimiter;                          //@synthesize alertMessageDelimiter=_alertMessageDelimiter - In the implementation block
@property (retain) NSString * defaultButtonTitle;                             //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (retain) NSString * alternateButtonTitle;                           //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (retain) NSString * otherButtonTitle;                               //@synthesize otherButtonTitle=_otherButtonTitle - In the implementation block
@property (retain) NSString * defaultResponseLaunchBundleID;                  //@synthesize defaultResponseLaunchBundleID=_defaultResponseLaunchBundleID - In the implementation block
-(void)setAlertMessage:(id)arg1 ;
-(id)alertMessage;
-(void)_sendResponse:(int)arg1 ;
-(void)updateWithMessage:(id)arg1 requestFlags:(int)arg2 ;
-(id)initWithMessage:(id)arg1 replyPort:(unsigned)arg2 requestFlags:(int)arg3 auditToken:(SCD_Struct_SB7)arg4 ;
-(BOOL)_needsDismissalWithClickedButtonIndex:(int)arg1 ;
-(void)setDefaultResponseLaunchBundleID:(id)arg1 ;
-(void)setKeyboardTypes:(id)arg1 ;
-(void)setAutocapitalizationTypes:(id)arg1 ;
-(void)setAutocorrectionTypes:(id)arg1 ;
-(void)setTextFieldButtonImagePaths:(id)arg1 ;
-(void)setTextFieldButtonDisplayDefaultButtonURLs:(id)arg1 ;
-(void)setSoundPath:(id)arg1 ;
-(void)setAvControllerAttributes:(id)arg1 ;
-(void)setAvItemAttributes:(id)arg1 ;
-(id)_safeLocalizedValue:(id)arg1 withBundle:(id)arg2 ;
-(void)setAlertHeader:(id)arg1 ;
-(void)setAlertMessageDelimiter:(id)arg1 ;
-(void)setDefaultButtonTitle:(id)arg1 ;
-(void)setAlternateButtonTitle:(id)arg1 ;
-(void)setOtherButtonTitle:(id)arg1 ;
-(void)setTextFieldTitles:(id)arg1 ;
-(void)setTextFieldValues:(id)arg1 ;
-(void)setTextFieldButtonDisplayTitles:(id)arg1 ;
-(void)setTextFieldButtonDisplayDefaultButtonTitles:(id)arg1 ;
-(void)_setSheetDefaultButtonTitle:(id)arg1 ;
-(id)keyboardTypes;
-(id)autocapitalizationTypes;
-(id)autocorrectionTypes;
-(id)textFieldButtonImagePaths;
-(id)textFieldButtonDisplayDefaultButtonURLs;
-(id)textFieldTitles;
-(id)textFieldButtonDisplayTitles;
-(id)textFieldButtonDisplayDefaultButtonTitles;
-(id)soundPath;
-(id)avControllerAttributes;
-(id)avItemAttributes;
-(id)alertHeader;
-(id)alertMessageDelimiter;
-(id)defaultButtonTitle;
-(id)alternateButtonTitle;
-(id)otherButtonTitle;
-(id)defaultResponseLaunchBundleID;
-(void)_textFieldButtonPressed:(id)arg1 ;
-(BOOL)shouldShowInLockScreen;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)forcesModalAlertAppearance;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)cancel;
-(void)_cleanup;
-(BOOL)alertView:(id)arg1 shouldDismissForButtonAtIndex:(int)arg2 ;
-(id)sound;
-(int)token;
-(Class)alertSheetClass;
-(void)performUnlockAction;
-(void)willActivate;
-(void)didFailToActivate;
-(void)willDeactivateForReason:(int)arg1 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(void)noteVolumeOrLockPressed;
-(BOOL)behavesSuperModally;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(BOOL)displayActionButtonOnLockScreen;
-(id)textFieldValues;
-(BOOL)dismissOnLock;
-(void)_setActivated:(BOOL)arg1 ;
@end
