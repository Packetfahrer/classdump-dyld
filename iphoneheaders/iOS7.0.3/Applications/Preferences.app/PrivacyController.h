/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, ACAccountStore;

@interface PrivacyController : PSListController {

	PSSpecifier* _locationSpecifier;
	ACAccountStore* _accountStore;

}
-(id)capabilityEnabled:(id)arg1 ;
-(void)updateLocationServicesVisibility;
-(void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2 ;
-(BOOL)hasSocialSpecifiers:(id)arg1 ;
-(id)locationServicesEnabled:(id)arg1 ;
-(void)dealloc;
-(id)specifiers;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)_accountStore;
@end
