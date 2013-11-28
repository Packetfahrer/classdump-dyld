/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ACUIIdentityPickerViewControllerDelegate <NSObject>
@required
-(BOOL)isPropertyEnabledForIdentityPickerController:(id)arg1;
-(SecIdentityRef)selectedIdentityForIdentityPickerController:(id)arg1;
-(void)identityPickerController:(id)arg1 setPropertyEnabled:(BOOL)arg2 withIdentity:(SecIdentityRef)arg3;
-(id)localizedSwitchNameForIdentityPickerController:(id)arg1;
-(id)copyIdentitiesForIdentityPickerController:(id)arg1;
-(SecTrustRef)copyTrustForIdentityPickerController:(id)arg1 identity:(SecIdentityRef)arg2;
-(id)emailAddressesForIdentityPickerController:(id)arg1;
-(BOOL)allowEditingForIdentityPickerController:(id)arg1;
@end
