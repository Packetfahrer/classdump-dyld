/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@class GEOLatLng;

@interface GEOPolyLocationShiftRequest : PBRequest <NSCopying> {

	GEOLatLng* _location;

}

@property (nonatomic,retain) GEOLatLng * location;              //@synthesize location=_location - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)location;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)readFrom:(id)arg1 ;
-(SCD_Struct_GE12)coordinate;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
@end

