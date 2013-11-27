/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBSIMLockEntryAlertView.h>

@class NSString;

@interface SBSIMLockPUKEntryAlertView : SBSIMLockEntryAlertView {

	int _state;
	NSString* _enteredPUKCode;
	NSString* _newPIN;

}
-(void)setupSuccess;
-(void)setupFailureState;
-(id)_pukAttemptsRemainingLabel;
-(void)_attemptPUKUnlock;
-(void)dealloc;
-(id)label;
-(id)titleText;
-(void)_unlock;
@end
