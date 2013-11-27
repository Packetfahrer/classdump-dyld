/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol GEOTileRequesterDelegate;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList, , NSThread, NSString, NSData;

@interface GEOTileRequester : NSObject {

	GEOTileKeyList* _keyList;
	<GEOTileRequesterDelegate>* _delegate;
	id _context;
	NSThread* _thread;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSData* _auditToken;
	BOOL _requireWiFi;

}

@property (nonatomic,readonly) GEOTileKeyList * keyList;                         //@synthesize keyList=_keyList - In the implementation block
@property (nonatomic,retain) <GEOTileRequesterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSThread * thread;                                  //@synthesize thread=_thread - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                           //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) NSData * auditToken;                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL requireWiFi;                                   //@synthesize requireWiFi=_requireWiFi - In the implementation block
+(unsigned)expiringTilesetsCount;
+(SCD_Struct_GE46*)newExpiringTilesets;
+(BOOL)skipNetworkForKeysWhenPreloading:(id)arg1 ;
+(unsigned char)tileProviderIdentifier;
-(id)bundleVersion;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)bundleIdentifier;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)cancel;
-(void)start;
-(id)auditToken;
-(id)initWithKeyList:(id)arg1 ;
-(void)setRequireWiFi:(BOOL)arg1 ;
-(void)setAuditToken:(id)arg1 ;
-(BOOL)requireWiFi;
-(id)thread;
-(void)setThread:(id)arg1 ;
-(id)keyList;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(void)setBundleIdentifier:(id)arg1 ;
-(void)setBundleVersion:(id)arg1 ;
@end
