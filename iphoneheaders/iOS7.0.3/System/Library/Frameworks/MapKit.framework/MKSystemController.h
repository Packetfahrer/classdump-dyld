/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKSystemController : NSObject
+(id)sharedInstance;
-(BOOL)supportsPitchAPI;
-(BOOL)supports3DMaps;
-(BOOL)overrideBlurStyle;
-(BOOL)isHiDPI;
-(BOOL)isWifiEnabled;
-(BOOL)supports3DImagery;
-(BOOL)shouldRateLimitSearchCompletions;
-(oneway void)release;
-(int)userInterfaceIdiom;
-(unsigned)retainCount;
-(BOOL)openURL:(id)arg1 ;
-(float)screenScale;
-(BOOL)isInternalInstall;
-(CGSize)screenSize;
@end
