/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLReachabilityLogger.bundle/PLReachabilityLogger
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PLReachabilityLogger/PLReachabilityLogger-Structs.h>
#import <PowerlogLoggerSupport/PLLogger.h>

@interface PLReachabilityLogger : PLLogger {

	SCNetworkReachabilityRef reachabilityRef;

}
-(void)logReachabilityFlags:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)log;
@end
