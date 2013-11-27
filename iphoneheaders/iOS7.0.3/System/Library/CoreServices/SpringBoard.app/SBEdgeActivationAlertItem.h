/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBEdgeActivationAlertItem : SBAlertItem {

	int _error;
	NSString* _reason;
	BOOL _suggestWiFi;
	int _settingsButtonIndex;

}
-(id)initWithErrorCode:(int)arg1 reason:(id)arg2 suggestWiFi:(BOOL)arg3 ;
-(void)_showNetworkPrefs;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(BOOL)dismissOnLock;
@end
