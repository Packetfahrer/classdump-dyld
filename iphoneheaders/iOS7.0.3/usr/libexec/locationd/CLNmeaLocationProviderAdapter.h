/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <locationd/CLLocationProviderAdapter.h>
#import <locationd/CLNmeaLocationProviderProtocol.h>

@interface CLNmeaLocationProviderAdapter : CLLocationProviderAdapter <CLNmeaLocationProviderProtocol>
+(id)getSilo;
-(id)initInSilo:(id)arg1 ;
-(void)heartAttack;
-(void)beginService;
-(void)endService;
@end
