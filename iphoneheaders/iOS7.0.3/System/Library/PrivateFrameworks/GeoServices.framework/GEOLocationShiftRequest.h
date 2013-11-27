/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@interface GEOLocationShiftRequest : PBRequest <NSCopying> {

	SCD_Struct_GE72 _pixel;

}

@property (assign,nonatomic) SCD_Struct_GE73 pixel;              //@synthesize pixel=_pixel - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(SCD_Struct_GE73)pixel;
-(void)setPixel:(SCD_Struct_GE73)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(SCD_Struct_GE12)coordinate;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
