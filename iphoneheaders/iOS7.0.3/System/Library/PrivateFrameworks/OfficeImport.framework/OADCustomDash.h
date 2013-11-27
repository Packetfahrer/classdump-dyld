/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDash.h>

@class NSMutableArray;

@interface OADCustomDash : OADDash {

	NSMutableArray* mStops;
	unsigned mAreStopsOverridden : 1;

}
+(id)defaultProperties;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)stopCount;
-(float)dashAtIndex:(unsigned)arg1 ;
-(float)spaceAtIndex:(unsigned)arg1 ;
-(void)setStops:(id)arg1 ;
-(id)stops;
-(void)addStopWithDash:(float)arg1 space:(float)arg2 ;
-(id)initWithDefaults;
-(BOOL)areStopsOverridden;
@end
