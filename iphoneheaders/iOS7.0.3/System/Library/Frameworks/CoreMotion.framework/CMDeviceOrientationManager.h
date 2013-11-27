/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMDeviceOrientationManager : NSObject {

	id _internal;

}
+(void)dummySelector:(id)arg1 ;
+(void)initialize;
-(id)initPrivate;
-(void)deallocPrivate;
-(void)onDeviceOrientation:(const Sample*)arg1 ;
-(void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)stopDeviceOrientationUpdatesPrivate;
-(BOOL)isDeviceOrientationAvailable;
-(BOOL)isDeviceOrientationActive;
-(void)startDeviceOrientationUpdatesToQueue:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)stopDeviceOrientationUpdates;
-(id)deviceOrientationBlocking;
-(void)dealloc;
-(id)init;
@end
