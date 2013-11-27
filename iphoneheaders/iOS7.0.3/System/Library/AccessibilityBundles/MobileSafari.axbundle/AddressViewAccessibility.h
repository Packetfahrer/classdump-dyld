/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/MobileSafari.axbundle/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/AddressViewAccessibility_super.h>

@interface AddressViewAccessibility : AddressViewAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(void)updateReaderButton;
-(void)_hideCompletions;
-(void)_createAddressTextFieldIfNecessary;
-(void)setProgress:(float)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_axLoadAddressTextInfo;
-(void)setShowsSecurityButton:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(unsigned long long)accessibilityTraits;
-(BOOL)accessibilityScrollToVisible;
-(void)_accessibilityLoadAccessibilityInformation;
@end
