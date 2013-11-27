/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:49:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ThermalMonitor/BaseCCList.h>

@class DieControlLoop;

@interface tmc77ea83b887acec032e1b5d6e656f64a : BaseCCList {

	DieControlLoop* dieControlLoop;
	unsigned char dieControlLoopMaxLoadIndexTableCPU[256];
	unsigned char dieControlLoopMaxLoadIndexTableGPU[256];

}
-(bool)useTcalAdjust:(int)arg1 ;
-(int)totalSensors;
-(id)initProduct:(id)arg1 ;
-(void)updateAllThermalLoad;
-(void)dealloc;
@end
