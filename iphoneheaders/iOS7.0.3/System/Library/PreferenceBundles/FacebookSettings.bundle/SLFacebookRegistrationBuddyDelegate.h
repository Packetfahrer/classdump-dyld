/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SLFacebookRegistrationBuddyDelegate <NSObject>
@required
-(id)presentingViewControllerforRegistrationBuddy:(id)arg1;
-(void)registrationBuddyDidCancel:(id)arg1;
-(void)registrationBuddy:(id)arg1 didFailWithErrorCode:(int)arg2;
-(void)registrationBuddy:(id)arg1 didCompleteWithUsername:(id)arg2 password:(id)arg3;
@end
