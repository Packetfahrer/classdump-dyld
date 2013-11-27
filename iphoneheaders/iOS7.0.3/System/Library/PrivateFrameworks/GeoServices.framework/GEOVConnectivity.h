/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface GEOVConnectivity : PBCodable {

	NSMutableArray* _junctions;

}

@property (nonatomic,retain) NSMutableArray * junctions;              //@synthesize junctions=_junctions - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)clearJunctions;
-(id)junctionAtIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)junctions;
-(unsigned)junctionsCount;
-(void)addJunction:(id)arg1 ;
-(void)setJunctions:(id)arg1 ;
@end
