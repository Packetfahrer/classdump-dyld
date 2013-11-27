/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSArray, NSDictionary, NSSet, NSLock;

@interface SBPlatformController : NSObject {

	NSString* _currentConfigurationName;
	long _defaultIconInfoOnce;
	NSArray* _defaultStarkIconState;
	NSDictionary* _defaultIconState;
	NSSet* _defaultIconStateDisplayIdentifiers;
	NSLock* _iconStateDisplayIdentifiersLock;
	NSSet* _iconStateDisplayIdentifiers;
	NSString* _localizedDeviceName;
	BOOL _hasGasGauge;
	BOOL _supportsOpenGLES2;
	BOOL _internalInstall;
	BOOL _carrierInstall;
	BOOL _singleCoreDevice;

}
+(id)systemBuildVersion;
+(id)sharedInstance;
+(id)hardwareModel;
+(id)uniqueDeviceIdentifier;
+(id)deviceClass;
+(id)productType;
-(void)registerForIconVisibilityChanges;
-(BOOL)hasGasGauge;
-(id)iconStateDisplayIdentifiers;
-(id)localizedPlatformName;
-(void)_loadDefaultIconInfoIfNecessary;
-(void)_visibleIdentifiersChanged:(id)arg1 ;
-(id)_currentConfigurationName;
-(id)defaultIconState;
-(id)defaultStarkIconState;
-(id)defaultIconStateDisplayIdentifiers;
-(BOOL)supportsOpenGLES2;
-(BOOL)isSingleCoreDevice;
-(BOOL)isN90Like;
-(void)dealloc;
-(id)init;
-(BOOL)isCarrierInstall;
-(BOOL)isInternalInstall;
@end
