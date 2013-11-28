/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/MobileSafari.axbundle/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/NavigationBarAccessibility_super.h>

@interface NavigationBarAccessibility : NavigationBarAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)_initializeSafeCategoryFromValidationManager;
-(void)_updateText;
-(void)setExpanded:(BOOL)arg1 textFieldSelectionRange:(NSRange)arg2 ;
-(void)_updateShowsLockIcon;
-(void)_readerButtonTapped:(id)arg1 ;
-(void)_compressedBarTapped;
-(void)_updateReaderButtonVisibilityAnimated:(BOOL)arg1 adjustURLLabels:(BOOL)arg2 ;
-(void)_axUpdateURLValue;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)shouldGroupAccessibilityChildren;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(int)_accessibilitySortPriority;
-(BOOL)_accessibilityOnlyComparesByXAxis;
-(void)_accessibilityLoadAccessibilityInformation;
@end
