/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSData, NSMutableArray;

@interface GEODirectionsFeedback : PBCodable <NSCopying> {

	SCD_Struct_GE82* _stepFeedbacks;
	unsigned _stepFeedbacksCount;
	unsigned _stepFeedbacksSpace;
	NSData* _directionResponseID;
	NSMutableArray* _traversedRouteIDs;

}

@property (nonatomic,readonly) BOOL hasDirectionResponseID; 
@property (nonatomic,retain) NSData * directionResponseID;                    //@synthesize directionResponseID=_directionResponseID - In the implementation block
@property (nonatomic,retain) NSMutableArray * traversedRouteIDs;              //@synthesize traversedRouteIDs=_traversedRouteIDs - In the implementation block
@property (nonatomic,readonly) unsigned stepFeedbacksCount; 
@property (nonatomic,readonly) SCD_Struct_GE82* stepFeedbacks; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDirectionResponseID:(id)arg1 ;
-(void)addTraversedRouteIDs:(id)arg1 ;
-(void)addStepFeedback:(SCD_Struct_GE82)arg1 ;
-(void)setTraversedRouteIDs:(id)arg1 ;
-(void)clearStepFeedbacks;
-(BOOL)hasDirectionResponseID;
-(id)directionResponseID;
-(unsigned)traversedRouteIDsCount;
-(void)clearTraversedRouteIDs;
-(id)traversedRouteIDsAtIndex:(unsigned)arg1 ;
-(unsigned)stepFeedbacksCount;
-(SCD_Struct_GE82)stepFeedbackAtIndex:(unsigned)arg1 ;
-(SCD_Struct_GE82*)stepFeedbacks;
-(void)setStepFeedbacks:(SCD_Struct_GE82*)arg1 count:(unsigned)arg2 ;
-(id)traversedRouteIDs;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
