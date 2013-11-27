/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation {

	NSString* _address;
	NSString* _addressSHA1;
	NSString* _addressPrefix;
	BOOL _verified;

}

@property (nonatomic,retain) NSString * address;                    //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * addressSHA1;                //@synthesize addressSHA1=_addressSHA1 - In the implementation block
@property (nonatomic,retain) NSString * addressPrefix;              //@synthesize addressPrefix=_addressPrefix - In the implementation block
@property (assign,nonatomic) BOOL verified;                         //@synthesize verified=_verified - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setAddress:(id)arg1 ;
-(id)addressSHA1;
-(void)setAddressSHA1:(id)arg1 ;
-(id)addressPrefix;
-(void)setAddressPrefix:(id)arg1 ;
-(BOOL)verified;
-(void)setVerified:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)address;
@end
