/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface GAXSpringboardHelper : NSObject
+(id)_awayController;
+(id)_lockController;
+(id)_syncController;
+(BOOL)hasSystemPasscode;
+(void)endRequiringWallpaper;
+(id)_iconController;
+(id)_uiController;
+(void)activateApp:(id)arg1 ;
+(id)installedApps;
+(void)beginRequiringWallpaper;
+(void)dismissNotificationCenter;
+(void)dismissAppSwitcher;
+(BOOL)isAssistantVisible;
+(void)dismissAssistant;
+(void)animateWallpaperStyleToNormal;
+(id)appWithIdentifier:(id)arg1 ;
+(BOOL)isPurpleBuddyRunning;
+(BOOL)applicationWithIdentifierIsTranslucent:(id)arg1 ;
+(id)appNameForDisplayID:(id)arg1 ;
+(id)appIconForDisplayID:(id)arg1 format:(int)arg2 ;
+(void)updateLockAndIdleTimers;
+(void)setSystemGesturesDisabledByAccessibility:(BOOL)arg1 ;
+(void)animateWallpaperStyleToOriginal;
+(void)quitTopApplication;
+(BOOL)areSystemGesturesDisabled;
+(BOOL)areSystemGesturesDisabledByAccessibility;
+(id)_applicationController;
+(id)_lockScreenController;
+(id)_notificationCenterController;
+(id)_assistantController;
+(id)_backlightController;
+(id)_wallpaperController;
+(id)_wallpaperStyleAnimationFactoryWithDelay:(double)arg1 ;
+(BOOL)isSpringBoardFrontmost;
+(BOOL)isNotificationCenterVisible;
+(BOOL)isMakingEmergencyCall;
+(BOOL)isSystemSleeping;
+(BOOL)isAppSwitcherVisible;
+(BOOL)isSyncingRestoringResettingOrUpdating;
+(BOOL)isDeviceLocked;
+(void)unlockDevice;
@end
