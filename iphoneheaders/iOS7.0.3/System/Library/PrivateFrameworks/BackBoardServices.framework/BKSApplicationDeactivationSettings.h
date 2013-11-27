/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <BackBoardServices/BKSXPCCoding.h>

@class NSString;

@interface BKSApplicationDeactivationSettings : NSObject <NSCopying, BKSXPCCoding> {

	BOOL _animated;
	BOOL _underLock;
	BOOL _flip;
	BOOL _crossfade;
	NSString* _contextInfo;

}

@property (nonatomic,copy) NSString * contextInfo;              //@synthesize contextInfo=_contextInfo - In the implementation block
@property (assign,nonatomic) BOOL animated;                     //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) BOOL underLock;                    //@synthesize underLock=_underLock - In the implementation block
@property (assign,nonatomic) BOOL flip;                         //@synthesize flip=_flip - In the implementation block
@property (assign,nonatomic) BOOL crossfade;                    //@synthesize crossfade=_crossfade - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(BOOL)flip;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithSettings:(id)arg1 zone:(NSZoneRef)arg2 ;
-(void)setFlip:(BOOL)arg1 ;
-(BOOL)underLock;
-(BOOL)crossfade;
-(void)setUnderLock:(BOOL)arg1 ;
-(void)setCrossfade:(BOOL)arg1 ;
-(void)setContextInfo:(id)arg1 ;
-(id)contextInfo;
@end
