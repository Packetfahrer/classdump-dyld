/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <CoreMotion/CLCompassDatabaseProtocol.h>

@interface CLCompassDatabaseAdapter : CLNotifierServiceAdapter <CLCompassDatabaseProtocol>
+(id)getSilo;
-(id)initInSilo:(id)arg1 ;
-(void)heartAttack;
-(void)beginService;
-(void)endService;
@end
