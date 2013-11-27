/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {

	NSString* _addressID;
	int _correctionStatus;
	NSMutableArray* _significantLocations;
	SCD_Struct_GE52 _has;

}

@property (assign,nonatomic) BOOL hasCorrectionStatus; 
@property (assign,nonatomic) int correctionStatus;                               //@synthesize correctionStatus=_correctionStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * significantLocations;              //@synthesize significantLocations=_significantLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID;                               //@synthesize addressID=_addressID - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setSignificantLocations:(id)arg1 ;
-(void)setAddressID:(id)arg1 ;
-(void)addSignificantLocation:(id)arg1 ;
-(BOOL)hasCorrectionStatus;
-(int)correctionStatus;
-(void)setCorrectionStatus:(int)arg1 ;
-(unsigned)significantLocationsCount;
-(void)clearSignificantLocations;
-(id)significantLocationAtIndex:(unsigned)arg1 ;
-(BOOL)hasAddressID;
-(id)addressID;
-(void)setHasCorrectionStatus:(BOOL)arg1 ;
-(id)significantLocations;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
